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
#include <MC/NetworkIdentifier.hpp>
#include <MC/CommandContext.hpp>
#include <MC/CommandOrigin.hpp>
#include <MC/BaseCommandBlock.hpp>
#include <MC/GameMode.hpp>
#include <MC/ConnectionRequest.hpp>
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

// Call Event
template <typename T, typename T1>
void CallEvent(vector<T>& vec, T1& ev) {
    for (size_t count = 0; count < vec.size(); count++) {
        vec[count](ev);
    }
}

// Call Event
// Return false to cancel event
template <typename T, typename T1>
bool CallEventEx(vector<T>& vec, T1& ev) {
    bool pass_to_bds = true;
    for (size_t count = 0; count < vec.size(); count++) {
        if (!vec[count](ev))
            pass_to_bds = false;
    }
    return pass_to_bds;
}

// Call Event
// Return specific value to cancel event
template <typename T, typename T1, typename RTN>
RTN CallEventRtn(RTN rtn, vector<T>& vec, T1& ev) {
    bool pass_to_bds = true;
    for (size_t count = 0; count < vec.size(); count++) {
        if (!vec[count](ev))
            pass_to_bds = false;
    }
    return rtn;
}

/////////////////// PlayerPreJoin ///////////////////
#include <MC/ConnectionRequest.hpp>
#include <MC/WebToken.hpp>
vector<PreJoinEventCallback> PreJoinCallbacks;
LIAPI void Event::addEventListener(PreJoinEventCallback callback) {
    PreJoinCallbacks.push_back(callback);
}
THook(void, "?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@"
            "AEBVConnectionRequest@@AEAVServerPlayer@@@Z",
      void* ServerNetworkHandler_this, NetworkIdentifier* Ni, ConnectionRequest* a3, ServerPlayer* sp)
{
    try {
        string ip = Ni->getIP();
        string xuid = sp->getXuid();
        PreJoinEvent join_event = {sp, ip, xuid};
        CallEventEx(PreJoinCallbacks, join_event);
    } catch (seh_exception) {
        Logger::Error("Exception at PreJoinEV");
    }
    return original(ServerNetworkHandler_this, Ni, a3, sp);
}


/////////////////// PlayerJoin ///////////////////
vector<JoinEventCallback> JoinCallbacks;
LIAPI void Event::addEventListener(JoinEventCallback callback) {
    JoinCallbacks.push_back(callback);
}
THook(bool, "?setLocalPlayerAsInitialized@ServerPlayer@@QEAAXXZ",
    ServerPlayer* _this)
{
    try {
        JoinEvent join_event = { _this };
        CallEvent(JoinCallbacks, join_event);
    }
    catch (seh_exception) {
        Logger::Error("Exception at JoinEV");
    }
    return original(_this);
}


/////////////////// PlayerLeft ///////////////////
vector<LeftEventCallback> LeftCallbacks;
LIAPI void Event::addEventListener(LeftEventCallback callback) {
    LeftCallbacks.push_back(callback);
}
THook(void, "?_onPlayerLeft@ServerNetworkHandler@@AEAAXPEAVServerPlayer@@_N@Z",
      ServerNetworkHandler* _this, ServerPlayer* sp, bool a3)
{
    try {
        string xuid = sp->getXuid();
        LeftEvent left_event = {sp, xuid};
        CallEvent(LeftCallbacks, left_event);
    } catch (seh_exception) {
        Logger::Error("Exception at LeftEV");
    }
    return original(_this, sp, a3);
}

/////////////////// PlayerRespawn ///////////////////
vector<PlayerRespawnEventCallback> PlayerRespawnCallbacks;
LIAPI void Event::addEventListener(PlayerRespawnEventCallback callback) {
    PlayerRespawnCallbacks.push_back(callback);
}

THook(void, "?handle@?$PacketHandlerDispatcherInstance@VRespawnPacket@@$0A@@@UEBAXAEBVNetworkIdentifier@@AEAVNetEventCallback@@AEAV?$shared_ptr@VPacket@@@std@@@Z",
    void* _this, NetworkIdentifier* id, ServerNetworkHandler* handler, void* pPacket)
{
    try {
        RespawnPacket* packet = *(RespawnPacket**)pPacket;
        ServerPlayer* player = packet->getPlayerFromPacket(handler, id);
        PlayerRespawnEvent ev = { player };
        CallEvent(PlayerRespawnCallbacks, ev);
    }
    catch (seh_exception) {
        Logger::Error("Exception at LeftEV");
    }
    return original(_this, id, handler, pPacket);
}


