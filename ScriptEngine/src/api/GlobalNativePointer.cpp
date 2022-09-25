#include "api/NativeAPI.h"


Local<Value> GlobalNativePointer::getLevelPtr(const Arguments& args) {
    return NativePointer::newNativePointer(Global<Level>);
}

Local<Value> GlobalNativePointer::getMinecraftPtr(const Arguments& args) {
    return NativePointer::newNativePointer(Global<Minecraft>);
}

Local<Value> GlobalNativePointer::getServerNetworkHandlerPtr(const Arguments& args) {
    return NativePointer::newNativePointer(Global<ServerNetworkHandler>);
}

Local<Value> GlobalNativePointer::getMinecraftCommandsPtr(const Arguments& args) {
    return NativePointer::newNativePointer(Global<MinecraftCommands>);
}

Local<Value> GlobalNativePointer::getLevelStoragePtr(const Arguments& args) {
    return NativePointer::newNativePointer(Global<LevelStorage>);
}

Local<Value> GlobalNativePointer::getDBStoragePtr(const Arguments& args) {
    return NativePointer::newNativePointer(Global<DBStorage>);
}

Local<Value> GlobalNativePointer::getRakNetServerLocatorPtr(const Arguments& args) {
    return NativePointer::newNativePointer(Global<RakNetServerLocator>);
}

Local<Value> GlobalNativePointer::getRakNetRakPeerPtr(const Arguments& args) {
    return NativePointer::newNativePointer(Global<RakNet::RakPeer>);
}

Local<Value> GlobalNativePointer::getScoreboardPtr(const Arguments& args) {
    return NativePointer::newNativePointer(Global<Scoreboard>);
}

Local<Value> GlobalNativePointer::getAllowListFilePtr(const Arguments& args) {
    return NativePointer::newNativePointer(Global<AllowListFile>);
}

Local<Value> GlobalNativePointer::getPropertiesSettingsPtr(const Arguments& args) {
    return NativePointer::newNativePointer(Global<PropertiesSettings>);
}

ClassDefine<GlobalNativePointer> GlobalNativePointerBuilder =
    defineClass<GlobalNativePointer>("GlobalPointer")
        .constructor()
        .function("Level", &GlobalNativePointer::getLevelPtr)
        .function("Minecraft", &GlobalNativePointer::getMinecraftPtr)
        .function("ServerNetworkHandler", &GlobalNativePointer::getServerNetworkHandlerPtr)
        .function("MinecraftCommands", &GlobalNativePointer::getMinecraftCommandsPtr)
        .function("LevelStorage", &GlobalNativePointer::getLevelStoragePtr)
        .function("DBStorage", &GlobalNativePointer::getDBStoragePtr)
        .function("RakNetServerLocator", &GlobalNativePointer::getRakNetServerLocatorPtr)
        .function("RakNetRakPeer", &GlobalNativePointer::getRakNetRakPeerPtr)
        .function("Scoreboard", &GlobalNativePointer::getScoreboardPtr)
        .function("AllowListFile", &GlobalNativePointer::getAllowListFilePtr)
        .function("PropertiesSettings", &GlobalNativePointer::getPropertiesSettingsPtr)
        .build();
