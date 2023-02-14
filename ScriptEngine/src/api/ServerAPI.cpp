#include "api/APIHelp.h"
#include "api/APIHelp.h"
#include "api/ServerAPI.h"
#include <llapi/ServerAPI.h>
#include "api/McAPI.h"
#include <llapi/mc/ServerNetworkHandler.hpp>
#include <llapi/mc/LevelData.hpp>
#include <llapi/mc/SetTimePacket.hpp>
#include <llapi/mc/LoopbackPacketSender.hpp>
#include "main/SafeGuardRecord.h"

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

Local<Value> McClass::getTime(const Arguments& args) {
    int option = 0; // option: 0: daytime, 1: gametime, 2: day

    if(args.size() > 0) {
        CHECK_ARG_TYPE(args[0], ValueKind::kNumber)
        option = args[0].asNumber().toInt32();
    }

    if (option == 0)
        return Number::newNumber(Global<Level>->getTime() % 24000);
    else if (option == 1)
        return Number::newNumber((int)Global<Level>->getCurrentTick());
    else if (option == 2)
        return Number::newNumber(Global<Level>->getTime() / 24000);
    else
        throw script::Exception("The range of this argument is between 0 and 2");

}

Local<Value> McClass::setTime(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber)

    try {
        int currentTime = Global<Level>->getTime();
        int targetTime = args[0].asNumber().toInt32(); // Tick

        int newTime = currentTime;
        int currentTimeOfDay = currentTime % 24000;

        if ( targetTime > currentTime % 24000 )
            newTime = currentTime + targetTime - currentTimeOfDay;
        else if ( targetTime < currentTimeOfDay )
            newTime = currentTime + targetTime + 24000 - currentTimeOfDay;

        Global<Level>->setTime(newTime);
        SetTimePacket pkt = SetTimePacket(newTime);
        LoopbackPacketSender* pktSender = (LoopbackPacketSender*)Global<Level>->getPacketSender();
        pktSender->send(pkt);
    }
    CATCH("Fail in setTime!")

    return Boolean::newBoolean(true);
}

Local<Value> McClass::getWeather(const Arguments& args) { // weather: 0: Clear, 1: Rain, 2: Thunder
    if (Global<Level>->getLevelData().isLightning())
        return Number::newNumber(2);
    else if (Global<Level>->getLevelData().isRaining())
        return Number::newNumber(1);

    return Number::newNumber(0);
}

Local<Value> McClass::setWeather(const Arguments& args) {
    CHECK_ARGS_COUNT(args, 1)
    CHECK_ARG_TYPE(args[0], ValueKind::kNumber)

    int duration, weather = args[0].asNumber().toInt32(); // weather: 0: Clear, 1: Rain, 2: Thunder

    try {
        if (args.size() > 1) {
            CHECK_ARG_TYPE(args[1], ValueKind::kNumber);
            duration = args[1].asNumber().toInt32();
        } else {
            Random& random = Global<Level>->getRandom();
            duration = 20 * (SymCall("?nextInt@Random@@UEAAHH@Z", int, Random&, int)(random, 600) + 300);
        }

        if (weather == 1)
            Global<Level>->updateWeather(1.0, duration, 0.0, duration);
        else if (weather == 2)
            Global<Level>->updateWeather(1065353216.0, duration, 1065353216.0, duration);
        else
            Global<Level>->updateWeather(0.0, duration, 0.0, duration);
    }
    CATCH("Fail in setWeather!")

    return Boolean::newBoolean(true);
}
