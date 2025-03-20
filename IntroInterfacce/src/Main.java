import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {
        ArrayList<CorpoSolido> listaDiInterfacce = new ArrayList<>();

        Cubo cubo = new Cubo(7, 2);
        System.out.println(cubo.peso());

        Sfera sfera = new Sfera(2, 2);
        System.out.println(sfera.peso());

        listaDiInterfacce.add(cubo);
        listaDiInterfacce.add(sfera);

        listaDiInterfacce.forEach(System.out::println);

        for(CorpoSolido corpoSolido : listaDiInterfacce){
            if(corpoSolido instanceof Validatore){
                System.out.println("OK, tipo cubo; login");
            } else
                System.out.println("Login non concesso");
        }
    }
}