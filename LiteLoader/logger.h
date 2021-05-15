#pragma once
#pragma warning(disable : 4996)
#include <lbpch.h>
#include "pch.h"
inline string gettime() {
    time_t rawtime;
    tm *LocTime;
    char timestr[20];
    time(&rawtime);
    LocTime = localtime(&rawtime);
    strftime(timestr, 20, "%Y-%m-%d %H:%M:%S", LocTime);
    return string(timestr);
}

class Logger2 {
    std::string path;
    std::ofstream logfile;

  public:
    Logger2(std::string path) {
        this->path = path;
        logfile.open(path, std::ios::app);
    }
    template <typename T>
    Logger2 &operator<<(T msg) {
        logfile << msg;
        return *this;
    }
};