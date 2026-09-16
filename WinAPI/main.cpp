#include<Windows.h>

INT WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInst, LPSTR lpCmdLine, INT nCmdShow)
{
	/*
	---------------------------
	GUI - Graphics User Interface (Графический пользовательский интерфейс);
	1. Окно сообщения	- MessageBox;
	2. Окно диалога		- DialogBox;
	3. Главное окно прилодения - MainWindow;
	Флаги - это биты, которые включают/отключают некоторые возможности.
	Модальным называется окно, которое блокироует своего родителя.
	---------------------------
	*/
	MessageBox
	(
		NULL,	//Родительское окно
		"Hello WinAPI!\nРазработка настольных прилодений для Windows.",//Сообщение, выводимое пользователю
		"Hello",//Заголовок окна
		//Флаги, которые определяют значек, выводимый в окне, набор кнопок, и некоторый дополнительные параметры
		MB_YESNOCANCEL | MB_HELP | MB_ICONQUESTION | MB_DEFBUTTON3 | MB_SYSTEMMODAL
	);
}