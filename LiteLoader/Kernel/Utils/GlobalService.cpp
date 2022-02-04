#include <Global.h>
#include <MC/Level.hpp>
#include <MC/Minecraft.hpp>
#include <MC/MinecraftCommands.hpp>
#include <MC/DBStorage.hpp>
#include <MC/RakNetServerLocator.hpp>
#include <MC/RakNet.hpp>
#include <MC/Scoreboard.hpp>
#include <MC/AllowListFile.hpp>
#include <GlobalServiceAPI.h>

// Minecraft
TInstanceHook(void, "?initAsDedicatedServer@Minecraft@@QEAAXXZ", Minecraft)
{
    Global<Minecraft> = this;
    original(this);
}

// MinecraftCommands
// ?initCoreEnums@MinecraftCommands@@QEAAX_NAEBVBaseGameVersion@@@Z
TInstanceHook(void, "?initCoreEnums@MinecraftCommands@@QEAAXAEBVIWorldRegistriesProvider@@AEBVActorFactory@@AEBVExperiments@@AEBVBaseGameVersion@@@Z",
      MinecraftCommands, void* a1, void* a2, void* a3, void* a4)
{
    original(this, a1, a2, a3, a4);
    Global<MinecraftCommands> = this;
}

// LevelStorage & DBStorage
TInstanceHook(DBStorage*, "??0DBStorage@@QEAA@UDBStorageConfig@@@Z",
      DBStorage, struct DBStorageConfig* config)
{
    auto ret = original(this, config);
    Global<LevelStorage> = (LevelStorage*)this;
    Global<DBStorage> = this;
    return ret;
}

#if 0
// ChunkSource
THook(void*, "??0ChunkSource@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@@Z", ChunkSource* a1, void** a2) 
{
	Global<ChunkSource> = a1);
	return original(a1, a2);
}
#endif

// RakNetServerLocator
// ?activate@RakNetServerLocator@@AEAAXXZ
TInstanceHook(void*, "?_activate@RakNetServerLocator@@AEAAXXZ", RakNetServerLocator)
{
    static bool set = false;
    if (!set)
    {
        set = true;
        Global<RakNetServerLocator> = this;
    }
    return original(this);
}
// RakNet::RakPeer
TInstanceHook(void*, "??0RakPeer@RakNet@@QEAA@XZ", RakNet::RakPeer)
{
    static bool set = false;
    if (!set)
    {
        set = true;
        Global<RakNet::RakPeer> = this;
    }
    return original(this);
}
// Scoreboard
TInstanceHook(Scoreboard*, "??0ServerScoreboard@@QEAA@VCommandSoftEnumRegistry@@PEAVLevelStorage@@@Z",
      Scoreboard, void* a2, void* a3)
{
    Scoreboard* sc = original(this, a2, a3);
    Global<Scoreboard> = sc;
    return sc;
}
// AllowListFile
TInstanceHook(int, "?reload@AllowListFile@@QEAA?AW4FileReadResult@@XZ", AllowListFile)
{
    static bool set = false;
    if (!set) {
        Global<AllowListFile> = this;
        set = true;
    }
    return original(this);
}
