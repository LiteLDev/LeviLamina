#include <EventAPI.h>
#include <Global.h>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include <LoggerAPI.h>
#include <MC/Player.hpp>
#include <MC/BlockActor.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/ItemStack.hpp>
#include <MC/BlockSource.hpp>
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

#define DeclareEventListeners(EVENT) EventTemplate<EVENT>::ListenersContainer EventTemplate<EVENT>::listeners

DeclareEventListeners(PlayerPreJoinEvent);
DeclareEventListeners(PlayerJoinEvent);
DeclareEventListeners(PlayerLeftEvent);
DeclareEventListeners(PlayerRespawnEvent);
DeclareEventListeners(Event::PlayerChatEvent);
DeclareEventListeners(PlayerUseItemEvent);
DeclareEventListeners(PlayerUseItemOnEvent);
DeclareEventListeners(PlayerChangeDimEvent);
DeclareEventListeners(PlayerJumpEvent);
DeclareEventListeners(PlayerSneakEvent);
DeclareEventListeners(PlayerAttackEvent);
DeclareEventListeners(PlayerDeathEvent);
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
DeclareEventListeners(MobHurtEvent);
DeclareEventListeners(MobDieEvent);
DeclareEventListeners(ItemUseOnActorEvent);
DeclareEventListeners(CmdBlockExecuteEvent);
DeclareEventListeners(ServerStartedEvent);
DeclareEventListeners(PostInitEvent);
DeclareEventListeners(RegCmdEvent);


