
public class main {
	public static void main(String[] args) {
		PointCol monPoint = new PointCol(4,5,"test");
		System.out.println("X : " + monPoint.affichex());
		System.out.println("Y : " + monPoint.affichey());
		System.out.println("C : " + monPoint.afficheCouleur());
		
		monPoint.setCouleur("bleu");
		System.out.println("C : " + monPoint.afficheCouleur());
	}
}
