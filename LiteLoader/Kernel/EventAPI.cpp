#include <EventAPI.h>
#include <Global.h>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <LoggerAPI.h>
#include <MC/Player.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/ItemStack.hpp>
#include <MC/ServerNetworkHandler.hpp>
#include <MC/Level.hpp>
#include <MC/RespawnPacket.hpp>
#include <MC/BlockLegacy.hpp>
#include <MC/NetworkIdentifier.hpp>
#include <MC/CommandContext.hpp>
#include <MC/CommandOrigin.hpp>
#include <MC/BaseCommandBlock.hpp>
#include <MC/GameMode.hpp>
#include <MC/ConnectionRequest.hpp>
#include <MC/GameMode.hpp>
#include <MC/WebToken.hpp>
#include <RegCommandAPI.h>
using namespace Event;
using std::vector;

class ChangeDimensionRequest;
class Level;
class DisconnectPacket;
class ServerNetworkHandler;
class BaseCommandBlock;
class BlockSource;

#define DeclareEventListeners(EVENT) EventImpl<EVENT>::ListenersContainer EventImpl<EVENT>::listeners

DeclareEventListeners(PreJoinEvent);
DeclareEventListeners(JoinEvent);
DeclareEventListeners(LeftEvent);
DeclareEventListeners(PlayerRespawnEvent);
DeclareEventListeners(Event::ChatEvent);
DeclareEventListeners(ChangeDimEvent);
DeclareEventListeners(PlayerJumpEvent);
DeclareEventListeners(PlayerSneakEvent);
DeclareEventListeners(PlayerAttackEvent);
DeclareEventListeners(PlayerTakeItemEvent);
DeclareEventListeners(PlayerDropItemEvent);
DeclareEventListeners(PlayerEatEvent);
DeclareEventListeners(PlayerConsumeTotemEvent);
DeclareEventListeners(PlayerCmdEvent);
DeclareEventListeners(PlayerEffectChangedEvent);
DeclareEventListeners(PlayerStartDestroyBlockEvent);
DeclareEventListeners(CmdBlockExecuteEvent);
DeclareEventListeners(ServerStartedEvent);
DeclareEventListeners(PostInitEvent);
DeclareEventListeners(PlayerDeathEvent);
DeclareEventListeners(RegCmdEvent);
DeclareEventListeners(PlayerDestroyEvent);
DeclareEventListeners(PlayerUseItemOnEvent);
DeclareEventListeners(MobHurtedEvent);
DeclareEventListeners(PlayerUseItemEvent);
DeclareEventListeners(MobDieEvent);
DeclareEventListeners(ItemUseOnActorEvent);


/////////////////// PreJoin ///////////////////
THook(void, "?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@"
            "AEBVConnectionRequest@@AEAVServerPlayer@@@Z",
      void* ServerNetworkHandler_this, NetworkIdentifier* Ni, ConnectionRequest* a3, ServerPlayer* sp)
{
    try {
        PreJoinEvent ev;
        ev.player = sp;
        ev.ip = Ni->getIP();
        ev.xuid = sp->getXuid();

        if (!ev.call())
            return;
    }
    catch (seh_exception) {
        Logger::Error("Uncaught SEH Exception in Event PreJoin!");
    }
    return original(ServerNetworkHandler_this, Ni, a3, sp);
}


/////////////////// PlayerJoin ///////////////////
THook(bool, "?setLocalPlayerAsInitialized@ServerPlayer@@QEAAXXZ",
    ServerPlayer* _this)
{
    try {
        JoinEvent ev;
        ev.player = _this;

        if (!ev.call())
            return false;
    }
    catch (seh_exception) {
        Logger::Error("Exception at JoinEV");
    }
    return original(_this);
}


/////////////////// PlayerLeft ///////////////////
THook(void, "?_onPlayerLeft@ServerNetworkHandler@@AEAAXPEAVServerPlayer@@_N@Z",
      ServerNetworkHandler* _this, ServerPlayer* sp, bool a3)
{
    try {
        LeftEvent ev;
        ev.player = sp;
        ev.xuid = sp->getXuid();
        ev.call();
    } catch (seh_exception) {
        Logger::Error("Exception at LeftEV");
    }
    return original(_this, sp, a3);
}

