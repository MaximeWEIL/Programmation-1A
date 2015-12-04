
//final permet aux attributs de ne plus pouvoir être modifiés

public class Client {
	final String nom; 		//stock le nom du client(
	final String prenom;	//stock le prénom du client
	String numTel;			//stock le num de tel du client

	
	//Constructor public
	public Client(String pnom, String pprenom, String pnumTel){    
	  nom = FormatString(pnom);	//nom contient le résultat de la fonction FormatString
	  prenom = FormatString(pprenom); // prenom contient le résultat de la fonction FormatString
	  numTel = FormatNum(pnumTel); //numTel contient le résultat de la fonction FormatNum
	} 
	
	
	public String getPrenomNom() {				//getters/setters de Prenom et Nom
		return this.prenom + " " + this.nom;
	}


	private static String FormatString(String pnom){ //1ère lettre en maj, reste en min
			String val = pnom.substring(0,1).toUpperCase(); //Recup la 1ère lettre et la met en maj'
			return val+pnom.substring(1).toLowerCase(); //Retour la 1ère lettre + le reste en min'
			}
	
	private static String FormatNum(String pnumTel){  //0 par +33, Ajout d'espace
	   String Valnum = "+33"; //on stocke +33 dans Valnum
	   Valnum = Valnum+pnumTel.substring(1);
	   
	   Valnum = String.format("%s %s %s %s %s %s", Valnum.substring(0, 3), Valnum.substring(3, 4),
	   	       	Valnum.substring(4, 6), Valnum.substring(6, 8), Valnum.substring(8, 10), Valnum.substring(10, 12)); //ajoute les espaces
	   	 
	   	 return Valnum;
	}
	

	@Override
	public String toString() { //fonction ToString (appelée de base par System.out.println)
		return nom + ", " + prenom + ", ("
				+ numTel + ")";
	}

	@Override
	public boolean equals(Object obj) { //fonction equals
		if (this == obj)
			return true;
		if (obj == null)
			return false;
		if (getClass() != obj.getClass())
			return false;
		Client other = (Client) obj;
		if (nom == null) {
			if (other.nom != null)
				return false;
		} else if (!nom.equals(other.nom))
			return false;
		if (numTel == null) {
			if (other.numTel != null)
				return false;
		} else if (!numTel.equals(other.numTel))
			return false;
		if (prenom == null) {
			if (other.prenom != null)
				return false;
		} else if (!prenom.equals(other.prenom))
			return false;
		return true;
	}

}