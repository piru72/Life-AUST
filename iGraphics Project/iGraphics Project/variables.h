int play_button,control_button,story_button,about,exit_button;
int loadx;

int screen_play,screen_highscore,screen_control,screen_member,screen_story;

int screen_member_light,screen_control_light,screen_story_light ,screen_highscore_light,screen_play_light,joystick_light;

int screen_go_level_2,screen_level_2;

int obstacle_bamboo;

int screen_level_1,screen_resume_game;

int f=0;

int menu_picture,high_score;


bool showMenu = false,showGameOver=false,loadMenu=true,monkey_gayeb=false;
bool showPlay=false,showAbout=false,showInst=false,showOption=false,showResult=false;

bool showExit=false,showStory=false,showNewGame=false,showResumeGame=false,show2ndMenu=false;

//! code of tara starts here

int rect_x1, rect_y1;
int rect_x, rect_y;
int rect_dx, rect_dy;


//! code of parvez starts here

int rect_y_2;
int rect_dy_2 =10;
int rect_y_3;
int rect_dy_3=13;


/**=======================================================================================================================
 *!                                                   Variable for text input
 *=======================================================================================================================**/

int screen_input;
char player_name[100];
int length;

