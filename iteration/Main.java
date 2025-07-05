public class Main {
    public static void main(String[] args) {
        long start = System.nanoTime();

        long sum = 0;
        for (int i = 1; i <= 1_000_000; i++) {
            sum += i;
        }

        long end = System.nanoTime();
        double elapsed = (end - start) / 1_000_000_000.0;

        System.out.println("Soma: " + sum);
        System.out.printf("Tempo: %.6f segundos\n", elapsed);
    }
}
