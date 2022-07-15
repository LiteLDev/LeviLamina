#pragma once
#include <string>
using std::string;

class OperationCount {
private:
    string name;

public:
    OperationCount(const string& name);
    static OperationCount create(const string& name);
    static bool exists(const string& name);
    bool remove();
    operator bool() {
        return exists(name);
    }

    bool done();
    inline bool finish() {
        return done();
    }

    int get();
    bool hasReachCount(int count);
    bool hasReachMaxEngineCount();
    bool hasReachMaxBackendCount();
};