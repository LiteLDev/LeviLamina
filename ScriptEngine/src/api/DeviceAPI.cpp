#include "api/APIHelp.h"
#include "api/DeviceAPI.h"
#include <string>
#include <llapi/mc/Player.hpp>
#include <llapi/mc/Level.hpp>
#include <llapi/mc/NetworkIdentifier.hpp>
using namespace std;


//////////////////// Class Definition ////////////////////

ClassDefine<DeviceClass> DeviceClassBuilder =
    defineClass<DeviceClass>("LLSE_Device")
        .constructor(nullptr)
        .instanceProperty("ip", &DeviceClass::getIP)
        .instanceProperty("avgPing", &DeviceClass::getAvgPing)
        .instanceProperty("avgPacketLoss", &DeviceClass::getAvgPacketLoss)
        .instanceProperty("lastPing", &DeviceClass::getLastPing)
        .instanceProperty("lastPacketLoss", &DeviceClass::getLastPacketLoss)
        .instanceProperty("os", &DeviceClass::getOs)
        //.instanceProperty("inputMode", &DeviceClass::getInputMode)
        //.instanceProperty("playMode", &DeviceClass::getPlayMode)
        .instanceProperty("serverAddress", &DeviceClass::getServerAddress)
        .instanceProperty("clientId", &DeviceClass::getClientId)
        .build();


//////////////////// Classes ////////////////////

//生成函数
Local<Object> DeviceClass::newDevice(Player* p) {
    auto newp = new DeviceClass(p);
    return newp->getScriptObject();
}

//成员函数
void DeviceClass::setPlayer(Player* player) {
    __try {
        id = player->getOrCreateUniqueID();
    } __except (EXCEPTION_EXECUTE_HANDLER) {
        isValid = false;
    }
}

Player* DeviceClass::getPlayer() {
    if (!isValid)
        return nullptr;
    else
        return ::Global<Level>->getPlayer(id);
}

Local<Value> DeviceClass::getIP() {
    try {
        Player* player = getPlayer();
        if (!player)
            return Local<Value>();

        return String::newString(player->getNetworkIdentifier()->getIP());
    }
    CATCH("Fail in GetIP!")
}

Local<Value> DeviceClass::getAvgPing() {
    try {
        Player* player = getPlayer();
        if (!player)
            return Local<Value>();

        return Number::newNumber(player->getAvgPing());
    }
    CATCH("Fail in getAvgPing!")
}

Local<Value> DeviceClass::getAvgPacketLoss() {
    try {
        Player* player = getPlayer();
        if (!player)
            return Local<Value>();

        return Number::newNumber(player->getAvgPacketLoss());
    }
    CATCH("Fail in getAvgPacketLoss!")
}

Local<Value> DeviceClass::getLastPing() {
    try {
        Player* player = getPlayer();
        if (!player) {
            return Local<Value>();
        }

        return Number::newNumber(player->getLastPing());
    }
    CATCH("Fail in getLastPing!")
}

Local<Value> DeviceClass::getLastPacketLoss() {
    try {
        Player* player = getPlayer();
        if (!player) {
            return Local<Value>();
        }

        return Number::newNumber(player->getLastPacketLoss());
    }
    CATCH("Fail in getLastPacketLoss!")
}

Local<Value> DeviceClass::getOs() {
    try {
        Player* player = getPlayer();
        if (!player)
            return Local<Value>();

        return String::newString(player->getDeviceName());
    }
    CATCH("Fail in getOs!")
}

Local<Value> DeviceClass::getServerAddress() {
    try {
        Player* player = getPlayer();
        if (!player) {
            return Local<Value>();
        }

        return String::newString(player->getServerAddress());
    }
    CATCH("Fail in getServerAddress!")
}

Local<Value> DeviceClass::getClientId() {
    try {
        Player* player = getPlayer();
        if (!player)
            return Local<Value>();

        return String::newString(player->getClientId()); //=============???
    }
    CATCH("Fail in getClientId!")
}

//Local<Value> DeviceClass::getInputMode() {
//    try {
//        Player* player = getPlayer();
//        if (!player)
//            return Local<Value>();
//
//        return Number::newNumber((int)player->getInputMode());
//    }
//    CATCH("Fail in getInputMode!")
//}
//
//Local<Value> DeviceClass::getPlayMode() {
//    try {
//        Player* player = getPlayer();
//        if (!player)
//            return Local<Value>();
//
//        return Number::newNumber((int)player->getPlayMode());
//    }
//    CATCH("Fail in getPlayMode!")
//}