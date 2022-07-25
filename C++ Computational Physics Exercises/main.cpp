// Demo of sending data via temporary files.  The default is to send data to gnuplot directly
// through stdin.
//
// Compile it with:
//   g++ -o example-tmpfile example-tmpfile.cc -lboost_iostreams -lboost_system -lboost_filesystem

#include <map>
#include <vector>
#include <cmath>

#include "gnuplot-iostream.h"
#include "radioactive_decay/radioactive_decay.h"

int main() {
	//Gnuplot gp("\"C:\\Program Files\\gnuplot\\bin\\gnuplot.exe\"");

	radioactive_decay app;
	app.run();

}