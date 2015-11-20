//import Voiture.Reparation;


public class Simulation {

	public static void main(String[] args) { //fonction main
		new Simulation();  
	}
	
	public Simulation(){ //Constructeur
		init();
	}
	
	private static void init() {
		Client C1 = new Client("WEIL", "MAXIME", "0388451445"); //Création Client 1
		System.out.println(C1); // Affiche Client 1
		
		Client C2 = new Client("FRIEDRICH", "ANTOINE", "0356849651");
		System.out.println(C2); // Affiche Client 1
		
		Client C3 = new Client("BEAU", "MORGAN", "0348954395");
		System.out.println(C3); // Affiche Client 1
		
		Voiture v1 = new Voiture("Renault","Clio",1994,"AD-BE-32",C1);
		System.out.println(v1);
		
		Catalogue c1 = new Catalogue();
		System.out.println(c1);
		
		//Voiture.Reparation r1 = new Voiture.Reparation(20:04:);


	}
}