/////////////////// PlayerChat ///////////////////
vector<ChatEventCallback> ChatCallbacks;
LIAPI void Event::addEventListener(ChatEventCallback callback) {
    ChatCallbacks.push_back(callback);
}
THook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z",
      ServerNetworkHandler* self, NetworkIdentifier* id, void* text)
{
    try {
        auto sp = self->getServerPlayer(*id);
        sp->getAvgPing();
        auto msg = std::string(*(std::string*)((uintptr_t)text + 88));
        ChatEvent chat_event = {sp, msg};
        if (!CallEventEx(ChatCallbacks, chat_event))
            return;
    } catch (seh_exception) {
        Logger::Error("Exception at ChatEV");
    }
    return original(self, id, text);
}


/////////////////// PlayerChangeDim ///////////////////
vector<ChangeDimEventCallback> ChangeDimCallbacks;
LIAPI void Event::addEventListener(ChangeDimEventCallback callback) {
    ChangeDimCallbacks.push_back(callback);
}
THook(bool, "?_playerChangeDimension@Level@@AEAA_NPEAVPlayer@@AEAVChangeDimensionRequest@@@Z",
      Level* _this, Player* _this_sp, ChangeDimensionRequest* cdimreq)
{
    ChangeDimEvent change_dim_event;
    change_dim_event.player = _this_sp;
    bool ret = original(_this, _this_sp, cdimreq);

    CallEvent(ChangeDimCallbacks, change_dim_event);
    return ret;
}


/////////////////// PlayerJump ///////////////////
vector<PlayerJumpEventCallback> PlayerJumpCallbacks;
LIAPI void Event::addEventListener(PlayerJumpEventCallback callback) {
    PlayerJumpCallbacks.push_back(callback);
}
THook(void, "?jumpFromGround@Player@@UEAAXXZ",
    Player* pl)
{
    PlayerJumpEvent ev{ pl };
    CallEvent(PlayerJumpCallbacks, ev);
    return original(pl);
}


/////////////////// PlayerSneak ///////////////////
vector<PlayerSneakEventCallback> PlayerSneakCallbacks;
LIAPI void Event::addEventListener(PlayerSneakEventCallback callback) {
    PlayerSneakCallbacks.push_back(callback);
}
THook(void, "?sendActorSneakChanged@ActorEventCoordinator@@QEAAXAEAVActor@@_N@Z",
    void* _this, Actor* ac, bool isSneaking)
{
    PlayerSneakEvent ev{ (Player*)ac, isSneaking };
    CallEvent(PlayerSneakCallbacks, ev);
    return original(_this, ac, isSneaking);
}


/////////////////// PlayerAttack ///////////////////
vector<PlayerAttackEventCallback> PlayerAttackCallbacks;
LIAPI void Event::addEventListener(PlayerAttackEventCallback callback) {
    PlayerAttackCallbacks.push_back(callback);
}
THook(bool, "?attack@Player@@UEAA_NAEAVActor@@AEBW4ActorDamageCause@@@Z",
    Player* _this, Actor* ac, int* damageCause)
{
    PlayerAttackEvent ev{ _this,ac, *damageCause };
    CallEventEx(PlayerAttackCallbacks, ev);
    return original(_this, ac, damageCause);
}


/////////////////// PlayerTakeItem ///////////////////
vector<PlayerTakeItemEventCallback> PlayerTakeItemCallbacks;
LIAPI void Event::addEventListener(PlayerTakeItemEventCallback callback) {
    PlayerTakeItemCallbacks.push_back(callback);
}
THook(bool, "?take@Player@@QEAA_NAEAVActor@@HH@Z",
    Player* _this, Actor* actor, int a2, int a3)
{
    ItemStack* it = (ItemStack*)((uintptr_t)actor + 1864);      //IDA Player::take
    PlayerTakeItemEvent ev{ _this, actor, it };
    CallEventEx(PlayerTakeItemCallbacks, ev);
    return original(_this, actor, a2, a3);
}


