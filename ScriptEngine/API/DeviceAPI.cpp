#include "APIHelp.h"
#include "DeviceAPI.h"
#include <string>
#include <MC/Player.hpp>
#include <MC/Level.hpp>
#include <MC/NetworkIdentifier.hpp>
using namespace std;


//////////////////// Class Definition ////////////////////

ClassDefine<DeviceClass> DeviceClassBuilder =
	defineClass<DeviceClass>("LXL_Device")
		.constructor(nullptr)
        .instanceProperty("ip", &DeviceClass::getIP)
		.instanceProperty("avgPing", &DeviceClass::getAvgPing)
		.instanceProperty("avgPacketLoss", &DeviceClass::getAvgPacketLoss)
        .instanceProperty("os", &DeviceClass::getOs)
        .instanceProperty("clientId", &DeviceClass::getClientId)
		.build();


//////////////////// Classes ////////////////////

//生成函数
Local<Object> DeviceClass::newDevice(Player* p)
{
    auto newp = new DeviceClass(p);
    return newp->getScriptObject();
}

//成员函数
void DeviceClass::setPlayer(Player* player)
{
    __try
    {
        id = player->getUniqueID();
    }
    __except (EXCEPTION_EXECUTE_HANDLER)
    {
        isValid = false;
    }
}

Player* DeviceClass::getPlayer()
{
    if (!isValid)
        return nullptr;
    else
        return ::Global<Level>->getPlayer(id);
}

Local<Value> DeviceClass::getIP()
{
    try {
        Player* player = getPlayer();
        if (!player)
            return Local<Value>();

        return String::newString(player->getNetworkIdentifier()->getIP());
    }
    CATCH("Fail in GetIP!")
}

Local<Value> DeviceClass::getAvgPing()
{
    try {
        Player* player = getPlayer();
        if (!player)
            return Local<Value>();

        return Number::newNumber(player->getAvgPing());
    }
    CATCH("Fail in getAvgPing!")
}

Local<Value> DeviceClass::getAvgPacketLoss()
{
    try {
        Player* player = getPlayer();
        if (!player)
            return Local<Value>();

        return  Number::newNumber(0);       //=================???
    }
    CATCH("Fail in getAvgPacketLoss!")
}

Local<Value> DeviceClass::getOs()
{
    try {
        Player* player = getPlayer();
        if (!player)
            return Local<Value>();

        return String::newString(player->getDeviceName());
    }
    CATCH("Fail in getOs!")
}

Local<Value> DeviceClass::getClientId()
{
    try {
        Player* player = getPlayer();
        if (!player)
            return Local<Value>();

        return String::newString(player->getClientId());       //=============???
    }
    CATCH("Fail in getClientId!")
}