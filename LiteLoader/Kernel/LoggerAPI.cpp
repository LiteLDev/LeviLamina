#include <LoggerAPI.h>
#include <ctime>
#include <string>
using namespace std;

namespace Logger
{
    CsLock lock;
    std::ofstream* logFile;
}