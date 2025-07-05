const { performance } = require('perf_hooks');

const start = performance.now();

let sum = 0;
for (let i = 1; i <= 1_000_000; i++) {
    sum += i;
}

const end = performance.now();
console.log("Soma:", sum);
console.log(`Tempo: ${(end - start) / 1000} segundos`);
