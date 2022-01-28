#include "GlobalShareData.h"
#include "OperationCount.h"
#include <Configs.h>

OperationCount::OperationCount(const string& name, bool hasDone)
	:name(name)
{
	if (!exists(name))
		globalShareData->operationCountData[name] = 0;
	if (hasDone)
		done();
}

bool OperationCount::exists(const string& name)
{
	return globalShareData->operationCountData.find(name) != globalShareData->operationCountData.end();
}

bool OperationCount::clear()
{
	auto p = globalShareData->operationCountData.find(name);
	if (p != globalShareData->operationCountData.end())
	{
		globalShareData->operationCountData.erase(p);
		return true;
	}
	return false;
}

bool OperationCount::done()
{
	++globalShareData->operationCountData[name];
	return true;
}

inline bool OperationCount::finish()
{
	return done();
}

bool OperationCount::get()
{
	return globalShareData->operationCountData[name];
}

bool OperationCount::hasReachCount(int count)
{
	return globalShareData->operationCountData[name] >= count;
}

bool OperationCount::hasReachMaxEngineCount()
{
	return hasReachCount(globalShareData->pluginsList.size());
}

bool OperationCount::hasReachMaxBackendCount()
{
	return hasReachCount(LXL_BACKEND_TYPE_COUNT);
}