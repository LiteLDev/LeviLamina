#include <Global.h>
#include <MC/Level.hpp>
#include <MC/Minecraft.hpp>
#include <GlobalServiceAPI.h>

THook(void, "?initAsDedicatedServer@Minecraft@@QEAAXXZ", Minecraft* mc) {
    Global<Minecraft> = mc;
    original(mc);
}

//?initCoreEnums@MinecraftCommands@@QEAAX_NAEBVBaseGameVersion@@@Z
THook(void, "?initCoreEnums@MinecraftCommands@@QEAAXAEBVIWorldRegistriesProvider@@AEBVActorFactory@@AEBVExperiments@@AEBVBaseGameVersion@@@Z",
      MinecraftCommands* a0, void* a1, void* a2, void* a3, void* a4) {
    original(a0, a1, a2, a3, a4);
    Global<MinecraftCommands> = a0;
}

THook(DBStorage*, "??0DBStorage@@QEAA@UDBStorageConfig@@@Z",
      DBStorage* a, struct DBStorageConfig* config)
{
    auto rtn = original(a, config);
    Global<LevelStorage> = (LevelStorage*)a;
    Global<DBStorage> = a;
    return rtn;
}

#if 0
THook(void*, "??0ChunkSource@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@@Z", ChunkSource* a1, void** a2) {
	Global<ChunkSource> = a1);
	return original(a1, a2);
}
#endif

//?activate@RakNetServerLocator@@AEAAXXZ
THook(void*, "?_activate@RakNetServerLocator@@AEAAXXZ", RakNetServerLocator* thi) {
    static bool inited = false;
    if (!inited)
        Global<RakNetServerLocator> = thi, inited = true;
    return original(thi);
}

THook(void*, "??0RakPeer@RakNet@@QEAA@XZ", RakNet::RakPeer* p) {
    static bool inited = false;
    if (!inited) {
        inited = 1;
        Global<RakNet::RakPeer> = p;
    }
    return original(p);
}

THook(Scoreboard*, "??0ServerScoreboard@@QEAA@VCommandSoftEnumRegistry@@PEAVLevelStorage@@@Z",
      Scoreboard* _this, void* a2, void* a3) {
    Scoreboard* sc = original(_this, a2, a3);
    Global<Scoreboard> = sc;
    return sc;
}

THook(int, "?reload@AllowListFile@@QEAA?AW4FileReadResult@@XZ", AllowListFile* _this)
{
    static bool set = false;
    if (!set) {
        Global<AllowListFile> = _this;
        set = true;
    }
    return original(_this);
}
