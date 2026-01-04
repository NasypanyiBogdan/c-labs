fn main() {
    let mut a: [f64; 35] = [0.0; 35];
    for i in 0..35 {
        a[i] = (i + 1) as f64 * 1.5; 
    }

    println!("Вихідний масив 'a' (перші 5 елементів): {:?}", &a[..5]);

    let mut sum_squares_a: f64 = 0.0;
    for &val in a.iter() {
        sum_squares_a += val * val; 
    }

    let norm = sum_squares_a.sqrt();
    println!("Норма масиву n = {:.4}", norm);

    let mut b: [f64; 35] = [0.0; 35];
    for i in 0..35 {
        b[i] = a[i] / norm;
    }

    let mut sum_squares_b: f64 = 0.0;
    for &val in b.iter() {
        sum_squares_b += val * val;
    }

    println!("Сума квадратів елементів масиву 'b' = {:.4}", sum_squares_b);
}