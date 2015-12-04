import java.util.ArrayList; //importation d'ArrayList


public class Catalogue {
	final ArrayList<Prestation> prestations;
	
	//Constructor public
			public Catalogue(){
				prestations = new ArrayList<Prestation>();  
				this.init();
			}
	private void init(){
		Prestation p1 = new Prestation("Prestation1",40.50,Prestation.Categorie.Mecanique); //"attributs" d'une prestation
		Prestation p2 = new Prestation("Prestation2",10,Prestation.Categorie.Carroserie);
		Prestation p3 = new Prestation("Prestation3",47,Prestation.Categorie.Peinture);
		
		prestations.add(p1); //ajouter la prestation p1 à la liste des prestations
		prestations.add(p2);
		prestations.add(p3);

	}
	@Override
	public String toString() {			//toString
		return "Prestations : " + prestations;
	}
}
	