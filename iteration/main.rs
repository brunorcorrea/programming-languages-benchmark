use std::time::Instant;

fn main() {
    let start = Instant::now();

    let mut sum: u64 = 0;
    for i in 1..=1_000_000 {
        sum += i;
    }

    let duration = start.elapsed();
    println!("Soma: {}", sum);
    println!("Tempo: {:.6} segundos", duration.as_secs_f64());
}
