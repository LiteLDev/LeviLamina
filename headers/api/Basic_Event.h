#pragma once
#include <string>
#include <liteloader.h>
#include <functional>
using namespace std;
typedef unsigned long long xuid_t;
class ServerPlayer;

class JoinEV {
public:
	ServerPlayer* Player;
	string IP;
	xuid_t xuid;
};

class LeftEV {
public:
	ServerPlayer* Player;
	xuid_t xuid;
};

class ChatEV {
public:
	ServerPlayer* Player;
	string msg;
};

namespace Event {
	LIAPI void addEventListener(function<void(JoinEV)> callback);
	LIAPI void addEventListener(function<void(LeftEV)> callback);
	LIAPI void addEventListener(function<void(ChatEV)> callback);
};