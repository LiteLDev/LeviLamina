#include <Global.h>
#include <MC/Level.hpp>
#include <MC/Minecraft.hpp>
#include <Utils/GlobalService.h>
#include <EventAPI.h>
using std::cout;
using std::endl;
using std::vector;

THook(void, "?initAsDedicatedServer@Minecraft@@QEAAXXZ", Minecraft* mc) {
	Global<Minecraft> = mc;
	original(mc);
}

vector<function<void(ServerStartedEvent)>> ServerStartedEVCallBacks;
LIAPI void Event::addEventListener(function<void(ServerStartedEvent)> callback) {
    ServerStartedEVCallBacks.push_back(callback);
}
THook(void, "?startServerThread@ServerInstance@@QEAAXXZ", void* a) {
    original(a);
    Global<Level> = Global<Minecraft>->getLevel();
    Global<Level> = (Level*)Global<Minecraft>->getLevel();
    Global<ServerLevel> = (ServerLevel*)Global<Minecraft>->getLevel();
    Global<ServerNetworkHandler> = Global<Minecraft>->getServerNetworkHandler();
    ServerStartedEvent ServerStartedEV;
    for (size_t count = 0; count < ServerStartedEVCallBacks.size(); count++) {
        ServerStartedEVCallBacks[count](ServerStartedEV);
    }
}
#include <EventAPI.h>
class CommandRegistry;
vector<function<void(RegCmdEvent)>> RegCmdEVCallBacks;
LIAPI void Event::addEventListener(function<void(RegCmdEvent)> callback) {
    RegCmdEVCallBacks.push_back(callback);
}
#include <LoggerAPI.h>
THook(void,
      "?setup@ChangeSettingCommand@@SAXAEAVCommandRegistry@@@Z",
      CommandRegistry* rg,
      void* a1) {
    Global<CommandRegistry> = rg;
    original(rg, a1);
    RegCmdEvent cmdregev = {rg};
    for (size_t count = 0; count < RegCmdEVCallBacks.size(); count++) {
        RegCmdEVCallBacks[count](cmdregev);
    }
}

//?initCoreEnums@MinecraftCommands@@QEAAX_NAEBVBaseGameVersion@@@Z
THook(void,
	"?initCoreEnums@MinecraftCommands@@QEAAXAEBVIWorldRegistriesProvider@@AEBVActorFactory@@"
	"AEBVExperiments@@AEBVBaseGameVersion@@@Z",
	MinecraftCommands* a0,
	void* a1,
	void* a2,
	void* a3,
	void* a4) {
	original(a0, a1, a2, a3, a4);
	Global<MinecraftCommands> = a0;
}

THook(void*,
	"?loadServerPlayerData@LevelStorage@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@"
	"VCompoundTag@@@std@@@std@@AEBVPlayer@@_N@Z",
	LevelStorage* a,
	void* b,
	void* c,
	void* d) {
	static bool inited = false;
	if (!inited)
		Global<LevelStorage> = a, inited = true;
	return original(a, b, c, d);
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