/////////////////// PlayerRespawn ///////////////////
THook(void, "?handle@?$PacketHandlerDispatcherInstance@VRespawnPacket@@$0A@@@UEBAXAEBVNetworkIdentifier@@AEAVNetEventCallback@@AEAV?$shared_ptr@VPacket@@@std@@@Z",
    void* _this, NetworkIdentifier* id, ServerNetworkHandler* handler, void* pPacket)
{
    try {
        RespawnPacket* packet = *(RespawnPacket**)pPacket;
        
        PlayerRespawnEvent ev;
        ev.player = packet->getPlayerFromPacket(handler, id);
        ev.call();
    }
    catch (seh_exception) {
        Logger::Error("Exception at LeftEV");
    }
    return original(_this, id, handler, pPacket);
}

/////////////////// PlayerChat ///////////////////
THook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z",
      ServerNetworkHandler* _this, NetworkIdentifier* id, void* text)
{
    try {
        Event::ChatEvent ev;
        ev.player = _this->getServerPlayer(*id);
        ev.msg = std::string(*(std::string*)((uintptr_t)text + 88));

        if (!ev.call())
            return;
    } catch (seh_exception) {
        Logger::Error("Exception at ChatEV");
    }
    return original(_this, id, text);
}

/////////////////// PlayerChangeDim ///////////////////
THook(bool, "?_playerChangeDimension@Level@@AEAA_NPEAVPlayer@@AEAVChangeDimensionRequest@@@Z",
      Level* _this, Player* sp, ChangeDimensionRequest* cdimreq)
{
    ChangeDimEvent ev;
    ev.player = sp;
    bool ret = original(_this, sp, cdimreq);
    ev.call();
    return ret;
}


/////////////////// PlayerJump ///////////////////
THook(void, "?jumpFromGround@Player@@UEAAXXZ",
    Player* pl)
{
    PlayerJumpEvent ev;
    ev.player = pl;
    ev.call();
    return original(pl);
}


/////////////////// PlayerSneak ///////////////////
THook(void, "?sendActorSneakChanged@ActorEventCoordinator@@QEAAXAEAVActor@@_N@Z",
    void* _this, Actor* ac, bool isSneaking)
{
    PlayerSneakEvent ev;
    ev.player = (Player*)ac;
    ev.isSneaking = isSneaking;
    ev.call();
    return original(_this, ac, isSneaking);
}


/////////////////// PlayerAttack ///////////////////
THook(bool, "?attack@Player@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z",
    Player* _this, Actor* ac, int* damageCause)
{
    PlayerAttackEvent ev;
    ev.attacker = _this;
    ev.victim = ac;
    ev.damage = *damageCause;
    if (!ev.call())
        return false;
    return original(_this, ac, damageCause);
}


/////////////////// PlayerTakeItem ///////////////////
THook(bool, "?take@Player@@QEAA_NAEAVActor@@HH@Z",
    Player* _this, Actor* actor, int a2, int a3)
{
    ItemStack* it = (ItemStack*)((uintptr_t)actor + 1864);      //IDA Player::take

    PlayerTakeItemEvent ev;
    ev.player = _this;
    ev.itemEntity = actor;
    ev.itemStack = it;
    if (!ev.call())
        return false;
    return original(_this, actor, a2, a3);
}


/////////////////// PlayerDropItem ///////////////////
THook(bool, "?drop@Player@@UEAA_NAEBVItemStack@@_N@Z",
    Player* _this, ItemStack* it, bool a3)
{
    PlayerDropItemEvent ev;
    ev.player = _this;
    ev.itemStack = it;
    if (!ev.call())
        return false;
    return original(_this, it, a3);
}


