#pragma once
#include <string>
using std::string;

class OperationCount
{
private:
	string name;

public:
	OperationCount(const string& name, bool hasDone = true);
	static bool exists(const string& name);
	bool clear();

	bool done();
	bool finish();

	bool get();
	bool hasReachCount(int count);
	bool hasReachMaxEngineCount();
	bool hasReachMaxBackendCount();
};