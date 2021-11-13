#include <Global.h>
#include <Utils/LocateService.h>
#include <MCApi/Minecraft.hpp>
using std::cout;
using std::endl;
using std::vector;


template <class T>
T* LocateServiceImpl<T>::_srv;


THook(void, "?initAsDedicatedServer@Minecraft@@QEAAXXZ", Minecraft* mc) {
    LocateServiceImpl<Minecraft>::assign(*mc);
    original(mc);
}


THook(void, "?startServerThread@ServerInstance@@QEAAXXZ", void* a) {
    original(a);
    LocateServiceImpl<Level>::assign(*LocateServiceImpl<Minecraft>()->getLevel());
    LocateServiceImpl<ServerLevel>::assign(*(ServerLevel*)LocateServiceImpl<Minecraft>()->getLevel());
    LocateServiceImpl<ServerNetworkHandler>::assign(*LocateServiceImpl<Minecraft>()->getServerNetworkHandler());
    // ServerStartedEvent::_call();
    // ServerStartedEvent::_removeall();
}

THook(void,
      "?setup@ChangeSettingCommand@@SAXAEAVCommandRegistry@@@Z",
      CommandRegistry* rg,
      void*            a1) {
    LocateServiceImpl<CommandRegistry>::assign(*rg);
    original(rg, a1);
}

//?initCoreEnums@MinecraftCommands@@QEAAX_NAEBVBaseGameVersion@@@Z
THook(void,
      "?initCoreEnums@MinecraftCommands@@QEAAXAEBVIWorldRegistriesProvider@@AEBVActorFactory@@"
      "AEBVExperiments@@AEBVBaseGameVersion@@@Z",
      MinecraftCommands* a0,
      void*              a1,
      void*              a2,
      void*              a3,
      void*              a4) {
    original(a0, a1, a2, a3, a4);
    LocateServiceImpl<MinecraftCommands>::assign(*a0);
}

THook(void*,
      "?loadServerPlayerData@LevelStorage@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@"
      "VCompoundTag@@@std@@@std@@AEBVPlayer@@_N@Z",
      LevelStorage* a,
      void*         b,
      void*         c,
      void*         d) {
    static bool inited = false;
    if (!inited)
        LocateServiceImpl<LevelStorage>::assign(*a), inited = true;
    return original(a, b, c, d);
}
#if 0
THook(void*, "??0ChunkSource@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@@Z", ChunkSource* a1, void** a2) {
	LocateServiceImpl<ChunkSource>::assign(*a1);
	return original(a1, a2);
}
#endif

//?activate@RakNetServerLocator@@AEAAXXZ
THook(void*, "?_activate@RakNetServerLocator@@AEAAXXZ", RakNetServerLocator* thi) {
    static bool inited = false;
    if (!inited)
        LocateServiceImpl<RakNetServerLocator>::assign(*thi), inited = true;
    return original(thi);
}

THook(void*, "??0RakPeer@RakNet@@QEAA@XZ", RakNet::RakPeer* p) {
    static bool inited = false;
    if (!inited) {
        inited = 1;
        LocateServiceImpl<RakNet::RakPeer>::assign(*p);
    }
    return original(p);
}

//Implementation
template <>
LIAPI RakNet::RakPeer* LocateService<RakNet::RakPeer>() {
    return LocateServiceImpl<RakNet::RakPeer>::_srv;
}
template <>
LIAPI WLevel* LocateService<WLevel>() {
    return LocateServiceImpl<WLevel>::_srv;
}
template <>
LIAPI CommandRegistry* LocateService<CommandRegistry>() {
return LocateServiceImpl<CommandRegistry>::_srv;
}
template <>
LIAPI Level* LocateService<Level>() {
    return LocateServiceImpl<Level>::_srv;
}
template <>
LIAPI Minecraft* LocateService<Minecraft>() {
    return LocateServiceImpl<Minecraft>::_srv;
}
template <>
LIAPI MinecraftCommands* LocateService<MinecraftCommands>() {
    return LocateServiceImpl<MinecraftCommands>::_srv;
}
template <>
LIAPI RakNetServerLocator* LocateService<RakNetServerLocator>() {
    return LocateServiceImpl<RakNetServerLocator>::_srv;
}
template <>
LIAPI ServerLevel* LocateService<ServerLevel>() {
    return LocateServiceImpl<ServerLevel>::_srv;
}
template <>
LIAPI ServerNetworkHandler* LocateService<ServerNetworkHandler>() {
    return LocateServiceImpl<ServerNetworkHandler>::_srv;
}
template <>
LIAPI LevelStorage* LocateService<LevelStorage>() {
    return LocateServiceImpl<LevelStorage>::_srv;
}