#pragma once
#include <liteloader.h>
#include <mc/Certificate.h>
#include <mc\mass.h>
#include <functional>
#include <string>

using std::function;
typedef unsigned long long xuid_t;
class Actor;
class ServerPlayer;
class Player;
class Block;
class Mob;
class ItemStack;

class JoinEV {
  public:
    ServerPlayer *Player;
    string IP;
    xuid_t xuid;
};

class LeftEV {
  public:
    ServerPlayer *Player;
    xuid_t xuid;
};

class ChatEV {
  public:
    Player *pl;
    string msg;
};

class ChangeDimEV {
  public:
    Player *Player;
};

class PlayerUseCmdEV {
  public:
    Player *Player;
    string cmd;
    MCRESULT mc_result;
};

class CmdBlockExeEV {
  public:
    string cmd;
    BlockPos bpos;
};

class ServerStartedEV {};

class PostInitEV {};

class PlayerDeathEV {
  public:
    ServerPlayer *Player;
};

class CommandRegistry;
class RegCmdEV {
  public:
    CommandRegistry *CMDRg;
};

class PlayerDestroyEV {
  public:
    Player *Player;
    BlockPos blkpos;
    Block *bl;
};

class PlayerUseItemOnEV {
  public:
    ServerPlayer *Player;
    ItemStack *ItemStack;
    BlockPos blkpos;
    unsigned char side;
};

class MobHurtedEV {
  public:
    Mob *Mob;
    ActorDamageSource *ActorDamageSource;
    int Damage;
};

class PlayerUseItemEV {
  public:
    ServerPlayer *Player;
    ItemStack *ItemStack;
};

class MobDieEV {
  public:
    Mob *mob;
    Actor *DamageSource;
};

class PreJoinEV {
  public:
    Certificate *cert;
};

namespace Event {
LIAPI inline void addEventListener(function<void(JoinEV)> callback);
LIAPI inline void addEventListener(function<void(LeftEV)> callback);
LIAPI inline void addEventListener(function<bool(ChatEV)> callback);
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
LIAPI inline void addEventListener(function<void(MobDieEV)> callback);
LIAPI inline void addEventListener(function<void(PreJoinEV)> callback);
};  // namespace Event