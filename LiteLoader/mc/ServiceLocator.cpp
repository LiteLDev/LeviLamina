//#include<lbpch.h>
//#include "api/MC.h"
#include<api/types/types.h>
//#include<api/event/genericEvent.h>
#include <api/serviceLocate.h>
#include <liteloader.h>
#include <loader/Loader.h>
#include <api/Basic_Event.h>

template <class T>
LIAPI T* LocateS<T>::_srv;
using std::cout;
using std::endl;
using std::vector;

//?initAsDedicatedServer@Minecraft@@QEAAXXZ
THook(void, "?init@Minecraft@@QEAAXXZ", Minecraft* mc) {
	LocateS<Minecraft>::assign(*mc);
	original(mc);
}
static WLevel wl;

vector<function<void(ServerStartedEV)>> ServerStartedEVCallBacks;
LIAPI void Event::addEventListener(function<void(ServerStartedEV)> callback) {
	ServerStartedEVCallBacks.push_back(callback);
}
THook(void, "?startServerThread@ServerInstance@@QEAAXXZ", void* a) {
	original(a);
	LocateS<Level>::assign(*LocateS<Minecraft>()->getLevel());
	wl.v = (ServerLevel*)LocateS<Minecraft>()->getLevel();
	LocateS<ServerLevel>::assign(*(ServerLevel*)LocateS<Minecraft>()->getLevel());
	LocateS<WLevel>::assign(wl);
	LocateS<ServerNetworkHandler>::assign(*LocateS<Minecraft>()->getServerNetworkHandler());
	//ServerStartedEvent::_call();
	//ServerStartedEvent::_removeall();
	ServerStartedEV ServerStartedEV;
	for (size_t count = 0; count < ServerStartedEVCallBacks.size(); count++) {
		ServerStartedEVCallBacks[count](ServerStartedEV);
	}
}

class CommandRegistry;
vector<function<void(RegCmdEV)>> RegCmdEVCallBacks;
LIAPI void Event::addEventListener(function<void(RegCmdEV)> callback) {
	RegCmdEVCallBacks.push_back(callback);
}
THook(void, "?setup@ChangeSettingCommand@@SAXAEAVCommandRegistry@@@Z", CommandRegistry* rg, void* a1) {
	LocateS<CommandRegistry>::assign(*rg);
	original(rg, a1);
	cout << "[LiteLoader] Registering cmds" << endl;
	RegCmdEV cmdregev = {rg};
	for (size_t count = 0; count < RegCmdEVCallBacks.size(); count++) {
		RegCmdEVCallBacks[count](cmdregev);
	}
}


//?initCoreEnums@MinecraftCommands@@QEAAX_NAEBVBaseGameVersion@@@Z
THook(void, "?initCoreEnums@MinecraftCommands@@QEAAXAEBVIWorldRegistriesProvider@@AEBVActorFactory@@AEBVExperiments@@AEBVBaseGameVersion@@@Z", MinecraftCommands* a0, void* a1, void* a2, void*a3, void*a4) {
	original(a0, a1, a2, a3, a4);
	LocateS<MinecraftCommands>::assign(*a0);
}
/*
THook(void*, "?loadServerPlayerData@LevelStorage@@QEAA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBVPlayer@@_N@Z", LevelStorage* a, void* b,void* c,void* d) {
	static bool inited = false;
	if (!inited)
		LocateS<LevelStorage>::assign(*a), inited = true;
	return original(a, b,c,d);
}*/
#if 0
THook(void*, "??0ChunkSource@@QEAA@V?$unique_ptr@VChunkSource@@U?$default_delete@VChunkSource@@@std@@@std@@@Z", ChunkSource* a1, void** a2) {
	LocateS<ChunkSource>::assign(*a1);
	return original(a1, a2);
}
#endif

//?activate@RakNetServerLocator@@AEAAXXZ
THook(void*, "?_activate@RakNetServerLocator@@AEAAXXZ", RakNetServerLocator* thi) {
	static bool inited = false;
	if (!inited)
		LocateS<RakNetServerLocator>::assign(*thi),inited=true;
	return original(thi);
}

THook(void*, "??0RakPeer@RakNet@@QEAA@XZ", RakPeer_t* p) {
	static bool inited = false;
	if (!inited) {
		inited = 1;
		LocateS<RakPeer_t>::assign(*p);
	}
	return original(p);
}