#define IF_LISTENED(EVENT) \
    if(!EVENT::hasListener()) { try

#define IF_LISTENED_END(EVENT) \
        catch(...) { \
            Logger::Error("Event Callback Failed!"); \
            Logger::Error("Uncaught Exception Detected!"); \
            Logger::Error("In Event: " #EVENT ""); \
        } }


/////////////////// PreJoin ///////////////////
THook(void, "?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@"
            "AEBVConnectionRequest@@AEAVServerPlayer@@@Z",
      void* ServerNetworkHandler_this, NetworkIdentifier* Ni, ConnectionRequest* a3, ServerPlayer* sp)
{
    IF_LISTENED(PlayerPreJoinEvent)
    {
        PlayerPreJoinEvent ev;
        ev.player = sp;
        ev.ip = Ni->getIP();
        ev.xuid = sp->getXuid();

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
        ev.player = _this;

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
        ev.player = sp;
        ev.xuid = sp->getXuid();
        ev.call();
    }
    IF_LISTENED_END(PlayerLeftEvent);
    return original(_this, sp, a3);
}

/////////////////// PlayerRespawn ///////////////////
THook(void, "?handle@?$PacketHandlerDispatcherInstance@VRespawnPacket@@$0A@@@UEBAXAEBVNetworkIdentifier@@AEAVNetEventCallback@@AEAV?$shared_ptr@VPacket@@@std@@@Z",
    void* _this, NetworkIdentifier* id, ServerNetworkHandler* handler, void* pPacket)
{
    IF_LISTENED(PlayerRespawnEvent)
    {
        RespawnPacket* packet = *(RespawnPacket**)pPacket;
        
        PlayerRespawnEvent ev;
        ev.player = packet->getPlayerFromPacket(handler, id);
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
        ev.player = _this->getServerPlayer(*id);
        ev.msg = std::string(*(std::string*)((uintptr_t)text + 88));

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
    IF_LISTENED(PlayerChangeDimEvent)
    {
        PlayerChangeDimEvent ev;
        ev.player = sp;
        ret = original(_this, sp, cdimreq);
        ev.call();
    }
    IF_LISTENED_END(PlayerChangeDimEvent);
    return ret;
}


/////////////////// PlayerJump ///////////////////
THook(void, "?jumpFromGround@Player@@UEAAXXZ",
    Player* pl)
{
    IF_LISTENED(PlayerJumpEvent)
    {
        PlayerJumpEvent ev;
        ev.player = pl;
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
        ev.player = (Player*)ac;
        ev.isSneaking = isSneaking;
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
        ev.attacker = _this;
        ev.victim = ac;
        ev.damage = *damageCause;
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
        ItemStack* it = (ItemStack*)((uintptr_t)actor + 1864);      //IDA Player::take

        PlayerTakeItemEvent ev;
        ev.player = _this;
        ev.itemEntity = actor;
        ev.itemStack = it;
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
        ev.player = _this;
        ev.itemStack = it;
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
            ev.player = player;
            ev.eating = eaten;
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
        ev.player = player;
        ev.eating = eaten;
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
        ev.player = player;
        ev.eating = eaten;
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
        ev.player = player;
        ev.eating = eaten;
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
        ev.player = player;
        ev.eating = eaten;
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
        ev.player = player;
        ev.eating = eaten;
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
        ev.player = player;
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
        ev.player = player;
        ev.type = PlayerEffectChangedEvent::EventType::Add;
        ev.effect = effect;
        ev.call();
    }
    IF_LISTENED_END(PlayerEffectChangedEvent);
    return original(player, effect);
}
// remove
THook(void, "?onEffectRemoved@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player* player, MobEffectInstance* effect)
{
    IF_LISTENED(PlayerEffectChangedEvent)
    {
        PlayerEffectChangedEvent ev;
        ev.player = player;
        ev.type = PlayerEffectChangedEvent::EventType::Remove;
        ev.effect = effect;
        ev.call();
    }
    IF_LISTENED_END(PlayerEffectChangedEvent);
    return original(player, effect);
}
// update
THook(void, "?onEffectUpdated@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player* player, MobEffectInstance* effect)
{
    IF_LISTENED(PlayerEffectChangedEvent)
    {
        PlayerEffectChangedEvent ev;
        ev.player = player;
        ev.type = PlayerEffectChangedEvent::EventType::Update;
        ev.effect = effect;
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
        ev.player = pl;
        ev.blockPos = *bp;
        ev.dimId = pl->getDimensionId();
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
        PlayerPlaceBlockEvent ev;
        ev.player = (Player*)ac;
        ev.blockPos = *a3;
        ev.dimId = ac->getDimensionId();
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerPlaceBlockEvent);
    return original(_this, a2, a3, a4, ac, a6);
}

/////////////////// PlayerOpenContainer ///////////////////
THook(__int64, "?onPlayerOpenContainer@VanillaServerGameplayEventListener@@UEAA?AW4EventResult@@AEBUPlayerOpenContainerEvent@@@Z",
    void* a1, void* a2)
{
    IF_LISTENED(PlayerOpenContainerEvent)
    {
        BlockPos bp = dAccess<BlockPos>(a2, 28);        // IDA VanillaServerGameplayEventListener::onPlayerOpenContainer
        Player* pl = SymCall("??$tryUnwrap@VPlayer@@$$V@WeakEntityRef@@QEBAPEAVPlayer@@XZ", Player*, void*)(a2);

        PlayerOpenContainerEvent ev;
        ev.player = pl;
        ev.blockPos = bp;
        ev.dimId = pl->getDimensionId();
        ev.container = Level::getBlockInstance(bp, pl->getDimensionId()).getContainer();
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
        BlockActor* ba = (BlockActor*)((char*)_this - 240);        //IDA ChestBlockActor::stopOpen
        BlockPos bp = ba->getPosition();

        PlayerCloseContainerEvent ev;
        ev.player = pl;
        ev.blockPos = bp;
        ev.dimId = pl->getDimensionId();
        ev.container = Level::getBlockInstance(bp, pl->getDimensionId()).getContainer();
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
        BlockActor* ba = (BlockActor*)((char*)_this - 240);        //IDA ChestBlockActor::stopOpen
        BlockPos bp = ba->getPosition();

        PlayerCloseContainerEvent ev;
        ev.player = pl;
        ev.blockPos = bp;
        ev.dimId = pl->getDimensionId();
        ev.container = Level::getBlockInstance(bp, pl->getDimensionId()).getContainer();
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
        PlayerInventoryChangeEvent ev;
        ev.player = _this;
        ev.slotNumber = slotNumber;
        ev.oldItem = oldItem;
        ev.newItem = newItem;
        ev.call();
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
            ev.player = pl;
            ev.pos = pl->getPosition();
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
        PlayerSprintEvent ev;
        ev.player = (Player*)_this;
        ev.isSprinting = sprinting;
        if (!ev.call())
            return;
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
        PlayerSetArmorEvent ev;
        ev.player = _this;
        ev.slotNumber = slot;
        ev.armor = it;
        ev.call();
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
        ev.player = pl;
        ev.blockPos = *bp;
        ev.dimId = pl->getDimensionId();
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
        ev.player = pl;
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(PlayerOpenContainerScreenEvent);
    return original(pl);
}

/////////////////// PlayerCmd ///////////////////
THook(MCRESULT*, "?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@V?$shared_ptr@VCommandContext@@@std@@_N@Z",
      MinecraftCommands* _this, MCRESULT* rtn, std::shared_ptr<CommandContext> context, bool print)
{
    MCRESULT* result = original(_this, rtn, context, print);
    IF_LISTENED(PlayerCmdEvent)
    {
        Player* sp = context->getOrigin().getPlayer();
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
    }
    IF_LISTENED_END(PlayerCmdEvent);
    return result;
}


/////////////////// CmdBlockExecute ///////////////////
THook(bool, "?_performCommand@BaseCommandBlock@@AEAA_NAEAVBlockSource@@AEBVCommandOrigin@@AEA_N@Z",
      BaseCommandBlock* _this, BlockSource* a2, CommandOrigin* a3, bool* a4)
{
    IF_LISTENED(CmdBlockExecuteEvent)
    {
        CmdBlockExecuteEvent ev;
        ev.cmd = _this->getCommand();
        ev.blockPos = a3->getBlockPosition();
        ev.dimId = a2->getDimensionId();
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(CmdBlockExecuteEvent);
    return original(_this, a2, a3, a4);
}


/////////////////// PlayerDeath ///////////////////
THook(void*, "?die@Player@@UEAAXAEBVActorDamageSource@@@Z", ServerPlayer* _this, void* src)
{
    IF_LISTENED(PlayerDeathEvent)
    {
        PlayerDeathEvent ev;
        ev.player = _this;
        ev.call();
    }
    IF_LISTENED_END(PlayerDeathEvent);
    return original(_this, src);
}


/////////////////// PlayerDestroy ///////////////////
THook(bool, "?playerWillDestroy@BlockLegacy@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z",
      BlockLegacy* _this, Player* pl, BlockPos& blkpos, Block& bl)
{
    IF_LISTENED(PlayerDestroyBlockEvent)
    {
        PlayerDestroyBlockEvent ev;
        ev.player = pl;
        ev.block = &bl;
        ev.blockPos = blkpos;
        ev.dimId = pl->getDimensionId();
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
        ev.player = _this->getPlayer();
        ev.blockPos = bp;
        ev.itemStack = &it;
        ev.side = side;
        ev.dimId = ev.player->getDimensionId();
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
        MobHurtEvent ev;
        ev.victim = ac;
        ev.source = &src;
        ev.damage = damage;
        if (!ev.call())
            return false;
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
        ev.player = _this->getPlayer();
        ev.itemStack = &it;
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
        MobDieEvent ev;
        ev.mob = mob;
        ev.source = Level::getDamageSourceEntity(ads);
        if (!ev.call())
            return false;
    }
    IF_LISTENED_END(MobDieEvent);
    return original(mob, ads);
}


////////////// ItemUseOnActorInventoryEV //////////////
THook(void, "?handle@ItemUseOnActorInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z"
    , ServerNetworkHandler* _this, ServerPlayer* sp, bool unk) 
{
    IF_LISTENED(ItemUseOnActorEvent)
    {
        ItemUseOnActorEvent ev;
        ev.actorRuntimeID = dAccess<ActorRuntimeID, 104>(_this);
        ev.interactiveMode = dAccess<int, 112>(_this);
        ev.call();
    }
    IF_LISTENED_END(ItemUseOnActorEvent);
    return original(_this, sp, unk);
}

////////////// ServerStarted //////////////
THook(void, "?startServerThread@ServerInstance@@QEAAXXZ", void* a)
{
    original(a);
    IF_LISTENED(ServerStartedEvent)
    {
        ServerStartedEvent ev;
        ev.call();
    }
    IF_LISTENED_END(ServerStartedEvent);
}

////////////// RegCmd //////////////
THook(void,"?setup@ChangeSettingCommand@@SAXAEAVCommandRegistry@@@Z",
    CommandRegistry* rg, void* a1)
{
    Global<CommandRegistry> = rg;
    original(rg, a1);
    IF_LISTENED(RegCmdEvent)
    {
        RegCmdEvent ev;
        ev.CMDRg = rg;
        ev.call();
    }
    IF_LISTENED_END(RegCmdEvent);
}