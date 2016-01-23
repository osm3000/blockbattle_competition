// Christos Savvopoulos <savvopoulos@gmail.com>
// Elias Sprengel <blockbattle@webagent.eu>
#include "stdafx.h"
#include <cstdlib>

#include "bot-starter.h"
#include "bot-parser.h"
#include <time.h>
#include <Windows.h>

using namespace std;

/**
 * Main File, starts the whole process.
**/

int main() {
  // initialize random seed for our results to be reproducable
  srand(GetCurrentProcessId());
  BotStarter botStarter;
  BotParser parser(botStarter);
  parser.Run();
}
