﻿#include <Config.h>
#include <EventAPI.h>
#include <Global.h>
#include <MC/ActorDamageSource.hpp>
#include <MC/BaseCommandBlock.hpp>
#include <MC/Block.hpp>
#include <MC/BlockActor.hpp>
#include <MC/BlockLegacy.hpp>
#include <MC/BlockSource.hpp>
#include <MC/CommandContext.hpp>
#include <MC/CommandOrigin.hpp>
#include <MC/ConnectionRequest.hpp>
#include <MC/GameMode.hpp>
#include <MC/HitResult.hpp>
#include <MC/ItemActor.hpp>
#include <MC/ItemStack.hpp>
#include <MC/Level.hpp>
#include <MC/NetworkIdentifier.hpp>
#include <MC/Objective.hpp>
#include <MC/Player.hpp>
#include <MC/RespawnPacket.hpp>
#include <MC/Scoreboard.hpp>
#include <MC/ScoreboardId.hpp>
#include <MC/ServerNetworkHandler.hpp>
#include <MC/ServerPlayer.hpp>
#include <RegCommandAPI.h>
#include <functional>
#include <iostream>
#include <string>
#include <typeinfo>
#include <vector>
using namespace Event;
using std::vector;

class ChangeDimensionRequest;

class Level;

class DisconnectPacket;

class ServerNetworkHandler;

class BaseCommandBlock;

class BlockSource;

#define DeclareEventListeners(EVENT) template <> \
EventTemplate<EVENT>::ListenersContainer EventTemplate<EVENT>::listeners

DeclareEventListeners(PlayerPreJoinEvent);
DeclareEventListeners(PlayerJoinEvent);
DeclareEventListeners(PlayerLeftEvent);
DeclareEventListeners(PlayerRespawnEvent);
DeclareEventListeners(PlayerChatEvent);
DeclareEventListeners(PlayerUseItemEvent);
DeclareEventListeners(PlayerUseItemOnEvent);
DeclareEventListeners(PlayerChangeDimEvent);
DeclareEventListeners(PlayerJumpEvent);
DeclareEventListeners(PlayerSneakEvent);
DeclareEventListeners(PlayerAttackEvent);
DeclareEventListeners(PlayerDieEvent);
DeclareEventListeners(PlayerTakeItemEvent);
DeclareEventListeners(PlayerDropItemEvent);
DeclareEventListeners(PlayerEatEvent);
DeclareEventListeners(PlayerConsumeTotemEvent);
DeclareEventListeners(PlayerCmdEvent);
DeclareEventListeners(PlayerDestroyBlockEvent);
DeclareEventListeners(PlayerPlaceBlockEvent);
DeclareEventListeners(PlayerEffectChangedEvent);
DeclareEventListeners(PlayerStartDestroyBlockEvent);
DeclareEventListeners(PlayerOpenContainerEvent);
DeclareEventListeners(PlayerCloseContainerEvent);
DeclareEventListeners(PlayerInventoryChangeEvent);
DeclareEventListeners(PlayerMoveEvent);
DeclareEventListeners(PlayerSprintEvent);
DeclareEventListeners(PlayerSetArmorEvent);
DeclareEventListeners(PlayerUseRespawnAnchorEvent);
DeclareEventListeners(PlayerOpenContainerScreenEvent);
DeclareEventListeners(PlayerUseFrameBlockEvent);
DeclareEventListeners(MobHurtEvent);
DeclareEventListeners(MobDieEvent);
DeclareEventListeners(EntityExplodeEvent);
DeclareEventListeners(ProjectileHitEntityEvent);
DeclareEventListeners(WitherBossDestroyEvent);
DeclareEventListeners(EntityRideEvent);
DeclareEventListeners(EntityStepOnPressurePlateEvent);
DeclareEventListeners(NpcCmdEvent);
DeclareEventListeners(ProjectileSpawnEvent);
DeclareEventListeners(ItemUseOnActorEvent);
DeclareEventListeners(BlockInteractedEvent);
DeclareEventListeners(ArmorStandChangeEvent);
DeclareEventListeners(BlockExplodeEvent);
DeclareEventListeners(ContainerChangeEvent);
DeclareEventListeners(PistonPushEvent);
DeclareEventListeners(RedStoneUpdateEvent);
DeclareEventListeners(BlockExplodedEvent);
DeclareEventListeners(LiquidFlowEvent);
DeclareEventListeners(ProjectileHitBlockEvent);
DeclareEventListeners(HopperSearchItemEvent);
DeclareEventListeners(RespawnAnchorExplodeEvent);
DeclareEventListeners(HopperPushOutEvent);
DeclareEventListeners(BlockChangedEvent);
DeclareEventListeners(FarmLandDecayEvent);
DeclareEventListeners(FireSpreadEvent);
DeclareEventListeners(CmdBlockExecuteEvent);
DeclareEventListeners(ConsoleCmdEvent);
DeclareEventListeners(PlayerScoreChangedEvent);
DeclareEventListeners(ConsoleOutputEvent);
DeclareEventListeners(PostInitEvent);
DeclareEventListeners(ServerStartedEvent);
DeclareEventListeners(ServerStoppedEvent);
DeclareEventListeners(RegCmdEvent);

