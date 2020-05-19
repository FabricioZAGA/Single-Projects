package Core;

import java.awt.*;
import java.awt.geom.*;

public class CentipedeBody {
	private int posX,
				posY,
				dx,
				dy;
	
	public CentipedeBody(int posX, int posY) {
		this.posX = posX;
		this.posY = posY;
		
		this.dx = 2;
		this.dy = 20;
	}
	
	public Ellipse2D getBody() {
		return new Ellipse2D.Double(this.posX, this.posY, 20, 20);
	}
	
	public void move(Rectangle boardLimits) {
		this.posX += this.dx;
		
		if(this.posX-20 >= boardLimits.getMaxX()-40) {
			this.posY += this.dy;
			this.dx =- this.dx;
		}else if(this.posX <= 0) {
			this.posY += this.dy;
			this.dx =- this.dx;
		}
		
		if(this.posY+20 == boardLimits.getMaxY()) {
			this.posY -= this.dy;
		}
	}
	
	public int getX() {
		return this.posX;
	}
	
	public int getY() {
		return this.posY;
	}
	
	public void setX(int posX) {
		this.posX = posX;
	}
	
	public void setY(int posY) {
		this.posY = posY;
	}
}
