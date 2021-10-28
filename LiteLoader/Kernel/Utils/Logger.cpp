#include <Utils/Logger.h>
#include <ctime>
#include <string>
using namespace std;

string GetCurrentDateTimeStr() {
    time_t t = time(NULL);
    tm ts;
    localtime_s(&ts, &t);
    char buf[24] = {0};
    strftime(buf, 24, "%Y-%m-%d %H:%M:%S", &ts);
    return string(buf);
}