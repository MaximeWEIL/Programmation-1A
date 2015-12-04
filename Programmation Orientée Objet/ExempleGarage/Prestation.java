
public class Prestation {
	private final String nom; 		//stock le nom
	private final double tarif;		//stock le tarif
	private final Categorie categorie;
	
			//Constructor public
			public Prestation(String pnom, double ptarif, Categorie pcategorie){    
			  nom = pnom;
			  tarif = ptarif; 
			  categorie = pcategorie; 
			}

	//enumération
	 enum Categorie {
		  Mecanique,
		  Carroserie,
		  Peinture,
		}
	
	//getters
	public String getNom() {
		return nom;
	}
	
	public double getTarif() {
		return tarif;
	}
	
	public Categorie getCategorie() {
		return categorie;
	}

	@Override						//toString
	public String toString() {
		return "\nNom de la prestation : " + nom +  ", tarif : " + tarif + ", categorie : "
				+ categorie;
	}
	
}


