/*
 * Instituto Tecnol�gico y de Estudios Superiores de Monterrey		Campus Guadalajara
 * Programaci�n Orientada a Objetos		PROYECTO FINAL
 * Andr� Alberto Contreras Rivera	A01636183
 * 
 */

package Core;

import java.awt.*;
import java.awt.geom.*;

public class Spaceship {
	private int posX, posY;
	
	public Spaceship(int posX, int posY) {
		this.posX = posX;
		this.posY = posY;
	}
	
	public void getSpaceship(Graphics g) {
		int[] x = {this.posX, this.posX+10, this.posX+20};
		int[] y = {this.posY, this.posY-20, this.posY};
		g.fillPolygon(x, y, 3);
	}
	
	public void move(Rectangle borderLimits) {
		if(this.posX >= 0 && this.posX <= borderLimits.getMaxX()-21) {
			if(KeyLogs.Left == true) {
				this.posX -= 2;
			}
			if(KeyLogs.Right == true) {
				this.posX += 2;
			}
		}
		if(this.posY+20 >= 650 && this.posY <= borderLimits.getMaxY()) {
			if(KeyLogs.Up == true) {
				this.posY -= 2;
			}
			if(KeyLogs.Down == true) {
				this.posY += 2;
			}
		}
	}
	
	public void setFire(Graphics g) {
		int[] x = {posX+10, posX+10};
		int[] y = {posY-28, posY-23};
		g.drawPolygon(x, y, 2);
	}
	
	public void fire(Graphics g) {
		if(KeyLogs.Fire == true) {
			this.setFire(g);
		}
	}
}
