#pragma once
#include <string>
#include <liteloader.h>
#include <functional>
#include <mc\mass.h>
using namespace std;
typedef unsigned long long xuid_t;
class ServerPlayer;
class Player;
class Block;
class Mob;
class ItemStack;
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

class ChangeDimEV {
public:
	Player* Player;
};

class PlayerUseCmdEV {
public:
	Player* Player;
	string cmd;
	MCRESULT mc_result;
};

class CmdBlockExeEV {
public:
	string cmd;
	BlockPos bpos;
};

class ServerStartedEV {

};

class  PostInitEV {

};

class PlayerDeathEV {
public:
	ServerPlayer* Player;
};

class CommandRegistry;
class RegCmdEV {
public:
	CommandRegistry* CMDRg;
};

class PlayerDestroyEV {
public:
	Player* Player;
	BlockPos blkpos;
	Block* bl;
};

class PlayerUseItemOnEV {
public:
	ServerPlayer* Player;
	ItemStack* ItemStack;
	BlockPos blkpos;
	char side;
};

class MobHurtedEV {
public:
	Mob* Mob;
	ActorDamageSource* ActorDamageSource;
	int Damage;
};

class PlayerUseItemEV {
public:
	ServerPlayer* Player;
	ItemStack* ItemStack;
};

namespace Event {
	LIAPI inline void addEventListener(function<void(JoinEV)> callback);
	LIAPI inline void addEventListener(function<void(LeftEV)> callback);
	LIAPI inline void addEventListener(function<void(ChatEV)> callback);
	LIAPI inline void addEventListener(function<void(ChangeDimEV)> callback);
	LIAPI inline void addEventListener(function<void(ServerStartedEV)> callback);
	LIAPI inline void addEventListener(function<bool(PlayerUseCmdEV)> callback);
	LIAPI inline void addEventListener(function<bool(CmdBlockExeEV)> callback);
	LIAPI inline void addEventListener(function<void(RegCmdEV)> callback);
	LIAPI inline void addEventListener(function<void(PlayerDeathEV)> callback);
	LIAPI inline void addEventListener(function<void(PlayerDestroyEV)> callback);
	LIAPI inline void addEventListener(function<void(PlayerUseItemOnEV)> callback);
	LIAPI inline void addEventListener(function<void(MobHurtedEV)> callback);
	LIAPI inline void addEventListener(function<void(PlayerUseItemEV)> callback);
	LIAPI inline void addEventListener(function<void(PostInitEV)> callback);
};