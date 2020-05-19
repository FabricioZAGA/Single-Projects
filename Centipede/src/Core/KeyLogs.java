/*
 * Instituto Tecnológico y de Estudios Superiores de Monterrey		Campus Guadalajara
 * Programación Orientada a Objetos		PROYECTO FINAL
 * André Alberto Contreras Rivera	A01636183
 * 
 */

package Core;

import java.awt.event.*;

public class KeyLogs extends KeyAdapter{
	//Up = W; Down = S; Left = A; Right = D; Fire = SPACE.
	public static boolean Up,
						  Down,
						  Left,
						  Right,
						  Fire;
	
	public void keyPressed(KeyEvent evt){
       if(evt.getKeyCode() == KeyEvent.VK_W){
           Up = true;
       }
       if(evt.getKeyCode() == KeyEvent.VK_S){
           Down = true;
       }
       if(evt.getKeyCode() == KeyEvent.VK_A){
           Left = true;
       }
       if(evt.getKeyCode() == KeyEvent.VK_D){
           Right = true;
       }
       if(evt.getKeyCode() == KeyEvent.VK_SPACE) {
    	   Fire = true;
       }
    }
    
    public void keyReleased(KeyEvent evt){
    	if(evt.getKeyCode() == KeyEvent.VK_W){
            Up = false;
        }
        if(evt.getKeyCode() == KeyEvent.VK_S){
            Down = false;
        }
        if(evt.getKeyCode() == KeyEvent.VK_A){
            Left = false;
        }
        if(evt.getKeyCode() == KeyEvent.VK_D){
            Right = false;
        }
        if(evt.getKeyCode() == KeyEvent.VK_SPACE) {
        	Fire = false;
        }
    }
}
