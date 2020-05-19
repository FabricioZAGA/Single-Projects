/*
 * Instituto Tecnológico y de Estudios Superiores de Monterrey		Campus Guadalajara
 * Programación Orientada a Objetos		PROYECTO FINAL
 * André Alberto Contreras Rivera	A01636183
 * 
 */

package Core;

import java.awt.geom.*;

public class Mushroom {
	private int posX,
				posY;
	
	public Mushroom(int posX, int posY) {
		this.posX = posX;
		this.posY = posY;
	}
	
	public Arc2D topMushroom() {
		return new Arc2D.Double(this.posX, this.posY, 20, 20, 0, 180, 0);
	}
	
	public Rectangle2D bottomMushroom() {
		return new Rectangle2D.Double(posX+5, posY+10, 10, 10);
	}
	
	public int getHitboxR() {
		return posX+20;
	}
	
	public int getHitboxL() {
		return posX;
	}
}
