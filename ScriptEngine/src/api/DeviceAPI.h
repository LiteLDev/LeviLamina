#pragma once
#include "APIHelp.h"


//////////////////// Classes ////////////////////
class Player;
class DeviceClass : public ScriptClass {
private:
    ActorUniqueID id;
    bool isValid = true;

public:
    explicit DeviceClass(Player* p)
    : ScriptClass(ScriptClass::ConstructFromCpp<DeviceClass>{}) {
        setPlayer(p);
    }

    void setPlayer(Player* player);
    Player* getPlayer();


    static Local<Object> newDevice(Player* p);

    Local<Value> getIP();
    Local<Value> getAvgPing();
    Local<Value> getAvgPacketLoss();
    Local<Value> getLastPing();
    Local<Value> getLastPacketLoss();
    Local<Value> getOs();
    Local<Value> getInputMode();
    Local<Value> getServerAddress();
    Local<Value> getClientId();
};
extern ClassDefine<DeviceClass> DeviceClassBuilder;