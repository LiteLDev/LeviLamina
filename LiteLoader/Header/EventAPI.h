#pragma once
#include "Global.h"
#include "MC/MCRESULT.hpp"
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
class CommandRegistry;
class MobEffectInstance;

class PreJoinEvent {
public:
    ServerPlayer* player;
    string ip;
    string xuid;
};

class JoinEvent {
public:
    ServerPlayer* player;
};

class LeftEvent {
public:
    ServerPlayer* player;
    string xuid;
};

class PlayerRespawnEvent {
public:
    ServerPlayer* player;
};

class ChatEvent {
public:
    Player* player;
    string msg;
};

class ChangeDimEvent {
public:
    Player* player;
};

class PlayerJumpEvent {
public:
    Player* player;
};

class PlayerSneakEvent {
public:
    Player* player;
    bool isSneaking;
};

class PlayerAttackEvent {
public:
    Player* attacker;
    Actor* victim;
    int damage;
};

class PlayerTakeItemEvent {
public:
    Player* player;
    Actor* itemEntity;
    ItemStack* itemStack;
};

class PlayerDropItemEvent {
public:
    Player* player;
    ItemStack* itemStack;
};

class PlayerEatEvent {
public:
    Player* player;
    ItemStack* eating;
};

class PlayerConsumeTotemEvent {
public:
    Player* player;
};

class PlayerCmdEvent {
public:
    Player* player;
    string cmd;
    MCRESULT mc_result;
};

class PlayerEffectChangedEvent {
public:
    enum class EventType { Add, Remove, Update };

    Player* player;
    EventType type;
    MobEffectInstance* effect;
};

class PlayerStartDestroyBlockEvent {
public:
    Player* player;
    BlockPos blockPos;
};

class CmdBlockExecuteEvent {
public:
    string cmd;
    BlockPos blockPos;
};

class ServerStartedEvent {};

class PostInitEvent {};

class PlayerDeathEvent {
public:
    ServerPlayer* player;
};

class RegCmdEvent {
public:
    CommandRegistry* CMDRg;
};

class PlayerDestroyEvent {
public:
    Player* player;
    BlockPos blockPos;
    Block* block;
};

class PlayerUseItemOnEvent {
public:
    ServerPlayer* player;
    ItemStack* itemStack;
    BlockPos blockPos;
    unsigned char side;
};

class MobHurtedEvent {
public:
    Mob* mob;
    ActorDamageSource* actorDamageSource;
    int damage;
};

class PlayerUseItemEvent {
public:
    ServerPlayer* player;
    ItemStack* itemStack;
};

class MobDieEvent {
public:
    Mob* mob;
    Actor* damageSource;
};

class ItemUseOnActorEvent {
public:
    ActorRuntimeID actorRuntimeID;
    int interactiveMode;
};

namespace Event
{
    using PostInitEventCallback = function<void(PostInitEvent)>;
    LIAPI void addEventListener(function<void(PostInitEvent)> callback);

    using PreJoinEventCallback = function<bool(PreJoinEvent)>;
    LIAPI void addEventListener(function<bool(PreJoinEvent)> callback);

    using JoinEventCallback = function<void(JoinEvent)>;
    LIAPI void addEventListener(function<void(JoinEvent)> callback);

    using LeftEventCallback = function<void(LeftEvent)>;
    LIAPI void addEventListener(function<void(LeftEvent)> callback);

    using PlayerRespawnEventCallback = function<void(PlayerRespawnEvent)>;
    LIAPI void addEventListener(function<void(PlayerRespawnEvent)> callback);

    using PlayerJumpEventCallback = function<void(PlayerJumpEvent)>;
    LIAPI void addEventListener(function<void(PlayerJumpEvent)> callback);

    using PlayerSneakEventCallback = function<void(PlayerSneakEvent)>;
    LIAPI void addEventListener(function<void(PlayerSneakEvent)> callback);

    using PlayerAttackEventCallback = function<bool(PlayerAttackEvent)>;
    LIAPI void addEventListener(function<bool(PlayerAttackEvent)> callback);

    using PlayerTakeItemEventCallback = function<bool(PlayerTakeItemEvent)>;
    LIAPI void addEventListener(function<bool(PlayerTakeItemEvent)> callback);

    using PlayerDropItemEventCallback = function<bool(PlayerDropItemEvent)>;
    LIAPI void addEventListener(function<bool(PlayerDropItemEvent)> callback);

    using PlayerEatEventCallback = function<bool(PlayerEatEvent)>;
    LIAPI void addEventListener(function<bool(PlayerEatEvent)> callback);

    using PlayerConsumeTotemEventCallback = function<bool(PlayerConsumeTotemEvent)>;
    LIAPI void addEventListener(function<bool(PlayerConsumeTotemEvent)> callback);

    using PlayerEffectChangedEventCallback = function<bool(PlayerEffectChangedEvent)>;
    LIAPI void addEventListener(function<bool(PlayerEffectChangedEvent)> callback);

    using PlayerStartDestroyBlockEventCallback = function<bool(PlayerStartDestroyBlockEvent)>;
    LIAPI void addEventListener(function<bool(PlayerStartDestroyBlockEvent)> callback);

    using ChatEventCallback = function<bool(ChatEvent)>;
    LIAPI void addEventListener(function<bool(ChatEvent)> callback);

    using ChangeDimEventCallback = function<void(ChangeDimEvent)>;
    LIAPI void addEventListener(function<void(ChangeDimEvent)> callback);

    using ServerStartedEventCallback = function<void(ServerStartedEvent)>;
    LIAPI void addEventListener(function<void(ServerStartedEvent)> callback);

    using PlayerCmdCallback = function<bool(PlayerCmdEvent)>;
    LIAPI void addEventListener(function<bool(PlayerCmdEvent)> callback);

    using CmdBlockExecuteEventCallback = function<bool(CmdBlockExecuteEvent)>;
    LIAPI void addEventListener(function<bool(CmdBlockExecuteEvent)> callback);

    using RegCmdEventCallback = function<void(RegCmdEvent)>;
    LIAPI void addEventListener(function<void(RegCmdEvent)> callback);

    using PlayerDeathEventCallback = function<void(PlayerDeathEvent)>;
    LIAPI void addEventListener(function<void(PlayerDeathEvent)> callback);

    using PlayerDestroyEventCallback = function<void(PlayerDestroyEvent)>;
    LIAPI void addEventListener(function<void(PlayerDestroyEvent)> callback);

    using PlayerUseItemOnEventCallback = function<void(PlayerUseItemOnEvent)>;
    LIAPI void addEventListener(function<void(PlayerUseItemOnEvent)> callback);

    using MobHurtedEventCallback = function<void(MobHurtedEvent)>;
    LIAPI void addEventListener(function<void(MobHurtedEvent)> callback);

    using PlayerUseItemEventCallback = function<void(PlayerUseItemEvent)>;
    LIAPI void addEventListener(function<void(PlayerUseItemEvent)> callback);

    using MobDieEventCallback = function<void(MobDieEvent)>;
    LIAPI void addEventListener(function<void(MobDieEvent)> callback);

    using ItemUseOnActorEventCallback = function<void(ItemUseOnActorEvent)>;
    LIAPI void addEventListener(function<void(ItemUseOnActorEvent)> callback);

}; // namespace Event