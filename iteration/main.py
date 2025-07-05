import time

start = time.time()

total = 0
for i in range(1, 1_000_001):
    total += i

end = time.time()

print(f"Soma: {total}")
print(f"Tempo: {end - start:.6f} segundos")
