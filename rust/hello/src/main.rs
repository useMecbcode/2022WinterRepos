use std::collections::{HashMap};

fn add(a: i32, b: i32) -> i32 {
    a + b
}

fn main() {
    println!("Hello, world!\t{}", add(3, 6));
    let mut map = HashMap::new();
    map.insert("1", 1);
    println!("{:?}", map);
}
