fn main() {
    let k = 10; 
    let n_fixed = 5; 
    let eps = 0.0001; 
    let a = 0.0;
    let b = 1.0;
    let h = (b - a) / ((k - 1) as f32);

    println!("{:<5} | {:<8} | {:<10} | {:<10} | {:<10}", "i", "x", "Sn (n=5)", "Se (eps)", "y (exact)");
    println!("{:-<55}", "");

    for i in 1..k + 1 {
        let x = a + ((i - 1) as f32) * h;
        let y_exact = ((1.0 + x.powi(2)) / 2.0) * x.atan() - (x / 2.0);
        let mut sn = 0.0;
        for n in 1..n_fixed + 1 {
            sn += term(x, n);
        }

        let mut se = 0.0;
        let mut n = 1;
        loop {
            let an = term(x, n);
            if an.abs() < eps { break; }
            se += an;
            n += 1;
        }

        println!("{:2}    | {:8.5} | {:10.5} | {:10.5} | {:10.5}", i, x, sn, se, y_exact);
    }
}

fn term(x: f32, n: i32) -> f32 {
    let sign = if (n + 1) % 2 == 0 { 1.0 } else { -1.0 };
    let numerator = x.powi(2 * n + 1);
    let denominator = (4 * n.pow(2) - 1) as f32;
    sign * (numerator / denominator)
}