/////////////////// PlayerDropItem ///////////////////
vector<PlayerDropItemEventCallback> PlayerDropItemCallbacks;
LIAPI void Event::addEventListener(PlayerDropItemEventCallback callback) {
    PlayerDropItemCallbacks.push_back(callback);
}
THook(bool, "?drop@Player@@UEAA_NAEBVItemStack@@_N@Z",
    Player* _this, ItemStack* it, bool a3)
{
    PlayerDropItemEvent ev{ _this, it };
    CallEventEx(PlayerDropItemCallbacks, ev);
    return original(_this, it, a3);
}


/////////////////// PlayerEat ///////////////////
vector<PlayerEatEventCallback> PlayerEatCallbacks;
LIAPI void Event::addEventListener(PlayerEatEventCallback callback) {
    PlayerEatCallbacks.push_back(callback);
}
// Food Item Component Legacy
THook(Item*, "?useTimeDepleted@FoodItemComponentLegacy@@UEAAPEBVItem@@AEAVItemStack@@AEAVPlayer@@AEAVLevel@@@Z",
    class FoodItemComponentLegacy* _this, ItemStack* eaten, Player* player, Level* level)
{
    if (eaten->getTypeName() != "minecraft:suspicious_stew")
    {
        PlayerEatEvent ev{ player, eaten };
        CallEventRtn(nullptr, PlayerEatCallbacks, ev);
    }
    return original(_this, eaten, player, level);
}
// Food Item Component
THook(Item*, "?useTimeDepleted@FoodItemComponent@@UEAAPEBVItem@@AEAVItemStack@@AEAVPlayer@@AEAVLevel@@@Z",
    class FoodItemComponent* _this, ItemStack* eaten, Player* player, Level* level)
{
    PlayerEatEvent ev{ player, eaten };
    CallEventRtn(nullptr, PlayerEatCallbacks, ev);
    return original(_this, eaten, player, level);
}
// SuspiciousStew
THook(Item*, "?useTimeDepleted@SuspiciousStewItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z",
    class SuspiciousStewItem* _this, ItemStack* eaten, Level* level, Player* player)
{
    PlayerEatEvent ev{ player, eaten };
    CallEventRtn(nullptr, PlayerEatCallbacks, ev);
    return original(_this, eaten, level, player);
}
// Potion
THook(Item*, "?useTimeDepleted@PotionItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z",
    class PotionItem* _this, ItemStack* eaten, Level* level, Player* player)
{
    PlayerEatEvent ev{ player, eaten };
    CallEventRtn(nullptr, PlayerEatCallbacks, ev);
    return original(_this, eaten, level, player);
}
// Medicine
THook(Item*, "?useTimeDepleted@MedicineItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z",
    class MedicineItem* _this, ItemStack* eaten, Level* level, Player* player)
{
    PlayerEatEvent ev{ player, eaten };
    CallEventRtn(nullptr, PlayerEatCallbacks, ev);
    return original(_this, eaten, level, player);
}
// milk
THook(Item*, "?useTimeDepleted@BucketItem@@UEBA?AW4ItemUseMethod@@AEAVItemStack@@PEAVLevel@@PEAVPlayer@@@Z",
    class BucketItem* _this, ItemStack* eaten, Level* level, Player* player)
{
    PlayerEatEvent ev{ player, eaten };
    CallEventRtn(nullptr, PlayerEatCallbacks, ev);
    return original(_this, eaten, level, player);
}


/////////////////// PlayerConsumeTotem ///////////////////
vector<PlayerConsumeTotemEventCallback> PlayerConsumeTotemCallbacks;
LIAPI void Event::addEventListener(PlayerConsumeTotemEventCallback callback) {
    PlayerConsumeTotemCallbacks.push_back(callback);
}
THook(void, "?consumeTotem@Player@@UEAA_NXZ", Player* player)
{
    PlayerConsumeTotemEvent ev{ player };
    CallEvent(PlayerConsumeTotemCallbacks, ev);
    return original(player);
}


