#include "APIHelp.h"
#include "APIHelp.h"
#include "ServerAPI.h"
#include <ServerAPI.h>
#include "McAPI.h"
#include <MC/ServerNetworkHandler.hpp>
#include <SafeGuardRecord.h>

Local<Value> McClass::setMotd(const Arguments& args)
{
    CHECK_ARGS_COUNT(args,1)
    CHECK_ARG_TYPE(args[0],ValueKind::kString)

    try{
        return Boolean::newBoolean(LL::setServerMotd(args[0].asString().toString()));
    }
    CATCH("Fail in SetServerMotd!")
}

Local<Value> McClass::crashBDS(const Arguments& args)               //===========???
{
    RecordOperation(ENGINE_OWN_DATA()->pluginName, "Crash Server", "Execute mc.crash() to crash server.");
    throw;
    return Boolean::newBoolean(true);
}

Local<Value> McClass::setMaxNumPlayers(const Arguments& args)
{
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber)

    try{
        int back = Global<ServerNetworkHandler>->setMaxNumPlayers(args[0].asNumber().toInt32());
        Global<ServerNetworkHandler>->updateServerAnnouncement();
        return Boolean::newBoolean(back == 0 ? true : false);
    }
    CATCH("Fail in setMaxPlayers!")
}
