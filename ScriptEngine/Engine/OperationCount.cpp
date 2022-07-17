#include "GlobalShareData.h"
#include "OperationCount.h"
#include <PluginManager.h>
#include <Configs.h>
#include <vector>

OperationCount::OperationCount(const string& name)
: name(name) {
}

OperationCount OperationCount::create(const string& name) {
    if (exists(name))
        return OperationCount("");
    else {
        globalShareData->operationCountData[name] = 0;
        return OperationCount(name);
    }
}

bool OperationCount::exists(const string& name) {
    return globalShareData->operationCountData.find(name) != globalShareData->operationCountData.end();
}

bool OperationCount::remove() {
    auto p = globalShareData->operationCountData.find(name);
    if (p != globalShareData->operationCountData.end()) {
        globalShareData->operationCountData.erase(p);
        return true;
    }
    return false;
}

bool OperationCount::done() {
    auto p = globalShareData->operationCountData.find(name);
    if (p != globalShareData->operationCountData.end()) {
        InterlockedIncrement((LONG*)&(p->second));
        return true;
    }
    return false;
}

int OperationCount::get() {
    if (exists(name))
        return globalShareData->operationCountData[name];
    else
        return -1;
}

bool OperationCount::hasReachCount(int count) {
    return get() >= count;
}

bool OperationCount::hasReachMaxEngineCount() {
    return hasReachCount(PluginManager::getAllScriptPlugins().size());
}

bool OperationCount::hasReachMaxBackendCount() {
    return hasReachCount(LLSE_VALID_BACKENDS.size());
}