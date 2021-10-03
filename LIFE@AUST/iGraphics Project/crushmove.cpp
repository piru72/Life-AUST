/*
	author: Chandrima Sarker
*/
# include "headers//iGraphics.h"
# include "headers//bitmap_loader.h"
# include "sad_happy_bar.h"

/*
	function iDraw() is called again and again by the system.
*/
void iDraw()
{
	//place your drawing codes here

	iClear();
	iShowImage(0,0,1000,610,bc);

	iShowImage(230,40,150,35,pic_1);//needed

	sad_happy_bar();//needed

	iShowImage(girl_x,girl_y,50,150,girl[index]);
	 if(check==1){
		 iShowImage(bag_x,bag_y,40,40,bag);
	 }

}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouseMove(int mx, int my)
{
	//place your codes here
}

/*
	function iPassiveMouse() is called when the user moves the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iPassiveMouse(int mx, int my)
{
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
*/
void iMouse(int button, int state, int mx, int my)
{
	if(button == GLUT_LEFT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
		printf("x=%d y=%d\n", mx,my);
	}
	if(button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN)
	{
		//place your codes here
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
*/
void iKeyboard(unsigned char key)
{
	if(key == 'p')
	{
		//do something with 'q'
		iPauseTimer(0);
	}
	if(key == 'r')
	{
		iResumeTimer(0);
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
*/
void iSpecialKeyboard(unsigned char key)
{

	if(key == GLUT_KEY_END)
	{
		exit(0);
	}
	//place your codes for other keys here
}
void load_stressbar_image()
{
	pic_1=iLoadImage("stress_bar.png");

	//pic_2=iLoadImage("b6.png");
	all_pic[0]=iLoadImage("b8.png");
	all_pic[1]=iLoadImage("b7.png");
	all_pic[2]=iLoadImage("b6.png");
    all_pic[3]=iLoadImage("b5.png");
	all_pic[4]=iLoadImage("b4.png");
	all_pic[5]=iLoadImage("b3.png");
    all_pic[6]=iLoadImage("b2.png");
	all_pic[7]=iLoadImage("b1.png");
	all_pic[8]=iLoadImage("b9.png");
	all_pic[9]=iLoadImage("bag.png");


}

int main()
{
	timer();
	
	iInitialize(1000, 610, "Ball Demo");
    load_crush_image();
	load_stressbar_image();
	iStart();


	return 0;
}