#ifdef ENABLE_SEH_PROTECTION
#define IF_LISTENED(EVENT)    \
    if (EVENT::hasListener()) \
    {                         \
        try

#define IF_LISTENED_END(EVENT)                             \
    catch (...)                                            \
    {                                                      \
        logger.error("Event Callback Failed!");       \
        logger.error("Uncaught Exception Detected!"); \
        logger.error("In Event: " #EVENT "");         \
    }                                                      \
    }
#else
#define IF_LISTENED(EVENT)    \
    if (EVENT::hasListener()) \
    {
#define IF_LISTENED_END(EVENT) }
#endif

/////////////////// PreJoin ///////////////////
THook(void, "?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@"
            "AEBVConnectionRequest@@AEAVServerPlayer@@@Z",
      void* ServerNetworkHandler_this, NetworkIdentifier* Ni, ConnectionRequest* a3, ServerPlayer* sp)
{
    IF_LISTENED(PlayerPreJoinEvent)
    {
        PlayerPreJoinEvent ev;
        ev.mPlayer = sp;
        ev.mIP = Ni->getIP();
        ev.mXUID = sp->getXuid();

        if (!ev.call())
            return;
    }
    IF_LISTENED_END(PlayerPreJoinEvent);
    return original(ServerNetworkHandler_this, Ni, a3, sp);
}


/////////////////// PlayerJoin ///////////////////
THook(bool, "?setLocalPlayerAsInitialized@ServerPlayer@@QEAAXXZ",
      ServerPlayer* _this)
{
    IF_LISTENED(PlayerPreJoinEvent)
    {
        PlayerJoinEvent ev;
        ev.mPlayer = _this;

        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerJoinEvent);
    return original(_this);
}


/////////////////// PlayerLeft ///////////////////
THook(void, "?_onPlayerLeft@ServerNetworkHandler@@AEAAXPEAVServerPlayer@@_N@Z",
      ServerNetworkHandler* _this, ServerPlayer* sp, bool a3)
{
    IF_LISTENED(PlayerLeftEvent)
    {
        PlayerLeftEvent ev;
        ev.mPlayer = sp;
        ev.mXUID = sp->getXuid();
        ev.call();
    }
    IF_LISTENED_END(PlayerLeftEvent);
    return original(_this, sp, a3);
}

/////////////////// PlayerRespawn ///////////////////
THook(void,
      "?handle@?$PacketHandlerDispatcherInstance@VRespawnPacket@@$0A@@@UEBAXAEBVNetworkIdentifier@@AEAVNetEventCallback@@AEAV?$shared_ptr@VPacket@@@std@@@Z",
      void* _this, NetworkIdentifier* id, ServerNetworkHandler* handler, void* pPacket)
{
    IF_LISTENED(PlayerRespawnEvent)
    {
        RespawnPacket* packet = *(RespawnPacket**)pPacket;

        PlayerRespawnEvent ev;
        ev.mPlayer = packet->getPlayerFromPacket(handler, id);
        ev.call();
    }
    IF_LISTENED_END(PlayerRespawnEvent);
    return original(_this, id, handler, pPacket);
}

/////////////////// PlayerChat ///////////////////
THook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z",
      ServerNetworkHandler* _this, NetworkIdentifier* id, void* text)
{
    IF_LISTENED(PlayerChatEvent)
    {
        Event::PlayerChatEvent ev;
        ev.mPlayer = _this->getServerPlayer(*id);
        ev.mMessage = std::string(*(std::string*)((uintptr_t)text + 88));

        if (!ev.call())
            return;
    }
    IF_LISTENED_END(PlayerChatEvent);
    return original(_this, id, text);
}

/////////////////// PlayerChangeDim ///////////////////
THook(bool, "?_playerChangeDimension@Level@@AEAA_NPEAVPlayer@@AEAVChangeDimensionRequest@@@Z",
      Level* _this, Player* sp, ChangeDimensionRequest* cdimreq)
{
    bool ret = true;
    ret = original(_this, sp, cdimreq);
    IF_LISTENED(PlayerChangeDimEvent)
    {
        PlayerChangeDimEvent ev;
        ev.mPlayer = sp;
        ev.mDimensionId = sp->getDimensionId();
        ev.call();
    }
    IF_LISTENED_END(PlayerChangeDimEvent);
    return ret;
}

#include <GuiAPI.h>
/////////////////// PlayerJump ///////////////////
THook(void, "?jumpFromGround@Player@@UEAAXXZ",
      Player* pl)
{
    IF_LISTENED(PlayerJumpEvent)
    {
        PlayerJumpEvent ev;
        ev.mPlayer = pl;
        ev.call();
    }
    IF_LISTENED_END(PlayerJumpEvent);
    return original(pl);
}


/////////////////// PlayerSneak ///////////////////
THook(void, "?sendActorSneakChanged@ActorEventCoordinator@@QEAAXAEAVActor@@_N@Z",
      void* _this, Actor* ac, bool isSneaking)
{
    IF_LISTENED(PlayerSneakEvent)
    {
        PlayerSneakEvent ev;
        ev.mPlayer = (Player*)ac;
        ev.mIsSneaking = isSneaking;
        ev.call();
    }
    IF_LISTENED_END(PlayerSneakEvent);
    return original(_this, ac, isSneaking);
}


/////////////////// PlayerAttack ///////////////////
THook(bool, "?attack@Player@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z",
      Player* _this, Actor* ac, int* damageCause)
{
    IF_LISTENED(PlayerAttackEvent)
    {
        PlayerAttackEvent ev;
        ev.mPlayer = _this;
        ev.mTarget = ac;
        ev.mAttackDamage = *damageCause;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerAttackEvent);
    return original(_this, ac, damageCause);
}


/////////////////// PlayerTakeItem ///////////////////
THook(bool, "?take@Player@@QEAA_NAEAVActor@@HH@Z",
      Player* _this, Actor* actor, int a2, int a3)
{
    IF_LISTENED(PlayerTakeItemEvent)
    {
        ItemStack* it = nullptr;
        if (actor->isItemActor())
            it = ((ItemActor*)actor)->getItemStack();

        PlayerTakeItemEvent ev;
        ev.mPlayer = _this;
        ev.mItemEntity = actor;
        ev.mItemStack = it;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerTakeItemEvent);
    return original(_this, actor, a2, a3);
}


/////////////////// PlayerDropItem ///////////////////
THook(bool, "?drop@Player@@UEAA_NAEBVItemStack@@_N@Z",
      Player* _this, ItemStack* it, bool a3)
{
    IF_LISTENED(PlayerDropItemEvent)
    {
        PlayerDropItemEvent ev;
        ev.mPlayer = _this;
        ev.mItemStack = it;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerDropItemEvent);
    return original(_this, it, a3);
}


/////////////////// PlayerEat ///////////////////
// Food Item Component Legacy
THook(Item*, "?useTimeDepleted@FoodItemComponentLegacy@@UEAAPEBVItem@@AEAVItemStack@@AEAVPlayer@@AEAVLevel@@@Z",
      class FoodItemComponentLegacy* _this, ItemStack* eaten, Player* player, Level* level)
{
    IF_LISTENED(PlayerEatEvent)
    {
        if (eaten->getTypeName() != "minecraft:suspicious_stew")
        {
            PlayerEatEvent ev;
            ev.mPlayer = player;
            ev.mFoodItem = eaten;
            if (!ev.call())
                return nullptr;
        }
    }
    IF_LISTENED_END(PlayerEatEvent);
    return original(_this, eaten, player, level);
}
// Food Item Component
THook(Item*, "?useTimeDepleted@FoodItemComponent@@UEAAPEBVItem@@AEAVItemStack@@AEAVPlayer@@AEAVLevel@@@Z",
      class FoodItemComponent* _this, ItemStack* eaten, Player* player, Level* level)
{
    IF_LISTENED(PlayerEatEvent)
    {
        PlayerEatEvent ev;
        ev.mPlayer = player;
        ev.mFoodItem = eaten;
        if (!ev.call())
            return nullptr;
    }
    IF_LISTENED_END(PlayerEatEvent);
    return original(_this, eaten, player, level);
}
// SuspiciousStew
THook(Item*, "?useTimeDepleted@SuspiciousStewItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z",
      class SuspiciousStewItem* _this, ItemStack* eaten, Level* level, Player* player)
{
    IF_LISTENED(PlayerEatEvent)
    {
        PlayerEatEvent ev;
        ev.mPlayer = player;
        ev.mFoodItem = eaten;
        if (!ev.call())
            return nullptr;
    }
    IF_LISTENED_END(PlayerEatEvent);
    return original(_this, eaten, level, player);
}
// Potion
THook(Item*, "?useTimeDepleted@PotionItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z",
      class PotionItem* _this, ItemStack* eaten, Level* level, Player* player)
{
    IF_LISTENED(PlayerEatEvent)
    {
        PlayerEatEvent ev;
        ev.mPlayer = player;
        ev.mFoodItem = eaten;
        if (!ev.call())
            return nullptr;
    }
    IF_LISTENED_END(PlayerEatEvent);
    return original(_this, eaten, level, player);
}
// Medicine
THook(Item*, "?useTimeDepleted@MedicineItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z",
      class MedicineItem* _this, ItemStack* eaten, Level* level, Player* player)
{
    IF_LISTENED(PlayerEatEvent)
    {
        PlayerEatEvent ev;
        ev.mPlayer = player;
        ev.mFoodItem = eaten;
        if (!ev.call())
            return nullptr;
    }
    IF_LISTENED_END(PlayerEatEvent);
    return original(_this, eaten, level, player);
}
// milk
THook(Item*, "?useTimeDepleted@BucketItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z",
      class BucketItem* _this, ItemStack* eaten, Level* level, Player* player)
{
    IF_LISTENED(PlayerEatEvent)
    {
        PlayerEatEvent ev;
        ev.mPlayer = player;
        ev.mFoodItem = eaten;
        if (!ev.call())
            return nullptr;
    }
    IF_LISTENED_END(PlayerEatEvent);
    return original(_this, eaten, level, player);
}


/////////////////// PlayerConsumeTotem ///////////////////
THook(void, "?consumeTotem@Player@@UEAA_NXZ", Player* player)
{
    IF_LISTENED(PlayerConsumeTotemEvent)
    {
        PlayerConsumeTotemEvent ev;
        ev.mPlayer = player;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(PlayerConsumeTotemEvent);
    return original(player);
}


/////////////////// PlayerEffectChanged ///////////////////
// add
THook(void, "?onEffectAdded@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player* player, MobEffectInstance* effect)
{
    IF_LISTENED(PlayerEffectChangedEvent)
    {
        PlayerEffectChangedEvent ev;
        ev.mPlayer = player;
        ev.mEventType = PlayerEffectChangedEvent::EventType::Add;
        ev.mEffect = effect;
        ev.call();
    }
    IF_LISTENED_END(PlayerEffectChangedEvent);
    return original(player, effect);
}
// remove
THook(void, "?onEffectRemoved@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player* player,
      MobEffectInstance* effect)
{
    IF_LISTENED(PlayerEffectChangedEvent)
    {
        PlayerEffectChangedEvent ev;
        ev.mPlayer = player;
        ev.mEventType = PlayerEffectChangedEvent::EventType::Remove;
        ev.mEffect = effect;
        ev.call();
    }
    IF_LISTENED_END(PlayerEffectChangedEvent);
    return original(player, effect);
}
// update
THook(void, "?onEffectUpdated@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player* player,
      MobEffectInstance* effect)
{
    IF_LISTENED(PlayerEffectChangedEvent)
    {
        PlayerEffectChangedEvent ev;
        ev.mPlayer = player;
        ev.mEventType = PlayerEffectChangedEvent::EventType::Update;
        ev.mEffect = effect;
        ev.call();
    }
    IF_LISTENED_END(PlayerEffectChangedEvent);
    return original(player, effect);
}


/////////////////// PlayerStartDestroyBlock ///////////////////
THook(void, "?sendBlockDestructionStarted@BlockEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlockPos@@@Z",
      void* _this, Player* pl, BlockPos* bp)
{
    IF_LISTENED(PlayerStartDestroyBlockEvent)
    {
        PlayerStartDestroyBlockEvent ev;
        ev.mPlayer = pl;
        ev.mBlockInstance = Level::getBlockInstance(bp, Level::getBlockSource(pl));
        ev.call();
    }
    IF_LISTENED_END(PlayerStartDestroyBlockEvent);
    return original(_this, pl, bp);
}

/////////////////// PlayerPlaceBlock ///////////////////
THook(bool, "?mayPlace@BlockSource@@QEAA_NAEBVBlock@@AEBVBlockPos@@EPEAVActor@@_N@Z",
      BlockSource* _this, Block* a2, BlockPos* a3, unsigned __int8 a4, Actor* ac, bool a6)
{
    IF_LISTENED(PlayerPlaceBlockEvent)
    {
        if (Player::isValid((Player*)ac))
        {
            PlayerPlaceBlockEvent ev;
            ev.mPlayer = (Player*)ac;
            ev.mBlockInstance = Level::getBlockInstance(a3, _this);
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(PlayerPlaceBlockEvent);
    return original(_this, a2, a3, a4, ac, a6);
}

/////////////////// PlayerOpenContainer ///////////////////
THook(__int64,
      "?onPlayerOpenContainer@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUPlayerOpenContainerEvent@@@Z",
      void* a1, void* a2)
{
    IF_LISTENED(PlayerOpenContainerEvent)
    {
        BlockPos bp = dAccess<BlockPos>(a2, 28); // IDA VanillaServerGameplayEventListener::onPlayerOpenContainer
        Player* pl = SymCall("??$tryUnwrap@VPlayer@@$$V@WeakEntityRef@@QEBAPEAVPlayer@@XZ", Player*, void*)(a2);

        PlayerOpenContainerEvent ev;
        ev.mPlayer = pl;
        ev.mBlockInstance = Level::getBlockInstance(bp, pl->getDimensionId());
        ev.mContainer = ev.mBlockInstance.getContainer();
        if (!ev.call())
            return 0;
    }
    IF_LISTENED_END(PlayerOpenContainerEvent);
    return original(a1, a2);
}

/////////////////// PlayerCloseContainer ///////////////////
//chest
THook(bool, "?stopOpen@ChestBlockActor@@UEAAXAEAVPlayer@@@Z",
      void* _this, Player* pl)
{
    IF_LISTENED(PlayerCloseContainerEvent)
    {
        BlockActor* ba = (BlockActor*)((char*)_this - 240); //IDA ChestBlockActor::stopOpen
        BlockPos bp = ba->getPosition();

        PlayerCloseContainerEvent ev;
        ev.mPlayer = pl;
        ev.mBlockInstance = Level::getBlockInstance(bp, pl->getDimensionId());
        ev.mContainer = Level::getBlockInstance(bp, pl->getDimensionId()).getContainer();
        ev.call();
    }
    IF_LISTENED_END(PlayerCloseContainerEvent);
    return original(_this, pl);
}
//barrel
THook(bool, "?stopOpen@BarrelBlockActor@@UEAAXAEAVPlayer@@@Z",
      void* _this, Player* pl)
{
    IF_LISTENED(PlayerCloseContainerEvent)
    {
        BlockActor* ba = (BlockActor*)((char*)_this - 240); //IDA ChestBlockActor::stopOpen
        BlockPos bp = ba->getPosition();

        PlayerCloseContainerEvent ev;
        ev.mPlayer = pl;
        ev.mBlockInstance = Level::getBlockInstance(bp, pl->getDimensionId());
        ev.mContainer = Level::getBlockInstance(bp, pl->getDimensionId()).getContainer();
        ev.call();
    }
    IF_LISTENED_END(PlayerCloseContainerEvent);
    return original(_this, pl);
}

/////////////////// PlayerInventoryChange ///////////////////
THook(void, "?inventoryChanged@Player@@UEAAXAEAVContainer@@HAEBVItemStack@@1_N@Z",
      Player* _this, void* container, int slotNumber, ItemStack* oldItem, ItemStack* newItem, bool is)
{
    IF_LISTENED(PlayerInventoryChangeEvent)
    {
        if (_this)
        {
            PlayerInventoryChangeEvent ev;
            ev.mPlayer = _this;
            ev.mSlot = slotNumber;
            ev.mPreviousItemStack = oldItem;
            ev.mNewItemStack = newItem;
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerCloseContainerEvent);
    return original(_this, container, slotNumber, oldItem, newItem, is);
}

/////////////////// PlayerMove ///////////////////
THook(void, "?sendPlayerMove@PlayerEventCoordinator@@QEAAXAEAVPlayer@@@Z",
      void* _this, Player* pl)
{
    IF_LISTENED(PlayerMoveEvent)
    {
        if (pl->isMoving())
        {
            PlayerMoveEvent ev;
            ev.mPlayer = pl;
            ev.mPos = pl->getPosition();
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerMoveEvent);
    return original(_this, pl);
}

/////////////////// PlayerSprint ///////////////////
THook(void, "?setSprinting@Mob@@UEAAX_N@Z",
      Mob* _this, bool sprinting)
{
    IF_LISTENED(PlayerSprintEvent)
    {
        if (_this->isPlayer() && _this->isSprinting() != sprinting)
        {
            PlayerSprintEvent ev;
            ev.mPlayer = (Player*)_this;
            ev.mIsSprinting = sprinting;
            if (!ev.call())
                return;
        }
    }
    IF_LISTENED_END(PlayerSprintEvent);
    return original(_this, sprinting);
}

/////////////////// PlayerSetArmor ///////////////////
THook(void, "?setArmor@Player@@UEAAXW4ArmorSlot@@AEBVItemStack@@@Z",
      Player* _this, unsigned slot, ItemStack* it)
{
    IF_LISTENED(PlayerSetArmorEvent)
    {
        if (_this)
        {
            PlayerSetArmorEvent ev;
            ev.mPlayer = _this;
            ev.mSlot = slot;
            ev.mArmorItem = it;
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerSetArmorEvent);
    return original(_this, slot, it);
}

/////////////////// PlayerUseRespawnAnchor ///////////////////
THook(bool, "?trySetSpawn@RespawnAnchorBlock@@CA_NAEAVPlayer@@AEBVBlockPos@@AEAVBlockSource@@AEAVLevel@@@Z",
      Player* pl, BlockPos* bp, BlockSource* bs, Level* a4)
{
    IF_LISTENED(PlayerUseRespawnAnchorEvent)
    {
        PlayerUseRespawnAnchorEvent ev;
        ev.mPlayer = pl;
        ev.mBlockInstance = Level::getBlockInstance(bp, bs);
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseRespawnAnchorEvent);
    return original(pl, bp, bs, a4);
}

/////////////////// PlayerOpenContainerScreen ///////////////////
THook(bool, "?canOpenContainerScreen@Player@@UEAA_NXZ",
      Player* pl)
{
    IF_LISTENED(PlayerOpenContainerScreenEvent)
    {
        PlayerOpenContainerScreenEvent ev;
        ev.mPlayer = pl;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerOpenContainerScreenEvent);
    return original(pl);
}

/////////////////// PlayerCmdEvent & ConsoleCmdEvent ///////////////////
THook(MCRESULT*, "?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@V?$shared_ptr@VCommandContext@@@std@@_N@Z",
      MinecraftCommands* _this, MCRESULT* rtn, std::shared_ptr<CommandContext> context, bool print)
{
    MCRESULT* result = original(_this, rtn, context, print);

    Player* sp;
    string cmd;

    try
    {
        sp = context->getOrigin().getPlayer();
        cmd = context->getCmd();
        if (!cmd.empty() && cmd.at(0) == '/')
        {
            cmd = cmd.substr(1, cmd.size() - 1);
        }
    }
    catch (...)
    {
        return result;
    }

    if (sp)
    {
        //PlayerCmd
        IF_LISTENED(PlayerCmdEvent)
        {
            PlayerCmdEvent ev;
            ev.mCommand = cmd;
            ev.mPlayer = sp;
            ev.mResult = rtn;

            if (!ev.call())
                return false;
        }
        IF_LISTENED_END(PlayerCmdEvent);
    }
    else
    {
        //ConsoleCmd
        IF_LISTENED(ConsoleCmdEvent)
        {
            ConsoleCmdEvent ev;
            ev.mCommand = cmd;

            if (!ev.call())
                return false;
        }
        IF_LISTENED_END(ConsoleCmdEvent);
    }
    return result;
}

/////////////////// CmdBlockExecute ///////////////////
THook(bool, "?_performCommand@BaseCommandBlock@@AEAA_NAEAVBlockSource@@AEBVCommandOrigin@@AEA_N@Z",
      BaseCommandBlock* _this, BlockSource* a2, CommandOrigin* a3, bool* a4)
{
    IF_LISTENED(CmdBlockExecuteEvent)
    {
        CmdBlockExecuteEvent ev;
        ev.mCommand = _this->getCommand();
        if ((OriginType)a3->getOriginType() == OriginType::MinecartBlock)
        {
            ev.mIsMinecart = true;
            ev.mMinecart = a3->getEntity();
        }
        else
        {
            ev.mIsMinecart = false;
            ev.mBlockInstance = Level::getBlockInstance(a3->getBlockPosition(), a2);
        }

        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(CmdBlockExecuteEvent);
    return original(_this, a2, a3, a4);
}

/////////////////// BlockInteractedEvent ///////////////////
THook(unsigned short,
      "?onBlockInteractedWith@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEAVPlayer@@AEBVBlockPos@@@Z",
      void* _this, Player* pl, BlockPos* bp)
{
    IF_LISTENED(BlockInteractedEvent)
    {
        BlockInteractedEvent ev;
        ev.mBlockInstance = Level::getBlockInstance(bp, pl->getDimensionId());
        if (!ev.call())
            return 0;
    }
    IF_LISTENED_END(BlockInteractedEvent);
    return original(_this, pl, bp);
}

/////////////////// BlockChangedEvent ///////////////////
THook(void, "?_blockChanged@BlockSource@@IEAAXAEBVBlockPos@@IAEBVBlock@@1HPEBUActorBlockSyncMessage@@@Z",
      BlockSource* bs, BlockPos* bp, int a3, Block* afterBlock, Block* beforeBlock, int a6, void* a7)
{
    IF_LISTENED(BlockChangedEvent)
    {
        int dimId = bs->getDimensionId();
        BlockChangedEvent ev;
        ev.mPerviousBlockInstance = BlockInstance::createBlockInstance(beforeBlock, *bp, dimId);
        ev.mNewBlockInstance = BlockInstance::createBlockInstance(afterBlock, *bp, dimId);
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(BlockChangedEvent);
    return original(bs, bp, a3, afterBlock, beforeBlock, a6, a7);
}

/////////////////// RespawnAnchorExplodeEvent ///////////////////
THook(void, "?explode@RespawnAnchorBlock@@CAXAEAVPlayer@@AEBVBlockPos@@AEAVBlockSource@@AEAVLevel@@@Z",
      Player* pl, BlockPos* bp, BlockSource* bs, Level* level)
{
    IF_LISTENED(RespawnAnchorExplodeEvent)
    {
        RespawnAnchorExplodeEvent ev;
        ev.mBlockInstance = Level::getBlockInstance(bp, bs);
        ev.mPlayer = pl;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(RespawnAnchorExplodeEvent);
    return original(pl, bp, bs, level);
}

/////////////////// BlockExplodedEvent ///////////////////
THook(void, "?onExploded@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@@Z",
      Block* _this, BlockSource* bs, BlockPos* bp, Actor* actor)
{
    IF_LISTENED(BlockExplodedEvent)
    {
        if (actor)
        {
            BlockExplodedEvent ev;
            ev.mBlockInstance = BlockInstance::createBlockInstance(_this, *bp, bs->getDimensionId());
            ev.mExplodeSource = actor;
            ev.call();
        }
    }
    IF_LISTENED_END(BlockExplodedEvent);
    return original(_this, bs, bp, actor);
}


/////////////////// FireSpreadEvent ///////////////////
bool onFireSpread_OnPlace = false;

THook(void, "?onPlace@FireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@@Z",
      void* _this, BlockSource* bs, BlockPos* bp)
{
    onFireSpread_OnPlace = true;
    original(_this, bs, bp);
    onFireSpread_OnPlace = false;
}

THook(bool, "?mayPlace@FireBlock@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z",
      void* _this, BlockSource* bs, BlockPos* bp)
{
    auto rtn = original(_this, bs, bp);
    if (!onFireSpread_OnPlace || !rtn)
        return rtn;

    IF_LISTENED(FireSpreadEvent)
    {
        FireSpreadEvent ev;
        ev.mTarget = *bp;
        ev.mDimensionId = bs->getDimensionId();
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(FireSpreadEvent);
    return rtn;
}


/////////////////// ContainerChangeEvent ///////////////////
class LevelContainerModel;

THook(void, "?_onItemChanged@LevelContainerModel@@MEAAXHAEBVItemStack@@0@Z",
      LevelContainerModel* _this, int slotNumber, ItemStack* oldItem, ItemStack* newItem)
{
    IF_LISTENED(ContainerChangeEvent)
    {
        Player* pl = (Player*)dAccess<Actor*>(_this, 208); //IDA LevelContainerModel::LevelContainerModel

        if (pl->hasOpenContainer())
        {
            BlockPos* bp = (BlockPos*)((char*)_this + 216);

            ContainerChangeEvent ev;
            ev.mBlockInstance = Level::getBlockInstance(bp, pl->getDimensionId());
            ev.mContainer = ev.mBlockInstance.getContainer();
            ev.mPlayer = pl;
            ev.mSlot = slotNumber;
            ev.mPerviousItemStack = oldItem;
            ev.mNewItemStack = newItem;
            ev.call();
        }
    }
    IF_LISTENED_END(ContainerChangeEvent);
    return original(_this, slotNumber, oldItem, newItem);
}


/////////////////// ProjectileHitBlockEvent ///////////////////
THook(void, "?onProjectileHit@Block@@QEBAXAEAVBlockSource@@AEBVBlockPos@@AEBVActor@@@Z",
      Block* _this, BlockSource* bs, BlockPos* bp, Actor* actor)
{
    IF_LISTENED(ProjectileHitBlockEvent)
    {
        if (_this->getTypeName() != "minecraft:air")
        {
            ProjectileHitBlockEvent ev;
            ev.mBlockInstance = Level::getBlockInstance(bp, bs);
            ev.mSource = actor;
            ev.call();
        }
    }
    IF_LISTENED_END(ProjectileHitBlockEvent);
    return original(_this, bs, bp, actor);
}


/////////////////// RedStoneUpdateEvent ///////////////////
// 红石粉
THook(void, "?onRedstoneUpdate@RedStoneWireBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
      void* _this, BlockSource* bs, BlockPos* bp, int level, bool isActive)
{
    IF_LISTENED(RedStoneUpdateEvent)
    {
        RedStoneUpdateEvent ev;
        ev.mBlockInstance = Level::getBlockInstance(bp, bs);
        ev.mRedStonePower = level;
        ev.mIsActivated = level != 0;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(RedStoneUpdateEvent);
    return original(_this, bs, bp, level, isActive);
}
// 红石火把
THook(void, "?onRedstoneUpdate@RedstoneTorchBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
      void* _this, BlockSource* bs, BlockPos* bp, int level, bool isActive)
{
    IF_LISTENED(RedStoneUpdateEvent)
    {
        RedStoneUpdateEvent ev;
        ev.mBlockInstance = Level::getBlockInstance(bp, bs);
        ev.mRedStonePower = level;
        ev.mIsActivated = level != 0;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(RedStoneUpdateEvent);
    return original(_this, bs, bp, level, isActive);
}
// 红石中继器
THook(void, "?onRedstoneUpdate@DiodeBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
      void* _this, BlockSource* bs, BlockPos* bp, int level, bool isActive)
{
    IF_LISTENED(RedStoneUpdateEvent)
    {
        RedStoneUpdateEvent ev;
        ev.mBlockInstance = Level::getBlockInstance(bp, bs);
        ev.mRedStonePower = level;
        ev.mIsActivated = level != 0;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(RedStoneUpdateEvent);
    return original(_this, bs, bp, level, isActive);
}
// 红石比较器
THook(void, "?onRedstoneUpdate@ComparatorBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@H_N@Z",
      void* _this, BlockSource* bs, BlockPos* bp, int level, bool isActive)
{
    IF_LISTENED(RedStoneUpdateEvent)
    {
        RedStoneUpdateEvent ev;
        ev.mBlockInstance = Level::getBlockInstance(bp, bs);
        ev.mRedStonePower = level;
        ev.mIsActivated = level != 0;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(RedStoneUpdateEvent);
    return original(_this, bs, bp, level, isActive);
}


/////////////////// HopperSearchItemEvent ///////////////////
THook(bool, "?_tryPullInItemsFromAboveContainer@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@@Z",
      void* _this, BlockSource* bs, void* container, Vec3* pos)
{
    bool isMinecart = dAccess<bool>(_this, 5); // IDA Hopper::Hopper

    IF_LISTENED(HopperSearchItemEvent)
    {
        HopperSearchItemEvent ev;
        if (isMinecart)
        {
            ev.isMinecart = true;
            ev.mMinecartPos = *pos;
        }
        else
        {
            ev.isMinecart = false;
            ev.mHopperBlock = Level::getBlockInstance(pos->toBlockPos(), bs);
        }
        ev.mDimensionId = bs->getDimensionId();
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(HopperSearchItemEvent);
    return original(_this, bs, container, pos);
}

/////////////////// HopperPushOutEvent ///////////////////
THook(bool, "?_pushOutItems@Hopper@@IEAA_NAEAVBlockSource@@AEAVContainer@@AEBVVec3@@H@Z",
      void* _this, BlockSource* bs, void* container, Vec3* pos, int a5)
{
    IF_LISTENED(HopperPushOutEvent)
    {
        HopperPushOutEvent ev;
        ev.mPos = *pos;
        ev.mDimensionId = bs->getDimensionId();
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(HopperPushOutEvent);
    return original(_this, bs, container, pos, a5);
}

/////////////////// PistonPushEvent ///////////////////
THook(bool, "?_attachedBlockWalker@PistonBlockActor@@AEAA_NAEAVBlockSource@@AEBVBlockPos@@EE@Z",
      BlockActor* _this, BlockSource* bs, BlockPos* bp, unsigned a3, unsigned a4)
{
    IF_LISTENED(PistonPushEvent)
    {

        PistonPushEvent ev;
        ev.mPistonBlockInstance = Level::getBlockInstance(_this->getPosition(), bs);
        ev.mTargetBlockInstance = Level::getBlockInstance(bp, bs);

        if (ev.mTargetBlockInstance.getBlock()->getTypeName() == "minecraft:air")
            return original(_this, bs, bp, a3, a4);

        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PistonPushEvent);
    return original(_this, bs, bp, a3, a4);
}


/////////////////// FarmLandDecayEvent ///////////////////
THook(void, "?transformOnFall@FarmBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@PEAVActor@@M@Z",
      void* _this, BlockSource* bs, BlockPos* bp, Actor* ac, float a5)
{
    IF_LISTENED(FarmLandDecayEvent)
    {
        FarmLandDecayEvent ev;
        ev.mBlockInstance = Level::getBlockInstance(bp, bs);
        ev.mActor = ac;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(FarmLandDecayEvent);
    return original(_this, bs, bp, ac, a5);
}


/////////////////// PlayerUseFrameBlockEvent  ///////////////////
THook(bool, "?use@ItemFrameBlock@@UEBA_NAEAVPlayer@@AEBVBlockPos@@E@Z",
      void* _this, Player* a2, BlockPos* a3)
{
    IF_LISTENED(PlayerUseFrameBlockEvent)
    {
        PlayerUseFrameBlockEvent ev;
        ev.mType = PlayerUseFrameBlockEvent::Type::Use;
        ev.mBlockInstance = Level::getBlockInstance(a3, a2->getDimensionId());
        ev.mPlayer = a2;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseFrameBlockEvent);
    return original(_this, a2, a3);
}

THook(bool, "?attack@ItemFrameBlock@@UEBA_NPEAVPlayer@@AEBVBlockPos@@@Z",
      void* _this, Player* a2, BlockPos* a3)
{
    IF_LISTENED(PlayerUseFrameBlockEvent)
    {
        PlayerUseFrameBlockEvent ev;
        ev.mType = PlayerUseFrameBlockEvent::Type::Attack;
        ev.mBlockInstance = Level::getBlockInstance(a3, a2->getDimensionId());
        ev.mPlayer = a2;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseFrameBlockEvent);
    return original(_this, a2, a3);
}

/////////////////// LiquidFlowEvent ///////////////////
THook(bool, "?_canSpreadTo@LiquidBlockDynamic@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@1E@Z",
      void* _this, BlockSource* bs, BlockPos* to, BlockPos* from, char id)
{
    IF_LISTENED(LiquidFlowEvent)
    {
        LiquidFlowEvent ev;
        ev.mBlockInstance = Level::getBlockInstance(from, bs);
        ev.mTarget = *to;
        ev.mDimensionId = bs->getDimensionId();
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(LiquidFlowEvent);
    return original(_this, bs, to, from, id);
}


/////////////////// PlayerDeath ///////////////////
THook(void*, "?die@Player@@UEAAXAEBVActorDamageSource@@@Z", ServerPlayer* _this, ActorDamageSource* src)
{
    IF_LISTENED(PlayerDieEvent)
    {
        if (_this)
        {
            PlayerDieEvent ev;
            ev.mPlayer = _this;
            ev.mDamageSource = src;
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerDieEvent);
    return original(_this, src);
}


/////////////////// PlayerDestroy ///////////////////
THook(bool, "?playerWillDestroy@BlockLegacy@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z",
      BlockLegacy* _this, Player* pl, BlockPos& blkpos, Block& bl)
{
    IF_LISTENED(PlayerDestroyBlockEvent)
    {
        PlayerDestroyBlockEvent ev;
        ev.mPlayer = pl;
        ev.mBlockInstance = Level::getBlockInstance(blkpos, pl->getDimensionId());
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerDestroyBlockEvent);
    return original(_this, pl, blkpos, bl);
}


/////////////////// PlayerUseItemOn ///////////////////
THook(bool, "?useItemOn@GameMode@@UEAA_NAEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z",
      GameMode* _this, ItemStack& it, BlockPos bp, unsigned char side, void* a5, void* a6_block)
{
    IF_LISTENED(PlayerUseItemOnEvent)
    {
        PlayerUseItemOnEvent ev;
        ev.mPlayer = _this->getPlayer();
        ev.mBlockInstance = Level::getBlockInstance(bp, ev.mPlayer->getDimensionId());
        ev.mItemStack = &it;
        ev.mFace = side;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseItemOnEvent);
    return original(_this, it, bp, side, a5, a6_block);
}


/////////////////// MobHurted ///////////////////
THook(bool, "?_hurt@Mob@@MEAA_NAEBVActorDamageSource@@H_N1@Z",
      Mob* ac, ActorDamageSource& src, int damage, bool unk1_1, bool unk2_0)
{
    IF_LISTENED(MobHurtEvent)
    {
        if (ac)
        {
            MobHurtEvent ev;
            ev.mMob = ac;
            ev.mDamageSource = &src;
            ev.mDamage = damage;
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(MobHurtEvent);
    return original(ac, src, damage, unk1_1, unk2_0);
}


/////////////////// PlayerUseItem ///////////////////
THook(bool, "?baseUseItem@GameMode@@QEAA_NAEAVItemStack@@@Z", GameMode* _this, ItemStack& it)
{
    IF_LISTENED(PlayerUseItemEvent)
    {
        PlayerUseItemEvent ev;
        ev.mPlayer = _this->getPlayer();
        ev.mItemStack = &it;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerUseItemEvent);
    return original(_this, it);
}


/////////////////// MobDie ///////////////////
THook(bool, "?die@Mob@@UEAAXAEBVActorDamageSource@@@Z", Mob* mob, ActorDamageSource* ads)
{
    IF_LISTENED(MobDieEvent)
    {
        if (mob)
        {
            MobDieEvent ev;
            ev.mMob = mob;
            ev.mDamageSource = ads;
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(MobDieEvent);
    return original(mob, ads);
}

///////////////////  EntityExplode & BlockExplode (bed) ///////////////////
THook(void, "?explode@Level@@UEAAXAEAVBlockSource@@PEAVActor@@AEBVVec3@@M_N3M3@Z",
      Level* _this, BlockSource* bs, Actor* actor, Vec3* pos, float power, bool isFire, bool isDestroy, float range,
      bool a9)
{
    IF_LISTENED(EntityExplodeEvent)
    {
        if (actor)
        {
            EntityExplodeEvent ev;
            ev.mActor = actor;
            ev.mPos = *pos;
            ev.mDimensionId = bs->getDimensionId();
            ev.mRadius = power;
            ev.mRange = range;
            ev.mIsDestroy = isDestroy;
            ev.mIsFire = isFire;
            if (!ev.call())
                return;
        }
    }
    IF_LISTENED_END(EntityExplodeEvent);

    //bed
    IF_LISTENED(BlockExplodeEvent)
    {
        if (!actor)
        {
            BlockExplodeEvent ev;
            ev.mBlockInstance = Level::getBlockInstance(pos->toBlockPos(), bs);
            if (!ev.call())
                return;
        }
    }
    IF_LISTENED_END(BlockExplodeEvent);

    original(_this, bs, actor, pos, power, isFire, isDestroy, range, a9);
}


////////////// ProjectileHitEntityEvent //////////////
THook(void, "?onHit@ProjectileComponent@@QEAAXAEAVActor@@AEBVHitResult@@@Z",
      void* _this, Actor* item, HitResult* res)
{
    IF_LISTENED(ProjectileHitEntityEvent)
    {
        Actor* to = res->getEntity();
        if (to)
        {
            ProjectileHitEntityEvent ev;
            ev.mTarget = to;
            ev.mSource = item;
            ev.call();
        }
    }
    IF_LISTENED_END(ProjectileHitEntityEvent);
    return original(_this, item, res);
}


////////////// WitherBossDestroyEvent //////////////
THook(void, "?_destroyBlocks@WitherBoss@@AEAAXAEAVLevel@@AEBVAABB@@AEAVBlockSource@@H@Z",
      Actor* _this, Level* a2, AABB* aabb, BlockSource* a4, int a5)
{
    IF_LISTENED(WitherBossDestroyEvent)
    {
        WitherBossDestroyEvent ev;
        ev.mWitherBoss = (WitherBoss*)_this;
        ev.mDestroyRange = *aabb;
        if (!ev.call())
            return;
    }
    IF_LISTENED_END(WitherBossDestroyEvent);
    original(_this, a2, aabb, a4, a5);
}


////////////// EntityRideEvent //////////////
THook(bool, "?canAddPassenger@Actor@@UEBA_NAEAV1@@Z",
      Actor* a1, Actor* a2)
{
    IF_LISTENED(EntityRideEvent)
    {
        EntityRideEvent ev;
        ev.mRider = a2;
        ev.mVehicle = a1;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(EntityRideEvent);
    return original(a1, a2);
}


////////////// EntityStepOnPressurePlateEvent //////////////
THook(void, "?entityInside@BasePressurePlateBlock@@UEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVActor@@@Z",
      void* _this, BlockSource* a2, BlockPos* a3, Actor* a4)
{
    IF_LISTENED(EntityStepOnPressurePlateEvent)
    {
        EntityStepOnPressurePlateEvent ev;
        ev.mActor = a4;
        ev.mBlockInstance = Level::getBlockInstance(a3, a4->getDimensionId());
        ev.call();
    }
    IF_LISTENED_END(EntityStepOnPressurePlateEvent);
    original(_this, a2, a3, a4);
}

////////////// ProjectileSpawnEvent //////////////
THook(Actor*,
      "?spawnProjectile@Spawner@@QEAAPEAVActor@@AEAVBlockSource@@AEBUActorDefinitionIdentifier@@PEAV2@AEBVVec3@@3@Z",
      void* _this, BlockSource* a2, ActorDefinitionIdentifier* a3, Actor* a4, Vec3* a5, Vec3* a6)
{
    IF_LISTENED(ProjectileSpawnEvent)
    {
        ProjectileSpawnEvent ev;
        ev.mShooter = a4;
        ev.mIdentifier = a3;
        ev.mType = a3->getFullName();
        if (!ev.call())
            return nullptr;
    }
    IF_LISTENED_END(ProjectileSpawnEvent);
    return original(_this, a2, a3, a4, a5, a6);
}

////////////// NpcCmdEvent //////////////
#include <MC/NpcActionsContainer.hpp>
#include <MC/NpcSceneDialogueData.hpp>

THook(bool,
      "?executeCommandAction@NpcComponent@@QEAAXAEAVActor@@AEBVPlayer@@HAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
      void* _this, Actor* ac, Player* pl, int a4, string& a5)
{
    IF_LISTENED(NpcCmdEvent)
    {
        //IDA NpcComponent::executeCommandAction
        char buf[32];
        NpcSceneDialogueData* data = (NpcSceneDialogueData*)buf;
        SymCall("??0NpcSceneDialogueData@@QEAA@AEAVNpcComponent@@AEAVActor@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z",
                NpcSceneDialogueData*, NpcSceneDialogueData*, void*, Actor*, string&)(data, _this, ac, a5);

        auto& container = data->getActionsContainer();
        auto actionAt = container.getActionAt(a4);
        if (actionAt && dAccess<char>(actionAt, 8) == (char)1)
        {
            HashedString& str = dAccess<HashedString>(actionAt, 152);

            NpcCmdEvent ev;
            ev.mPlayer = pl;
            ev.mNpc = ac;
            ev.mCommand = str.getString();
            if (!ev.call())
                return false;
        }
    }
    IF_LISTENED_END(NpcCmdEvent);
    return original(_this, ac, pl, a4, a5);
}

////////////// ArmorStandChangeEvent //////////////
THook(bool, "?_trySwapItem@ArmorStand@@AEAA_NAEAVPlayer@@W4EquipmentSlot@@@Z",
      ArmStand* _this, Player* a2, int a3)
{
    IF_LISTENED(ArmorStandChangeEvent)
    {
        ArmorStandChangeEvent ev;
        ev.mArmorStand = _this;
        ev.mPlayer = a2;
        ev.mSlot = a3;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(ArmorStandChangeEvent);
    return original(_this, a2, a3);
}


////////////// ItemUseOnActorInventoryEvent //////////////
THook(void, "?handle@ItemUseOnActorInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z",
      ServerNetworkHandler* _this, ServerPlayer* sp, bool unk)
{
    IF_LISTENED(ItemUseOnActorEvent)
    {
        ItemUseOnActorEvent ev;
        ev.mTarget = dAccess<ActorRuntimeID, 104>(_this);
        ev.mInteractiveMode = dAccess<int, 112>(_this);
        ev.call();
    }
    IF_LISTENED_END(ItemUseOnActorEvent);
    return original(_this, sp, unk);
}

////////////// PlayerScoreChangedEvent  //////////////
THook(void, "?onScoreChanged@ServerScoreboard@@UEAAXAEBUScoreboardId@@AEBVObjective@@@Z",
      Scoreboard* _this, ScoreboardId* a1, Objective* a2)
{
    IF_LISTENED(PlayerScoreChangedEvent)
    {
        int id = a1->id;

        Player* player = nullptr;
        auto pls = Level::getAllPlayers();
        for (auto& pl : pls)
        {
            if (Global<Scoreboard>->getScoreboardId(*pl).id == id)
            {
                player = pl;
                break;
            }
        }

        if (player)
        {
            PlayerScoreChangedEvent ev;
            ev.mPlayer = player;
            ev.mScore = a2->getPlayerScore(*a1).getCount();
            ev.mScoreboardId = a1;
            ev.mObjective = a2;
            ev.call();
        }
    }
    IF_LISTENED_END(PlayerScoreChangedEvent);

    return original(_this, a1, a2);
}

#include <MC/Minecraft.hpp>
////////////// ServerStarted //////////////
THook(void, "?startServerThread@ServerInstance@@QEAAXXZ", void* a)
{
    original(a);
    Global<Level> = Global<Minecraft>->getLevel();
    Global<ServerLevel> = (ServerLevel*)Global<Minecraft>->getLevel();
    Global<ServerNetworkHandler> = Global<Minecraft>->getServerNetworkHandler();
    IF_LISTENED(ServerStartedEvent)
    {
        ServerStartedEvent ev;
        ev.call();
    }
    IF_LISTENED_END(ServerStartedEvent);
}

////////////// ServerStopped //////////////
THook(void, "??1DedicatedServer@@UEAA@XZ", void* a)
{
    original(a);
    Global<Level> = Global<Minecraft>->getLevel();
    Global<ServerLevel> = (ServerLevel*)Global<Minecraft>->getLevel();
    Global<ServerNetworkHandler> = Global<Minecraft>->getServerNetworkHandler();
    IF_LISTENED(ServerStoppedEvent)
        {
            ServerStoppedEvent ev;
            ev.call();
        }
    IF_LISTENED_END(ServerStoppedEvent);
}

////////////// RegCmd //////////////
THook(void, "?setup@ChangeSettingCommand@@SAXAEAVCommandRegistry@@@Z",
      CommandRegistry* rg, void* a1)
{
    Global<CommandRegistry> = rg;
    original(rg, a1);
    IF_LISTENED(RegCmdEvent)
    {
        RegCmdEvent ev;
        ev.mCommandRegistry = rg;
        ev.call();
    }
    IF_LISTENED_END(RegCmdEvent);
}

////////////// ConsoleOutputEvent //////////////
THook(std::ostream&,
      "??$_Insert_string@DU?$char_traits@D@std@@_K@std@@YAAEAV?$basic_ostream@DU?$char_traits@D@std@@@0@AEAV10@QEBD_K@Z",
      std::ostream& _this, const char* str, unsigned size)
{
    IF_LISTENED(ConsoleOutputEvent)
    {
        if (&_this == &std::cout)
        {
            ConsoleOutputEvent ev;
            ev.mOutput = string(str, size);
            if (!ev.call())
                return _this;
        }
    }
    IF_LISTENED_END(ConsoleOutputEvent);
    return original(_this, str, size);
}