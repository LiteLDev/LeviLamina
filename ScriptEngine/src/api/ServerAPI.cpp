#include "APIHelp.h"
#include "APIHelp.h"
#include "ServerAPI.h"
#include <llapi/ServerAPI.h>
#include "McAPI.h"
#include <llapi/mc/ServerNetworkHandler.hpp>
#include "../main/SafeGuardRecord.h"

Local<Value> McClass::setMotd(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kString)

    try {
        return Boolean::newBoolean(ll::setServerMotd(args[0].asString().toString()));
    }
    CATCH("Fail in SetServerMotd!")
}

Local<Value> McClass::crashBDS(const Arguments& args) //===========???
{
    if (ll::isDebugMode()) {
        RecordOperation(ENGINE_OWN_DATA()->pluginName, "Crash Server", "Execute mc.crash() to crash server.");
        throw;
        return Boolean::newBoolean(true);
    }
    return Boolean::newBoolean(false);
}

Local<Value> McClass::setMaxNumPlayers(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber)

    try {
        int back = Global<ServerNetworkHandler>->setMaxNumPlayers(args[0].asNumber().toInt32());
        Global<ServerNetworkHandler>->updateServerAnnouncement();
        return Boolean::newBoolean(back == 0 ? true : false);
    }
    CATCH("Fail in setMaxPlayers!")
}