/////////////////// PlayerEat ///////////////////
// Food Item Component Legacy
THook(Item*, "?useTimeDepleted@FoodItemComponentLegacy@@UEAAPEBVItem@@AEAVItemStack@@AEAVPlayer@@AEAVLevel@@@Z",
    class FoodItemComponentLegacy* _this, ItemStack* eaten, Player* player, Level* level)
{
    if (eaten->getTypeName() != "minecraft:suspicious_stew")
    {
        PlayerEatEvent ev;
        ev.player = player;
        ev.eating = eaten;
        if (!ev.call())
            return nullptr;
    }
    return original(_this, eaten, player, level);
}
// Food Item Component
THook(Item*, "?useTimeDepleted@FoodItemComponent@@UEAAPEBVItem@@AEAVItemStack@@AEAVPlayer@@AEAVLevel@@@Z",
    class FoodItemComponent* _this, ItemStack* eaten, Player* player, Level* level)
{
    PlayerEatEvent ev;
    ev.player = player;
    ev.eating = eaten;
    if (!ev.call())
        return nullptr;
    return original(_this, eaten, player, level);
}
// SuspiciousStew
THook(Item*, "?useTimeDepleted@SuspiciousStewItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z",
    class SuspiciousStewItem* _this, ItemStack* eaten, Level* level, Player* player)
{
    PlayerEatEvent ev;
    ev.player = player;
    ev.eating = eaten;
    if (!ev.call())
        return nullptr;
    return original(_this, eaten, level, player);
}
// Potion
THook(Item*, "?useTimeDepleted@PotionItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z",
    class PotionItem* _this, ItemStack* eaten, Level* level, Player* player)
{
    PlayerEatEvent ev;
    ev.player = player;
    ev.eating = eaten;
    if (!ev.call())
        return nullptr;
    return original(_this, eaten, level, player);
}
// Medicine
THook(Item*, "?useTimeDepleted@MedicineItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z",
    class MedicineItem* _this, ItemStack* eaten, Level* level, Player* player)
{
    PlayerEatEvent ev;
    ev.player = player;
    ev.eating = eaten;
    if (!ev.call())
        return nullptr;
    return original(_this, eaten, level, player);
}
// milk
THook(Item*, "?useTimeDepleted@BucketItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z",
    class BucketItem* _this, ItemStack* eaten, Level* level, Player* player)
{
    PlayerEatEvent ev;
    ev.player = player;
    ev.eating = eaten;
    if (!ev.call())
        return nullptr;
    return original(_this, eaten, level, player);
}


/////////////////// PlayerConsumeTotem ///////////////////
THook(void, "?consumeTotem@Player@@UEAA_NXZ", Player* player)
{
    PlayerConsumeTotemEvent ev;
    ev.player = player;
    if (!ev.call())
        return;
    return original(player);
}


