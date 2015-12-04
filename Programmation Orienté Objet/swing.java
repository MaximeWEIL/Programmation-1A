import javax.swing.*;

public class swing {
	private static void createAndShowGUI() {
		// Création de la fenêtre
		
	JFrame frame = new JFrame("Hello World Swing !");
	//Définit son action sur un clique sur le bouton de fermeture
	frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	
	//Création d'un texte "Hello World"
	JLabel label = new JLabel("Hello World");
	
	//Ajoute la zone de texte dans la fenêtre
	frame.getContentPane().add(label);
	
	//Prépare la fenêtre à s'afficher
	frame.pack();
	
	//Affiche la fenêtre à l'écran
	frame.setVisible(true);
	}
	
	public static void main(String[] args) {
		//Lance la création d'une fenêtre via un thread
			javax.swing.SwingUtilities.invokeLater(new Runnable() {
				public void run() {
					createAndShowGUI();
				}
			});
	}
}



import java.awt.BorderLayout;
import java.awt.GridLayout;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

import javax.swing.*;
