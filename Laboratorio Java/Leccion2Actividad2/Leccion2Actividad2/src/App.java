import java.util.Scanner;

public class App {
    public static void main(String[] args) throws Exception {
        Scanner scanner= new Scanner(System.in);
        int antiguedad;
        System.out.println("Ingrese la antiguedad del empleado: ");
        antiguedad = scanner.nextInt();

        if (antiguedad >= 5) {
            System.out.println("El es elegible para el bono, recibe $1000.");
        }
        else{
            System.out.println("El empleado no es elegible para el bono.");
        }

        scanner.close();
    }
}
