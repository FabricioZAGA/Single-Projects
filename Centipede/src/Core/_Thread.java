/*
 * Instituto Tecnológico y de Estudios Superiores de Monterrey		Campus Guadalajara
 * Programación Orientada a Objetos		PROYECTO FINAL
 * André Alberto Contreras Rivera	A01636183
 * 
 */

package Core;

import java.util.logging.Level;
import java.util.logging.Logger;

public class _Thread extends Thread implements Runnable{
	private Board Tablero;
	
	public _Thread(Board Tablero) {
		this.Tablero = Tablero;
	}
	
	public void run() {
		while(true) {
			try {
				Thread.sleep(10);
			}catch(InterruptedException ex) {
				Logger.getLogger(_Thread.class.getName()).log(Level.SEVERE, null, ex);
			}
			this.Tablero.repaint();
		}
	}
}
