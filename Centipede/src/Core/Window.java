/*
 * Instituto Tecnol�gico y de Estudios Superiores de Monterrey		Campus Guadalajara
 * Programaci�n Orientada a Objetos		PROYECTO FINAL
 * Andr� Alberto Contreras Rivera	A01636183
 * 
 */

package Core;

import javax.swing.JFrame;

public class Window extends JFrame{
	private Board Tablero;
	private _Thread thread;
	
	public Window(){
		this.setTitle("Centipede");
		this.setSize(600, 800);
		this.setLocationRelativeTo(null);
		this.setResizable(false);
		
		this.Tablero = new Board();
		this.add(this.Tablero);
		
		this.addKeyListener(new KeyLogs());
		
		this.thread = new _Thread(this.Tablero);
		this.thread.start();
    }
}
