package main

import (
    "fmt"
    "time"
)

func main() {
    start := time.Now()

    var sum int64 = 0
    for i := int64(1); i <= 1_000_000; i++ {
        sum += i
    }

    elapsed := time.Since(start).Seconds()
    fmt.Println("Soma:", sum)
    fmt.Printf("Tempo: %.6f segundos\n", elapsed)
}
