#pragma once
#include "Global.h"
#include <functional>
#include <string>
using std::function;
using std::string;

class Actor;
class ServerPlayer;
class Player;
class Block;
class Mob;
class ItemStack;
class ActorDamageSource;
class Certificate;

class JoinEvent {
public:
    ServerPlayer* Player;
    string IP;
    string xuid;
};

class LeftEvent {
public:
    ServerPlayer* Player;
    string xuid;
};

class ChatEvent {
public:
    Player* pl;
    string msg;
};

class ChangeDimEvent {
public:
    Player* Player;
};

class PlayerCmdEvent {
public:
    Player* Player;
    string cmd;
    MCRESULT mc_result;
};

class CmdBlockExecuteEvent {
public:
    string cmd;
    BlockPos bpos;
};

class ServerStartedEvent {};

class PostInitEvent {};

class PlayerDeathEvent {
public:
    ServerPlayer* Player;
};

class CommandRegistry;
class RegCmdEvent {
public:
    CommandRegistry* CMDRg;
};

class PlayerDestroyEvent {
public:
    Player* Player;
    BlockPos blkpos;
    Block* bl;
};

class PlayerUseItemOnEvent {
public:
    ServerPlayer* Player;
    ItemStack* ItemStack;
    BlockPos blkpos;
    unsigned char side;
};

class MobHurtedEvent {
public:
    Mob* Mob;
    ActorDamageSource* ActorDamageSource;
    int Damage;
};

class PlayerUseItemEvent {
public:
    ServerPlayer* Player;
    ItemStack* ItemStack;
};

class MobDieEvent {
public:
    Mob* mob;
    Actor* DamageSource;
};

class PreJoinEvent {
public:
    Certificate* cert;
};

class ItemUseOnActorEvent {
public:
    ActorRuntimeID ActorRuntimeID;
    int interactiveMode;
};

namespace Event
{
    using PostInitEventCallback = function<void(PostInitEvent)>;
    LIAPI inline void addEventListener(function<void(PostInitEvent)> callback);

    using PreJoinEventCallback = function<void(PreJoinEvent)>;
    LIAPI inline void addEventListener(function<void(PreJoinEvent)> callback);

    using JoinEventCallback = function<void(JoinEvent)>;
    LIAPI inline void addEventListener(function<void(JoinEvent)> callback);

    using LeftEventCallback = function<void(LeftEvent)>;
    LIAPI inline void addEventListener(function<void(LeftEvent)> callback);

    using ChatEventCallback = function<bool(ChatEvent)>;
    LIAPI inline void addEventListener(function<bool(ChatEvent)> callback);

    using ChangeDimEventCallback = function<void(ChangeDimEvent)>;
    LIAPI inline void addEventListener(function<void(ChangeDimEvent)> callback);

    using ServerStartedEventCallback = function<void(ServerStartedEvent)>;
    LIAPI inline void addEventListener(function<void(ServerStartedEvent)> callback);

    using PlayerCmdCallback = function<bool(PlayerCmdEvent)>;
    LIAPI inline void addEventListener(function<bool(PlayerCmdEvent)> callback);

    using CmdBlockExecuteEventCallback = function<bool(CmdBlockExecuteEvent)>;
    LIAPI inline void addEventListener(function<bool(CmdBlockExecuteEvent)> callback);

    using RegCmdEventCallback = function<void(RegCmdEvent)>;
    LIAPI inline void addEventListener(function<void(RegCmdEvent)> callback);

    using PlayerDeathEventCallback = function<void(PlayerDeathEvent)>;
    LIAPI inline void addEventListener(function<void(PlayerDeathEvent)> callback);

    using PlayerDestroyEventCallback = function<void(PlayerDestroyEvent)>;
    LIAPI inline void addEventListener(function<void(PlayerDestroyEvent)> callback);

    using PlayerUseItemOnEventCallback = function<void(PlayerUseItemOnEvent)>;
    LIAPI inline void addEventListener(function<void(PlayerUseItemOnEvent)> callback);

    using MobHurtedEventCallback = function<void(MobHurtedEvent)>;
    LIAPI inline void addEventListener(function<void(MobHurtedEvent)> callback);

    using PlayerUseItemEventCallback = function<void(PlayerUseItemEvent)>;
    LIAPI inline void addEventListener(function<void(PlayerUseItemEvent)> callback);

    using MobDieEventCallback = function<void(MobDieEvent)>;
    LIAPI inline void addEventListener(function<void(MobDieEvent)> callback);

    using ItemUseOnActorEventCallback = function<void(ItemUseOnActorEvent)>;
    LIAPI inline void addEventListener(function<void(ItemUseOnActorEvent)> callback);

}; // namespace Event