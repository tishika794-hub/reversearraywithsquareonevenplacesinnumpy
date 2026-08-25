public class FibonacciSeries {
    public static void main(String[] args) {
        // Define the number of terms to generate
        int n = 10; 
        
        // Initialize the first two terms of the sequence
        int firstTerm = 0;
        int secondTerm = 1;
        
        System.out.println("The first " + n + " terms of the Fibonacci series are:");
        
        // Loop to compute and print each term
        for (int i = 1; i <= n; i++) {
            // Print the current term followed by a space
            System.out.print(firstTerm + " ");
            
            // Compute the next term by summing the previous two
            int nextTerm = firstTerm + secondTerm;
            
            // Shift the values for the next iteration
            firstTerm = secondTerm;
            secondTerm = nextTerm;
        }
    }
}
