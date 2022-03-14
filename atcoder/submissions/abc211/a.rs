use std::cmp::*;
use proconio::input;
use proconio::marker::Chars;

fn main() {
    let (a,b):(f64,f64) = reads_tuple();
    println!("{}", b + (a - b)/3.0);
}

  fn reads_tuple<T1: std::str::FromStr, T2: std::str::FromStr>() -> (T1, T2) {
    let mut buf = String::new();
    std::io::stdin().read_line(&mut buf).ok();
    let mut it = buf.trim().split_whitespace();
    let x = it.next().unwrap().parse::<T1>().ok().unwrap();
    let y = it.next().unwrap().parse::<T2>().ok().unwrap();
    (x, y)
  }
