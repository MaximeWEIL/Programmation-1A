
public class PointCol extends Point {
	public String couleur;
	public PointCol(int nb1, int nb2, String c){
		super(nb1,nb2);   //appel du constructeur de la super-classe
		couleur = c;
	}
	
	public void setCouleur(String couleur) {
		this.couleur = couleur;
	}

	public String afficheCouleur(){
		return this.couleur;
	}
	
	public int affichex(){
		return super.x;
	}
	
	public int affichey(){
		return super.y;
	}
	
	public void affiche(){
		super.affiche();
		System.out.println("Classe fille -> couleur" + couleur);
	}
}
