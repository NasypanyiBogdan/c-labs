fn main() {
    let p = vec![
        vec![3.0, 1.0, 2.0, -1.0],
        vec![2.0, 1.0, 1.0, 0.0],
        vec![-1.0, 0.0, 0.0, 2.0],
        vec![1.0, -2.0, 3.0, 1.0],
    ];
    let f = vec![
        vec![-1.0, 1.0, 0.0, -1.0],
        vec![2.0, 1.0, -2.0, 0.0],
        vec![-1.0, 0.0, 0.0, 2.0],
        vec![1.0, -2.0, 4.0, 1.0],
    ];
    let n = vec![
        vec![-1.0, 1.0, 0.0, 1.0],
        vec![0.0, 1.0, -2.0, 0.0],
        vec![-1.0, 1.0, 0.0, 2.0],
        vec![-1.0, -2.0, 2.0, 1.0],
    ];

    let z = vec![0.0, 4.0, -3.0, -1.0];
    let r = vec![-1.0, -3.0, 4.0, 0.0]; 
    let p2 = multiply_matrices(&p, &p);
    let fn_mat = multiply_matrices(&f, &n);
    let three_fn = multiply_matrix_scalar(&fn_mat, 3.0);
    let m1 = subtract_matrices(&p2, &three_fn);
    let three_r = multiply_vector_scalar(&r, 3.0);
    let v1 = add_vectors(&z, &three_r);
    let final_result = multiply_matrix_vector(&m1, &v1);

    println!("Результат обчислення виразу (P^2 - 3FN)(z + 3r):");
    println!("{:?}", final_result);
}

fn multiply_matrices(a: &Vec<Vec<f64>>, b: &Vec<Vec<f64>>) -> Vec<Vec<f64>> {
    let size = a.len();
    let mut res = vec![vec![0.0; size]; size];
    for i in 0..size {
        for j in 0..size {
            for k in 0..size {
                res[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    res
}

fn subtract_matrices(a: &Vec<Vec<f64>>, b: &Vec<Vec<f64>>) -> Vec<Vec<f64>> {
    let size = a.len();
    let mut res = vec![vec![0.0; size]; size];
    for i in 0..size {
        for j in 0..size {
            res[i][j] = a[i][j] - b[i][j];
        }
    }
    res
}

fn multiply_matrix_scalar(a: &Vec<Vec<f64>>, s: f64) -> Vec<Vec<f64>> {
    a.iter().map(|row| row.iter().map(|&x| x * s).collect()).collect()
}

fn multiply_matrix_vector(m: &Vec<Vec<f64>>, v: &Vec<f64>) -> Vec<f64> {
    let mut res = vec![0.0; m.len()];
    for i in 0..m.len() {
        for j in 0..v.len() {
            res[i] += m[i][j] * v[j];
        }
    }
    res
}

fn add_vectors(a: &Vec<f64>, b: &Vec<f64>) -> Vec<f64> {
    a.iter().zip(b.iter()).map(|(&x, &y)| x + y).collect()
}

fn multiply_vector_scalar(v: &Vec<f64>, s: f64) -> Vec<f64> {
    v.iter().map(|&x| x * s).collect()
}