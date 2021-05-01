#pragma once
#include <liteloader.h>
template<typename T>
struct LocateS {
	static T* _srv;
	T& operator*() {
		return *_srv;
	}
	T* operator->() {
		return _srv;
	}
	operator T& () {
		return *_srv;
	}
	static void assign(const T& srv) {
		#ifdef LITELOADER_EXPORTS
		//printf("[LiteLoader][LocateService] located",typeid(decltype(_srv)).name(),"->",(void*)&srv);
		#endif
		_srv = (T*)&srv;
	}
};
template <typename T> T* LocateService() {
	return LocateS<T>::_srv;
}

struct RakPeer_t;
struct WLevel;
class CommandRegistry;
class Level;
class Minecraft;
class MinecraftCommands;
class RakNetServerLocator;
class ServerLevel;
class ServerNetworkHandler;

template <> LIAPI RakPeer_t* LocateService<RakPeer_t>();
template <> LIAPI WLevel* LocateService<WLevel>();
template <> LIAPI CommandRegistry* LocateService<CommandRegistry>();
template <> LIAPI Level* LocateService<Level>();
template <> LIAPI Minecraft* LocateService<Minecraft>();
template <> LIAPI MinecraftCommands* LocateService<MinecraftCommands>();
template <> LIAPI RakNetServerLocator* LocateService<RakNetServerLocator>();
template <> LIAPI ServerLevel* LocateService<ServerLevel>();
template <> LIAPI ServerNetworkHandler* LocateService<ServerNetworkHandler>();