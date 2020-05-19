/*
 * Instituto Tecnológico y de Estudios Superiores de Monterrey		Campus Guadalajara
 * Programación Orientada a Objetos		PROYECTO FINAL
 * André Alberto Contreras Rivera	A01636183
 * 
 */

package Core;

import java.awt.*;
import java.awt.geom.*;

public class Centipede {
	private int posX,
				posY;
	private CentipedeBody[] centipede;
	private int dx=2,
				dy=20;
	
	public Centipede(int posX, int posY) {
		this.posX = posX;
		this.posY = posY;
		
		this.centipede = new CentipedeBody[8];
	}
	
	public Ellipse2D[] getCentipede() {
		Ellipse2D[] centipede = new Ellipse2D[8];
		int a = 0;
		for(int i=0; i < centipede.length; i++) {
			centipede[i] = new Ellipse2D.Double(this.posX + a, this.posY, 20, 20);
			a += 20;
		}
		return centipede;
	}
	
	public CentipedeBody[] getCentipedes() {
		int a = 0;
		for(int i=this.centipede.length-1; i >= 0; i--) {
			CentipedeBody body = new CentipedeBody(posX+a, posY);
			this.centipede[i] = body;
			a += 20;
		}
		return this.centipede;
	}
	
	public void move(Rectangle boardLimits) {
		/*Ellipse2D[] centipede = this.getCentipede();
		for(int i=0; i < centipede.length; i++) {
			centipede[i].getX() += this.dx;
			int pos = (int)(centipede[i].getMinX());
			pos += this.dx;
			
		}*/
		
		/*this.posX += this.dx;
		
		if(this.posX-20 >= boardLimits.getMaxX()-180) {
			this.posY += this.dy;
			this.dx =- this.dx;
		}else if(this.posX <= 0) {
			this.posY += this.dy;
			this.dx =- this.dx;
		}
		
		if(this.posY+20 == boardLimits.getMaxY()) {
			this.posY -= this.dy;
		}*/
		
		for(int i=0; i < this.centipede.length; i++) {
			this.centipede[i].setX(this.centipede[i].getX() + this.dx);
			
			if(this.centipede[i].getX()-20 >= boardLimits.getMaxX()-40) {
				this.centipede[i].setY(this.centipede[i].getY() + this.dy);
				this.dx =- this.dx;
			}else if(this.centipede[i].getX() <= 0) {
				this.centipede[i].setY(this.centipede[i].getY() + this.dy);
				this.dx =- this.dx;
			}
			
			if(this.posY+20 == boardLimits.getMaxY()) {
				this.centipede[i].setY(this.centipede[i].getY() - this.dy);
			}
			
			//this.centipede[i].move(boardLimits);
		}
	}
}
