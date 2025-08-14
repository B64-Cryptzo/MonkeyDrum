#include <Windows.h>

/*
* Synopsis: main should initialize the library and create the instances for the main connectors.
* 
* Once initialized, it should allow for direct user input to control which sessions are monitored
* each session should keep a history of the last command and last output. 
* 
* We'll start simple for now
*	- Command: BeginBeat
*		- Send a webhook message to configured channel with the title: [DISCONNECTED]
*	- Command: GetDrums
*		- Return a list of all messages in a configured channel with the title: [CONNECTED]
*	- Command: Beat
*		- Set the current session to an index in the Drums array.
*/

int main() {
	return 0;
}