/*
 * Instituto Tecnológico y de Estudios Superiores de Monterrey		Campus Guadalajara
 * Programación Orientada a Objetos		PROYECTO FINAL
 * André Alberto Contreras Rivera	A01636183
 * 
 */

package Core;

import java.awt.*;
import java.awt.geom.*;
import java.util.*;
import javax.swing.*;

public class Board extends JPanel{
	private Centipede centipede;
	private Spaceship spaceship;
	private boolean painting;
	private final Mushroom[] staticMushroom;
	
	public Board() {
		this.centipede = new Centipede(0, 0);
		this.spaceship = new Spaceship(290, 700);
		this.staticMushroom = new Mushroom[40];
		this.painting = true;
		this.setBackground(Color.BLACK);
	}
	
	public void paintComponent(Graphics g) {
		super.paintComponent(g);
		Graphics2D g2d = (Graphics2D) g;
		
		g2d.setColor(Color.GREEN);
		this.draw(g2d);
		
		if(this.painting == true) {
			this.generateMushrooms();
			this.painting = false;
		}else {
			for(int i=0; i < staticMushroom.length; i++) {
				g2d.fill(staticMushroom[i].topMushroom());
				g2d.fill(staticMushroom[i].bottomMushroom());
			}
		}
		
		g.setColor(Color.RED);
		this.spaceship.getSpaceship(g);
		this.refresh();
		this.spaceship.fire(g);
	}
	
	public void draw(Graphics2D g2d) {
		for(int i=0; i < this.centipede.getCentipedes().length; i++) {
			//g2d.fill(this.centipede.getCentipede()[i]);
			g2d.fill(this.centipede.getCentipedes()[i].getBody());
		}
	}
	
	public void refresh() {
		this.centipede.move(this.getBounds());
		this.spaceship.move(this.getBounds());
	}
	
	public void generateMushrooms() {
		Random ran = new Random();
		final int[] filas = new int[20];
		final int[] columnas = new int[24];
		Mushroom mushroom;
		int a = 0;
		int n = 0;
		
		for(int i=0; i < filas.length; i++) {
			filas[i] = 80+a;
			a += 20;
		}
		a=0;
		for(int i=0; i < columnas.length; i++) {
			columnas[i] = 100+a;
			a += 20;
		}
		
		for(int i=0; i < filas.length; i++) {
			for(int j=0; j < 2; j++) {
				mushroom = new Mushroom(ran.nextInt(380)+100, filas[i]);
				this.staticMushroom[n] = mushroom;
				n++;
			}
		}
	}
	
	public RadialGradientPaint colors() {
		Point2D center = new Point2D.Float(0.5f*20,0.5f*20);
		Color[] redG = {Color.RED, Color.GREEN};
		float[] fractions = {0.0f, 0.5f, 1.0f};
		RadialGradientPaint redGreen = new RadialGradientPaint(center, 10, fractions, redG);
		return redGreen;
	}
}