/////////////////// PlayerEffectChanged ///////////////////
// add
THook(void, "?onEffectAdded@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player* player, MobEffectInstance* effect)
{
    PlayerEffectChangedEvent ev;
    ev.player = player;
    ev.type = PlayerEffectChangedEvent::EventType::Add;
    ev.effect = effect;
    ev.call();
    return original(player, effect);
}
// remove
THook(void, "?onEffectRemoved@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player* player, MobEffectInstance* effect)
{
    PlayerEffectChangedEvent ev;
    ev.player = player;
    ev.type = PlayerEffectChangedEvent::EventType::Remove;
    ev.effect = effect;
    ev.call();
    return original(player, effect);
}
// update
THook(void, "?onEffectUpdated@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player* player, MobEffectInstance* effect)
{
    PlayerEffectChangedEvent ev;
    ev.player = player;
    ev.type = PlayerEffectChangedEvent::EventType::Update;
    ev.effect = effect;
    ev.call();
    return original(player, effect);
}


/////////////////// PlayerStartDestroyBlock ///////////////////
THook(void, "?sendBlockDestructionStarted@BlockEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlockPos@@@Z",
    void* _this, Player* pl, BlockPos* bp)
{
    PlayerStartDestroyBlockEvent ev;
    ev.player = pl;
    ev.blockPos = *bp;
    ev.call();
    return original(_this, pl, bp);
}


/////////////////// PlayerCmd ///////////////////
THook(MCRESULT*, "?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@V?$shared_ptr@VCommandContext@@@std@@_N@Z",
      MinecraftCommands* _this, MCRESULT* rtn, std::shared_ptr<CommandContext> context, bool print)
{
    Player* sp = context->getOrigin().getPlayer();
    MCRESULT* result = original(_this, rtn, context, print);
    if (sp)
    {
        try {
            string cmd = context->getCmd();
            if (!cmd.empty() && cmd.at(0) == '/') {
                cmd = cmd.substr(1, cmd.size() - 1);
            }

            PlayerCmdEvent ev;
            ev.cmd = cmd;
            ev.player = sp;
            ev.result = rtn;

            if (!ev.call())
                return false;
        } catch (seh_exception) {
            Logger::Error("Exception at PlayerUseCmdEV");
        }
    }
    return result;
}


/////////////////// CmdBlockExecute ///////////////////
THook(bool, "?_performCommand@BaseCommandBlock@@AEAA_NAEAVBlockSource@@AEBVCommandOrigin@@AEA_N@Z",
      BaseCommandBlock* _this, BlockSource* a2, CommandOrigin* a3, bool* a4)
{
    try {
        CmdBlockExecuteEvent ev;
        ev.cmd = _this->getCommand();
        ev.blockPos = a3->getBlockPosition();

        if (!ev.call())
            return false;
    } catch (seh_exception) {
        Logger::Error("Exception at CmdBlockExeEV");
    }
    return original(_this, a2, a3, a4);
}


/////////////////// PlayerDeath ///////////////////
THook(void*, "?die@Player@@UEAAXAEBVActorDamageSource@@@Z", ServerPlayer* _this, void* src)
{
    PlayerDeathEvent ev;
    ev.player = _this;
    ev.call();
    return original(_this, src);
}


/////////////////// PlayerDestroy ///////////////////
THook(bool, "?playerWillDestroy@BlockLegacy@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z",
      BlockLegacy* _this, Player* pl, BlockPos& blkpos, Block& bl)
{
    PlayerDestroyEvent ev;
    ev.player = pl;
    ev.block = &bl;
    ev.blockPos = blkpos;

    if (!ev.call())
        return false;
    return original(_this, pl, blkpos, bl);
}


/////////////////// PlayerUseItemOn ///////////////////
THook(bool, "?useItemOn@GameMode@@UEAA_NAEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z",
      GameMode* _this, ItemStack& it, BlockPos bp, unsigned char side, void* a5, void* a6_block) 
{
    try {
        PlayerUseItemOnEvent ev;
        ev.player = _this->getPlayer();
        ev.blockPos = bp;
        ev.itemStack = &it;
        ev.side = side;

        if (!ev.call())
            return false;
    } catch (seh_exception) {
        Logger::Error("Exception at PlayerUseItemOnEV");
    }
    return original(_this, it, bp, side, a5, a6_block);
}


/////////////////// MobHurted ///////////////////
THook(bool, "?_hurt@Mob@@MEAA_NAEBVActorDamageSource@@H_N1@Z",
      Mob* ac, ActorDamageSource& src, int damage, bool unk1_1, bool unk2_0) 
{
    MobHurtedEvent ev;
    ev.victim = ac;
    ev.source = &src;
    ev.damage = damage;
    if (!ev.call())
        return false;
    return original(ac, src, damage, unk1_1, unk2_0);
}


/////////////////// PlayerUseItem ///////////////////
THook(bool, "?baseUseItem@GameMode@@QEAA_NAEAVItemStack@@@Z", GameMode* _this, ItemStack& it) 
{
    try {
        PlayerUseItemEvent ev;
        ev.player = _this->getPlayer();
        ev.itemStack = &it;
        if (!ev.call())
            return false;
    } catch (seh_exception) {
        Logger::Error("Exception at PlayerUseItemEV");
    }
    return original(_this, it);
}


/////////////////// MobDie ///////////////////
THook(bool, "?die@Mob@@UEAAXAEBVActorDamageSource@@@Z", Mob* mob, ActorDamageSource* ads) 
{
    try {
        MobDieEvent ev;
        ev.mob = mob;
        ev.source = Level::getDamageSourceEntity(ads);
        if (!ev.call())
            return false;
    } catch (seh_exception) {
        Logger::Error("Exception at MobDieEV");
    }
    return original(mob, ads);
}


////////////// ItemUseOnActorInventoryEV //////////////
THook(void, "?handle@ItemUseOnActorInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z"
    , ServerNetworkHandler* _this, ServerPlayer* sp, bool unk) 
{
    ItemUseOnActorEvent ev;
    ev.actorRuntimeID = dAccess<ActorRuntimeID, 104>(_this);
    ev.interactiveMode = dAccess<int, 112>(_this);
    ev.call();
    return original(_this, sp, unk);
}

////////////// ServerStarted //////////////
THook(void, "?startServerThread@ServerInstance@@QEAAXXZ", void* a) {
    original(a);
    ServerStartedEvent ev;
    ev.call();
}

////////////// RegCmd //////////////
THook(void,"?setup@ChangeSettingCommand@@SAXAEAVCommandRegistry@@@Z",
    CommandRegistry* rg, void* a1)
{
    Global<CommandRegistry> = rg;
    original(rg, a1);
    RegCmdEvent ev;
    ev.CMDRg = rg;
    ev.call();
}