/////////////////// PlayerEffectChanged ///////////////////
vector<PlayerEffectChangedEventCallback> PlayerEffectChangedCallbacks;
LIAPI void Event::addEventListener(PlayerEffectChangedEventCallback callback) {
    PlayerEffectChangedCallbacks.push_back(callback);
}
// add
THook(void, "?onEffectAdded@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player* player, MobEffectInstance* effect)
{
    PlayerEffectChangedEvent ev{ player, PlayerEffectChangedEvent::EventType::Add, effect };
    CallEvent(PlayerEffectChangedCallbacks, ev);
    return original(player, effect);
}
// remove
THook(void, "?onEffectRemoved@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player* player, MobEffectInstance* effect)
{
    PlayerEffectChangedEvent ev{ player, PlayerEffectChangedEvent::EventType::Remove, effect };
    CallEvent(PlayerEffectChangedCallbacks, ev);
    return original(player, effect);
}
// update
THook(void, "?onEffectUpdated@ServerPlayer@@MEAAXAEAVMobEffectInstance@@@Z", Player* player, MobEffectInstance* effect)
{
    PlayerEffectChangedEvent ev{ player, PlayerEffectChangedEvent::EventType::Update, effect };
    CallEvent(PlayerEffectChangedCallbacks, ev);
    return original(player, effect);
}


/////////////////// PlayerStartDestroyBlock ///////////////////
vector<PlayerStartDestroyBlockEventCallback> PlayerStartDestroyBlockCallbacks;
LIAPI void Event::addEventListener(PlayerStartDestroyBlockEventCallback callback) {
    PlayerStartDestroyBlockCallbacks.push_back(callback);
}
THook(void, "?sendBlockDestructionStarted@BlockEventCoordinator@@QEAAXAEAVPlayer@@AEBVBlockPos@@@Z",
    void* _this, Player* pl, BlockPos* bp)
{
    PlayerStartDestroyBlockEvent ev{ pl, *bp };
    CallEvent(PlayerStartDestroyBlockCallbacks, ev);
    return original(_this, pl, bp);
}


/////////////////// PlayerCmd ///////////////////
vector<PlayerCmdCallback> PlayerCmdCallbacks;
LIAPI void Event::addEventListener(PlayerCmdCallback callback) {
    PlayerCmdCallbacks.push_back(callback);
}
THook(bool, "?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@V?$shared_ptr@VCommandContext@@@std@@_N@Z",
      MinecraftCommands* _this, unsigned int* a2, std::shared_ptr<CommandContext> x, char a4)
{
    Player* sp = x->getOrigin().getPlayer();
    bool result = original(_this, a2, x, a4);
    if (sp) {
        try {
            string cmd = x->getCmd();
            if (!cmd.empty() && cmd.at(0) == '/') {
                cmd = cmd.substr(1, cmd.size() - 1);
            }
            PlayerCmdEvent player_use_cmd_event = {sp, cmd, result};

            if (!CallEventEx(PlayerCmdCallbacks, player_use_cmd_event))
                return true;
        } catch (seh_exception) {
            Logger::Error("Exception at PlayerUseCmdEV");
        }
    }
    return result;
}


/////////////////// CmdBlockExecute ///////////////////
vector<CmdBlockExecuteEventCallback> CmdBlockExecuteCallbacks;
LIAPI void Event::addEventListener(CmdBlockExecuteEventCallback callback) {
    CmdBlockExecuteCallbacks.push_back(callback);
}
THook(bool, "?_performCommand@BaseCommandBlock@@AEAA_NAEAVBlockSource@@AEBVCommandOrigin@@AEA_N@Z",
      BaseCommandBlock* _this, BlockSource* a2, CommandOrigin* a3, bool* a4)
{
    try {
        CmdBlockExecuteEvent cmd_block_execute_event = {_this->getCommand(), a3->getBlockPosition()};

        if (!CallEventEx(CmdBlockExecuteCallbacks, cmd_block_execute_event))
            return true;
    } catch (seh_exception) {
        Logger::Error("Exception at CmdBlockExeEV");
    }
    return original(_this, a2, a3, a4);
}


/////////////////// PlayerDeath ///////////////////
vector<PlayerDeathEventCallback> PlayerDeathCallbacks;
LIAPI void Event::addEventListener(PlayerDeathEventCallback callback) {
    PlayerDeathCallbacks.push_back(callback);
}

THook(void*, "?die@Player@@UEAAXAEBVActorDamageSource@@@Z", ServerPlayer& thi, void* src)
{
    PlayerDeathEvent player_death_event = {&thi};

    CallEvent(PlayerDeathCallbacks, player_death_event);
    return original(thi, src);
}


/////////////////// PlayerDestroy ///////////////////
vector<PlayerDestroyEventCallback> PlayerDestroyCallbacks;
LIAPI void Event::addEventListener(PlayerDestroyEventCallback callback) {
    PlayerDestroyCallbacks.push_back(callback);
}
#include <MC/BlockLegacy.hpp>
THook(bool, "?playerWillDestroy@BlockLegacy@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z",
      BlockLegacy* _this, Player* pl, BlockPos& blkpos, Block& bl) {
    PlayerDestroyEvent player_destroy_event = {pl, blkpos, &bl};
    CallEvent(PlayerDestroyCallbacks, player_destroy_event);
    return original(_this, pl, blkpos, bl);
}


/////////////////// PlayerUseItemOn ///////////////////
vector<PlayerUseItemOnEventCallback> PlayerUseItemOnCallbacks;
LIAPI void Event::addEventListener(PlayerUseItemOnEventCallback callback) {
    PlayerUseItemOnCallbacks.push_back(callback);
}

THook(bool, "?useItemOn@GameMode@@UEAA_NAEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z",
      GameMode* thi, ItemStack& a2, BlockPos a3_pos, unsigned char side, void* a5, void* a6_block) 
{
    try {
        auto sp = thi->getPlayer();
        PlayerUseItemOnEvent Player_use_item_on_event = {sp, &a2, a3_pos, side};
        CallEvent(PlayerUseItemOnCallbacks, Player_use_item_on_event);
    } catch (seh_exception) {
        Logger::Error("Exception at PlayerUseItemOnEV");
    }
    return original(thi, a2, a3_pos, side, a5, a6_block);
}


/////////////////// MobHurted ///////////////////
vector<MobHurtedEventCallback> MobHurtedCallbacks;
LIAPI void Event::addEventListener(MobHurtedEventCallback callback) {
    MobHurtedCallbacks.push_back(callback);
}

THook(bool, "?_hurt@Mob@@MEAA_NAEBVActorDamageSource@@H_N1@Z",
      Mob* ac, ActorDamageSource& src, int damage, bool unk1_1, bool unk2_0) 
{
    MobHurtedEvent Mob_hurted_event = {ac, &src, damage};
    CallEvent(MobHurtedCallbacks, Mob_hurted_event);
    return original(ac, src, damage, unk1_1, unk2_0);
}


/////////////////// PlayerUseItem ///////////////////
vector<PlayerUseItemEventCallback> PlayerUseItemCallbacks;
LIAPI void Event::addEventListener(PlayerUseItemEventCallback callback) {
    PlayerUseItemCallbacks.push_back(callback);
}

THook(bool, "?baseUseItem@GameMode@@QEAA_NAEAVItemStack@@@Z", GameMode* thi, ItemStack& a2) 
{
    try {
        auto sp = thi->getPlayer();
        PlayerUseItemEvent player_use_item_event = {sp, &a2};
        CallEvent(PlayerUseItemCallbacks, player_use_item_event);
    } catch (seh_exception) {
        Logger::Error("Exception at PlayerUseItemEV");
    }
    return original(thi, a2);
}


/////////////////// MobDie ///////////////////
vector<MobDieEventCallback> MobDieCallbacks;
LIAPI void Event::addEventListener(MobDieEventCallback callback) {
    MobDieCallbacks.push_back(callback);
}

THook(bool, "?die@Mob@@UEAAXAEBVActorDamageSource@@@Z", Mob* mob, ActorDamageSource* ads) 
{
    try {
        auto level = mob->getLevel();
        auto src = Level::getDamageSourceEntity(ads);
        MobDieEvent mob_die_event = {mob, src};
        CallEvent(MobDieCallbacks, mob_die_event);
    } catch (seh_exception) {
        Logger::Error("Exception at MobDieEV");
    }
    return original(mob, ads);
}


////////////// ItemUseOnActorInventoryEV //////////////
vector<ItemUseOnActorEventCallback> ItemUseOnActorCallbacks;
LIAPI void Event::addEventListener(ItemUseOnActorEventCallback callback) {
    ItemUseOnActorCallbacks.push_back(callback);
}

THook(void, "?handle@ItemUseOnActorInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z"
    , ServerNetworkHandler* thi, ServerPlayer* sp, bool unk) 
{
    auto rtid = dAccess<ActorRuntimeID, 104>(thi);
    auto id = dAccess<int, 112>(thi);
    ItemUseOnActorEvent pre_ItemUseOnActor_event = {rtid, id};
    CallEvent(ItemUseOnActorCallbacks, pre_ItemUseOnActor_event);
    return original(thi, sp, unk);
}