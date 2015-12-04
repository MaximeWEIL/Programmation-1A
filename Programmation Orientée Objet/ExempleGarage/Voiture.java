import java.util.ArrayList;
//importation d'ArrayList

import java.util.Calendar; //importation de Calendar

public class Voiture {
	final String marque; 	//stock la marque de la voiture
	final String modele;	//stock le modèle de la voiture
	final int annee;		//stock l'année de fabrication de la voiture
	final String plaque; 	//stock la plaque de la voiture
	Client proprio;			//stock le proprio de type "Client"
	final ArrayList<Reparation> reparations;
	
	public static class Reparation{ //nouvelle "sous-classe" Reparation dans la classe Voiture
		final Calendar date;
		final Prestation prestation;
		
		public Reparation(Calendar date, Prestation prestation) {// constructeur de la sous-classe
			this.date = date;
			this.prestation = prestation;
		}

		@Override
		public String toString() {
			return "Reparation [date=" + date + ", prestation=" + prestation
					+ "]";
		}
	}
	
	//Constructor pour voiture
		public Voiture(String pmarque, String pmodele, int pannee, String pplaque, Client pproprio){    
		  marque = pmarque;
		  modele = pmodele; 
		  annee = pannee; 
		  plaque = pplaque; 
		  proprio = pproprio;
		  reparations = new ArrayList<Reparation>();  
		}
		
		public void ajouterRepar(Reparation rep){ //ajouter des réparations
			reparations.add(rep);
		}
		
		public String afficherRep(){
			String chaine = " ";
			for(Reparation Rep: reparations)
			{
				chaine = chaine + Rep.toString()+"\n";
			}
			return chaine;
			
		}

		//getters des différents attributs
		
		public Client getProprio() {
			return proprio;
		}

		public String getModele() {
			return modele;
		}

		public int getAnnee() {
			return annee;
		}

		public String getPlaque() {
			return plaque;
		}

		public String getMarque() {
			return marque;
		}

		@Override
		public String toString() { // nouveau toString
			return "Marque : " + marque + ", Modele : " + modele
					+ ", annee : " + annee + ", plaque : " + plaque + ", propriétaire : "
					+ proprio;
		} 
	
}
