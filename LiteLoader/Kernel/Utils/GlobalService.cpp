#include <Global.h>
#include <Utils/GlobalService.h>
#include <MC/Minecraft.hpp>
#include <MC/Level.hpp>
using std::cout;
using std::endl;
using std::vector;


template <class T>
T* GlobalImpl<T>::_srv;


THook(void, "?initAsDedicatedServer@Minecraft@@QEAAXXZ", Minecraft* mc) {
    GlobalImpl<Minecraft>::assign(*mc);
    original(mc);
}

THook(void, "?startServerThread@ServerInstance@@QEAAXXZ", void* a) {
    original(a);
    GlobalImpl<Level>::assign(*GlobalImpl<Minecraft>()->getLevel());
    GlobalImpl<Level>::assign(*(Level*)GlobalImpl<Minecraft>()->getLevel());
    GlobalImpl<ServerLevel>::assign(*(ServerLevel*)GlobalImpl<Minecraft>()->getLevel());
    GlobalImpl<ServerNetworkHandler>::assign(*GlobalImpl<Minecraft>()->getServerNetworkHandler());
    // ServerStartedEvent::_call();
    // ServerStartedEvent::_removeall();
}

THook(void,
      "?setup@ChangeSettingCommand@@SAXAEAVCommandRegistry@@@Z",
      CommandRegistry* rg,
      void*            a1) {
    GlobalImpl<CommandRegistry>::assign(*rg);
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
    GlobalImpl<MinecraftCommands>::assign(*a0);
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
        GlobalImpl<LevelStorage>::assign(*a), inited = true;
    return original(a, b, c, d);
}
#if 0
THook(void*, "??0ChunkSource@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@@Z", ChunkSource* a1, void** a2) {
	GlobalImpl<ChunkSource>::assign(*a1);
	return original(a1, a2);
}
#endif

//?activate@RakNetServerLocator@@AEAAXXZ
THook(void*, "?_activate@RakNetServerLocator@@AEAAXXZ", RakNetServerLocator* thi) {
    static bool inited = false;
    if (!inited)
        GlobalImpl<RakNetServerLocator>::assign(*thi), inited = true;
    return original(thi);
}

THook(void*, "??0RakPeer@RakNet@@QEAA@XZ", RakNet::RakPeer* p) {
    static bool inited = false;
    if (!inited) {
        inited = 1;
        GlobalImpl<RakNet::RakPeer>::assign(*p);
    }
    return original(p);
}

THook(Scoreboard*, "??0ServerScoreboard@@QEAA@VCommandSoftEnumRegistry@@PEAVLevelStorage@@@Z",
    Scoreboard* _this, void* a2, void* a3)
{
    Scoreboard *sc = original(_this, a2, a3);
    GlobalImpl<Scoreboard>::assign(*sc);
    return sc;
}



//Implementation
template <>
LIAPI RakNet::RakPeer* Global<RakNet::RakPeer>() {
    return GlobalImpl<RakNet::RakPeer>::_srv;
}
template <>
LIAPI Level* Global<Level>() {
    return GlobalImpl<Level>::_srv;
}
template <>
LIAPI CommandRegistry* Global<CommandRegistry>() {
return GlobalImpl<CommandRegistry>::_srv;
}
template <>
LIAPI Minecraft* Global<Minecraft>() {
    return GlobalImpl<Minecraft>::_srv;
}
template <>
LIAPI MinecraftCommands* Global<MinecraftCommands>() {
    return GlobalImpl<MinecraftCommands>::_srv;
}
template <>
LIAPI RakNetServerLocator* Global<RakNetServerLocator>() {
    return GlobalImpl<RakNetServerLocator>::_srv;
}
template <>
LIAPI ServerLevel* Global<ServerLevel>() {
    return GlobalImpl<ServerLevel>::_srv;
}
template <>
LIAPI ServerNetworkHandler* Global<ServerNetworkHandler>() {
    return GlobalImpl<ServerNetworkHandler>::_srv;
}
template <>
LIAPI LevelStorage* Global<LevelStorage>() {
    return GlobalImpl<LevelStorage>::_srv;
}
template <>
LIAPI Scoreboard* Global<Scoreboard>() {
    return GlobalImpl<Scoreboard>::_srv;
}