
public class main {
	public static void main(String[] args) {
		/*
		PointCol monPoint = new PointCol(4,5,"test");
		System.out.println("X : " + monPoint.affichex());
		System.out.println("Y : " + monPoint.affichey());
		System.out.println("C : " + monPoint.afficheCouleur());
		
		monPoint.setCouleur("bleu");
		System.out.println("C : " + monPoint.afficheCouleur());
		
		*/
		
		//objet Point affiche 1 fois
		Point p2 = new Point(1,2);
		p2.affiche();

		//objet PointCol affiche 2 fois (dans Point.affiche() et Pointcol.affiche()
		PointCol p1 = new PointCol(10,20,"jaune");
		p1.affiche();

		
	}
}
