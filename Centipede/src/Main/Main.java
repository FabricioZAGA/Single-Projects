/*
 * Instituto Tecnol�gico y de Estudios Superiores de Monterrey		Campus Guadalajara
 * Programaci�n Orientada a Objetos		PROYECTO FINAL
 * Andr� Alberto Contreras Rivera	A01636183
 * 
 */

package Main;

import Core.Window;
import javax.swing.JFrame;

public class Main {

	public static void main(String[] args) {
		Window ventana = new Window();
		ventana.setVisible(true);
		ventana.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
	}

}
