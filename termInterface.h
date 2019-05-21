#include<curses.h>
#include<iostream>
#include<vector>
#include<string>
#include<thread>
#include<mutex>
#include"TransmissionRPCRequest.h"

namespace TransmissionRC{
	void runUI();
	void drawScreen();
	void getKeyPress();
	void updateThread();
	typedef struct{
		int offset=0;
		int my=0,mx=0;
		int posx=0,posy=0;
		WINDOW * win;
		int winH=0;
		int winW=0;
	}tcWindow;


};
