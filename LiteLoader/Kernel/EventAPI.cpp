#include <EventAPI.h>
#include <Global.h>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
#include <LoggerAPI.h>
#include <MC/Player.hpp>
#include <MC/ServerPlayer.hpp>
#include <MC/ServerNetworkHandler.hpp>
#include <MC/Level.hpp>
#include <RegCommandAPI.h>
#include <MC/NetworkIdentifier.hpp>
#include <MC/CommandContext.hpp>
#include <MC/CommandOrigin.hpp>
#include <mc/GameMode.hpp>
class ServerPlayer;
class NetworkIdentifier;
using std::vector;
using namespace Event;

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

/////////////////// PlayerJoin ///////////////////
#include <MC/ConnectionRequest.hpp>
#include <MC/WebToken.hpp>
vector<JoinEventCallback> JoinCallbacks;
LIAPI void Event::addEventListener(JoinEventCallback callback) {
    JoinCallbacks.push_back(callback);
}
THook(void, "?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@"
            "AEBVConnectionRequest@@AEAVServerPlayer@@@Z",
      void* ServerNetworkHandler_this, NetworkIdentifier* Ni, ConnectionRequest* a3, ServerPlayer* sp) {
    try {
        string ip = Ni->getIP();
        string xuid = sp->getXuid();
        JoinEvent join_event = {sp, ip, xuid};
        CallEvent(JoinCallbacks, join_event);
    } catch (seh_exception) {
        Logger::Error("Exception at JoinEV");
    }
    return original(ServerNetworkHandler_this, Ni, a3, sp);
}

/////////////////// PlayerLeft ///////////////////

class DisconnectPacket;
class ServerNetworkHandler;
vector<LeftEventCallback> LeftCallbacks;
LIAPI void Event::addEventListener(LeftEventCallback callback) {
    LeftCallbacks.push_back(callback);
}
THook(void, "?_onPlayerLeft@ServerNetworkHandler@@AEAAXPEAVServerPlayer@@_N@Z",
      ServerNetworkHandler* _this, ServerPlayer* sp, bool a3) {
    try {
        string xuid = sp->getXuid();
        LeftEvent left_event = {sp, xuid};
        CallEvent(LeftCallbacks, left_event);
    } catch (seh_exception) {
        Logger::Error("Exception at LeftEV");
    }
    return original(_this, sp, a3);
}

/////////////////// PlayerChat ///////////////////

vector<ChatEventCallback> ChatCallbacks;
LIAPI void Event::addEventListener(ChatEventCallback callback) {
    ChatCallbacks.push_back(callback);
}
THook(void, "?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z",
      ServerNetworkHandler* self, NetworkIdentifier* id, void* text) {
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

class ChangeDimensionRequest;
class Level;
vector<ChangeDimEventCallback> ChangeDimCallbacks;
LIAPI void Event::addEventListener(ChangeDimEventCallback callback) {
    ChangeDimCallbacks.push_back(callback);
}
THook(bool, "?_playerChangeDimension@Level@@AEAA_NPEAVPlayer@@AEAVChangeDimensionRequest@@@Z",
      Level* _this, Player* _this_sp, ChangeDimensionRequest* cdimreq) {
    ChangeDimEvent change_dim_event;
    change_dim_event.Player = _this_sp;
    bool ret = original(_this, _this_sp, cdimreq);

    CallEvent(ChangeDimCallbacks, change_dim_event);
    return ret;
}

/////////////////// PlayerUseCmd ///////////////////
#include <MC/CommandContext.hpp>
vector<PlayerCmdCallback> PlayerCmdCallbacks;
LIAPI void Event::addEventListener(PlayerCmdCallback callback) {
    PlayerCmdCallbacks.push_back(callback);
}
THook(bool, "?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@V?$shared_ptr@VCommandContext@@@std@@_N@Z",
      MinecraftCommands* _this, unsigned int* a2, std::shared_ptr<CommandContext> x, char a4) {
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

/////////////////// CmdBlockExe ///////////////////
#include <MC/BaseCommandBlock.hpp>
class BaseCommandBlock;
class BlockSource;
vector<CmdBlockExecuteEventCallback> CmdBlockExecuteCallbacks;
LIAPI void Event::addEventListener(CmdBlockExecuteEventCallback callback) {
    CmdBlockExecuteCallbacks.push_back(callback);
}
THook(bool, "?_performCommand@BaseCommandBlock@@AEAA_NAEAVBlockSource@@AEBVCommandOrigin@@AEA_N@Z",
      BaseCommandBlock* _this, BlockSource* a2, CommandOrigin* a3, bool* a4) {
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

THook(void*, "?die@Player@@UEAAXAEBVActorDamageSource@@@Z", ServerPlayer& thi, void* src) {
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
      GameMode* thi, ItemStack& a2, BlockPos a3_pos, unsigned char side, void* a5, void* a6_block) {
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
      Mob* ac, ActorDamageSource& src, int damage, bool unk1_1, bool unk2_0) {
    MobHurtedEvent Mob_hurted_event = {ac, &src, damage};
    CallEvent(MobHurtedCallbacks, Mob_hurted_event);
    return original(ac, src, damage, unk1_1, unk2_0);
}

/////////////////// PlayerUseItem ///////////////////

vector<PlayerUseItemEventCallback> PlayerUseItemCallbacks;
LIAPI void Event::addEventListener(PlayerUseItemEventCallback callback) {
    PlayerUseItemCallbacks.push_back(callback);
}

THook(bool, "?baseUseItem@GameMode@@QEAA_NAEAVItemStack@@@Z", GameMode* thi, ItemStack& a2) {
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

THook(bool, "?die@Mob@@UEAAXAEBVActorDamageSource@@@Z", Mob* mob, ActorDamageSource* ads) {
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

/////////////////// PreJoinEV ///////////////////

vector<PreJoinEventCallback> PreJoinCallbacks;
LIAPI void Event::addEventListener(PreJoinEventCallback callback) {
    PreJoinCallbacks.push_back(callback);
}
THook(void, "?_onClientAuthenticated@ServerNetworkHandler@@AEAAXAEBVNetworkIdentifier@@AEBVCertificate@@@Z",
      void* snh, NetworkIdentifier& neti, Certificate& cert) {
    original(snh, neti, cert);
    PreJoinEvent pre_join_event = {&cert};

    CallEvent(PreJoinCallbacks, pre_join_event);
}

////////////// ItemUseOnActorInventoryEV //////////////
vector<ItemUseOnActorEventCallback> ItemUseOnActorCallbacks;
LIAPI void Event::addEventListener(ItemUseOnActorEventCallback callback) {
    ItemUseOnActorCallbacks.push_back(callback);
}

THook(void, "?handle@ItemUseOnActorInventoryTransaction@@UEBA?AW4InventoryTransactionError@@AEAVPlayer@@_N@Z"
    , ServerNetworkHandler* thi, ServerPlayer* sp, bool unk) {
    auto rtid = dAccess<ActorRuntimeID, 104>(thi);
    auto id = dAccess<int, 112>(thi);
    ItemUseOnActorEvent pre_ItemUseOnActor_event = {rtid, id};
    CallEvent(ItemUseOnActorCallbacks, pre_ItemUseOnActor_event);
    return original(thi, sp, unk);
}