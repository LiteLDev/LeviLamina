#include <api/basicEvent.h>
#include <api/LiteloaderApi.h>
#include <lbpch.h>
#include <liteloader.h>
#include <mc/Command.h>
#include <mc/OffsetHelper.h>
#include <mc/Player.h>
#include <mc/mass.h>
#include <functional>
#include <iostream>
#include <string>
#include <vector>
class ServerPlayer;
class NetworkIdentifier;
using std::vector;

// Call Event
template <typename T, typename T1>
void CallEvent(vector<T> &vec, T1 &ev) {
    for (size_t count = 0; count < vec.size(); count++) {
        vec[count](ev);
    }
}

// Call Event 
// Return false to cancel event
template <typename T, typename T1>
bool CallEventEx(vector<T> &vec, T1 &ev) {
    bool pass_to_bds = true;
    for (size_t count = 0; count < vec.size(); count++) {
        if (!vec[count](ev))
            pass_to_bds = false;
    }
    return pass_to_bds;
}


/////////////////// PlayerJoin ///////////////////

vector<function<void(JoinEV)>> JoinCallBacks;
LIAPI void Event::addEventListener(function<void(JoinEV)> callback) {
    JoinCallBacks.push_back(callback);
}
THook(void,"?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@"
      "AEBVConnectionRequest@@AEAVServerPlayer@@@Z",
      void *ServerNetworkHandler_this, NetworkIdentifier *Ni, void *ConnectionRequest, ServerPlayer *sp)
{
    string ip = liteloader::getIP(*Ni);
    xuid_t xuid = atoll(SymCall("?getXuid@ExtendedCertificate@@SA?AV?$basic_string@DU?$char_traits@"
                                "D@std@@V?$allocator@D@2@@std@@AEBVCertificate@@@Z",
                                string, void *)(offPlayer::getCert((Player *)sp))
                            .c_str());
    JoinEV join_event = {sp, ip, xuid};
    
    CallEvent(JoinCallBacks, join_event);
    return original(ServerNetworkHandler_this, Ni, ConnectionRequest, sp);
}


/////////////////// PlayerLeft ///////////////////

class DisconnectPacket;
class ServerNetworkHandler;
vector<function<void(LeftEV)>> Left_call_backs;
LIAPI void Event::addEventListener(function<void(LeftEV)> callback) {
    Left_call_backs.push_back(callback);
}
THook(void,"?_onPlayerLeft@ServerNetworkHandler@@AEAAXPEAVServerPlayer@@_N@Z",
      ServerNetworkHandler *_this, ServerPlayer *sp, bool a3)
{
    xuid_t xuid = atoll(SymCall("?getXuid@ExtendedCertificate@@SA?AV?$basic_string@DU?$char_traits@"
                                "D@std@@V?$allocator@D@2@@std@@AEBVCertificate@@@Z",
                                string, void *)(offPlayer::getCert((Player *)sp))
                            .c_str());
    LeftEV left_event = {sp, xuid};
    
    CallEvent(Left_call_backs, left_event);
    return original(_this, sp, a3);
}


/////////////////// PlayerChat ///////////////////

vector<function<bool(ChatEV)>> Chat_call_backs;
LIAPI void Event::addEventListener(function<bool(ChatEV)> callback) {
    Chat_call_backs.push_back(callback);
}
/*
THook(void,
      "_displayGameMessage@ServerNetworkHandler@@AEAAXAEBVPlayer@@AEAUChatEvent@@@Z",
      void *snh,
      ServerPlayer *sp,
      string *msg) {
    ChatEV ChatEV    = {sp, *msg};
    bool isCancelled = false;
    for (size_t count = 0; count < Chat_call_backs.size(); count++) {
        if (!Chat_call_backs[count](ChatEV))
            isCancelled = true;
    }
    if (!isCancelled) {
        original(snh, sp, msg);
    }
}*/
THook(void,"?handle@ServerNetworkHandler@@UEAAXAEBVNetworkIdentifier@@AEBVTextPacket@@@Z",
      void *self, NetworkIdentifier *id, void *text)
{
    auto sp = SymCall("?_getServerPlayer@ServerNetworkHandler@@AEAAPEAVServerPlayer@@AEBVNetworkIdentifier@@E@Z",
        Player *, void *, void *, char)(self, id, *(char *)((uintptr_t)text + 16));
    auto msg = std::string(*(std::string *)((uintptr_t)text + 88));
    ChatEV chat_event = {sp, msg};
    
    if (!CallEventEx(Chat_call_backs, chat_event))
        return;
    return original(self, id, text);
}


/////////////////// PlayerChangeDim ///////////////////

class ChangeDimensionRequest;
class Level;
vector<function<void(ChangeDimEV)>> Change_dim_call_backs;
LIAPI void Event::addEventListener(function<void(ChangeDimEV)> callback) {
    Change_dim_call_backs.push_back(callback);
}
THook(bool,"?_playerChangeDimension@Level@@AEAA_NPEAVPlayer@@AEAVChangeDimensionRequest@@@Z",
      Level *_this, Player *_this_sp, ChangeDimensionRequest *cdimreq)
{
    ChangeDimEV change_dim_event;
    change_dim_event.Player = _this_sp;
    bool ret = original(_this, _this_sp, cdimreq);
    
    CallEvent(Change_dim_call_backs, change_dim_event);
    return ret;
}


/////////////////// PlayerUseCmd ///////////////////

Player *MakeSP(CommandOrigin &ori) {
    Player *pl = (Player *)ori.getEntity();
    return pl ? pl : nullptr;
}
vector<function<bool(PlayerUseCmdEV)>> Player_use_cmd_call_backs;
LIAPI void Event::addEventListener(function<bool(PlayerUseCmdEV)> callback) {
    Player_use_cmd_call_backs.push_back(callback);
}
THook(bool,"?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@V?$shared_ptr@VCommandContext@@@std@@_N@Z",
    MinecraftCommands *_this, unsigned int *a2, std::shared_ptr<CommandContext> x, char a4) {

    Player *sp  = MakeSP(x->getOrigin());
    bool result = original(_this, a2, x, a4);
    if (sp) {
        string cmd = x->getCmd();
        if (cmd.at(0) == '/') {
            cmd = cmd.substr(1, cmd.size() - 1);
        }
        PlayerUseCmdEV player_use_cmd_event = {sp, cmd, result};
        
        if (!CallEventEx(Player_use_cmd_call_backs, player_use_cmd_event))
            return true;
    }
    return result;
}


/////////////////// CmdBlockExe ///////////////////

class BaseCommandBlock;
class BlockSource;
vector<function<bool(CmdBlockExeEV)>> Cmd_block_exe_ev_call_backs;
LIAPI void Event::addEventListener(function<bool(CmdBlockExeEV)> callback) {
    Cmd_block_exe_ev_call_backs.push_back(callback);
}
THook(bool,"?_performCommand@BaseCommandBlock@@AEAA_NAEAVBlockSource@@AEBVCommandOrigin@@AEA_N@Z",
      BaseCommandBlock *_this, BlockSource *a2, CommandOrigin *a3, bool *a4)
{
    CmdBlockExeEV cmd_block_execute_event = {offBaseCommandBlock::getCMD(_this), offBaseCommandBlock::getPos(_this)};

    if (!CallEventEx(Cmd_block_exe_ev_call_backs, cmd_block_execute_event))
        return true;
    return original(_this, a2, a3, a4);
}


/////////////////// PlayerDeath ///////////////////

vector<function<void(PlayerDeathEV)>> Player_death_call_backs;
LIAPI void Event::addEventListener(function<void(PlayerDeathEV)> callback) {
    Player_death_call_backs.push_back(callback);
}

THook(void *,"?die@Player@@UEAAXAEBVActorDamageSource@@@Z", ServerPlayer &thi, void *src)
{
    PlayerDeathEV player_death_event = {&thi};
    
    CallEvent(Player_death_call_backs, player_death_event);
    return original(thi, src);
}


/////////////////// PlayerDestroy ///////////////////

vector<function<void(PlayerDestroyEV)>> Player_destroy_call_backs;
LIAPI void Event::addEventListener(function<void(PlayerDestroyEV)> callback) {
    Player_destroy_call_backs.push_back(callback);
}
class BlockLegacy;
THook(bool,"?playerWillDestroy@BlockLegacy@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z",
      BlockLegacy *_this, Player &pl, BlockPos &blkpos, Block &bl)
{
    PlayerDestroyEV player_destroy_event = {&pl, blkpos, &bl};

    CallEvent(Player_destroy_call_backs, player_destroy_event);
    return original(_this, pl, blkpos, bl);
}


/////////////////// PlayerUseItemOn ///////////////////

vector<function<void(PlayerUseItemOnEV)>> Player_use_item_on_call_backs;
LIAPI void Event::addEventListener(function<void(PlayerUseItemOnEV)> callback) {
    Player_use_item_on_call_backs.push_back(callback);
}

THook(bool,"?useItemOn@GameMode@@UEAA_NAEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z",
      void *thi, ItemStack &a2, BlockPos a3_pos, unsigned char side, void *a5,void *a6_block)
{
    auto sp = *dAccess<ServerPlayer **, 8>(thi);
    PlayerUseItemOnEV Player_use_item_on_event = {sp, &a2, a3_pos, side};
    
    CallEvent(Player_use_item_on_call_backs, Player_use_item_on_event);
    return original(thi, a2, a3_pos, side, a5, a6_block);
}


/////////////////// MobHurted ///////////////////

vector<function<void(MobHurtedEV)>> Mob_hurted_call_backs;
LIAPI void Event::addEventListener(function<void(MobHurtedEV)> callback) {
    Mob_hurted_call_backs.push_back(callback);
}

THook(bool,"?_hurt@Mob@@MEAA_NAEBVActorDamageSource@@H_N1@Z",
      Mob *ac, ActorDamageSource &src, int damage, bool unk1_1, bool unk2_0)
{
    MobHurtedEV Mob_hurted_event = {ac, &src, damage};

    CallEvent(Mob_hurted_call_backs, Mob_hurted_event);
    return original(ac, src, damage, unk1_1, unk2_0);
}


/////////////////// PlayerUseItem ///////////////////

vector<function<void(PlayerUseItemEV)>> Player_use_item_call_backs;
LIAPI void Event::addEventListener(function<void(PlayerUseItemEV)> callback) {
    Player_use_item_call_backs.push_back(callback);
}

THook(bool, "?baseUseItem@GameMode@@QEAA_NAEAVItemStack@@@Z", void *thi, ItemStack &a2)
{
    auto sp = dAccess<ServerPlayer *, 8>(thi);
    PlayerUseItemEV player_use_item_event = {sp, &a2};

    CallEvent(Player_use_item_call_backs, player_use_item_event);
    return original(thi, a2);
}


/////////////////// MobDie ///////////////////

vector<function<void(MobDieEV)>> Mob_die_call_backs;
LIAPI void Event::addEventListener(function<void(MobDieEV)> callback) {
    Mob_die_call_backs.push_back(callback);
}

THook(bool, "?die@Mob@@UEAAXAEBVActorDamageSource@@@Z", Mob *mob, ActorDamageSource *ads)
{
    auto level = offPlayer::getLevel(mob);
    char v83;
    auto v6 =
        *(void **)(*(__int64(__fastcall **)(void *, char *))(*(uintptr_t *)ads + 64))(ads, &v83);
    auto src = SymCall("?fetchEntity@Level@@UEBAPEAVActor@@UActorUniqueID@@_N@Z", Actor *, Level *,
                       void *, bool)(level, v6, 0);
    MobDieEV mob_die_event = {mob, src};

    CallEvent(Mob_die_call_backs, mob_die_event);
    return original(mob, ads);
}


/////////////////// PreJoinEV ///////////////////

vector<function<void(PreJoinEV)>> Pre_join_call_backs;
LIAPI void Event::addEventListener(function<void(PreJoinEV)> callback) {
    Pre_join_call_backs.push_back(callback);
}
THook(void,"?_onClientAuthenticated@ServerNetworkHandler@@AEAAXAEBVNetworkIdentifier@@AEBVCertificate@@@Z",
    void *snh, NetworkIdentifier &neti, Certificate &cert)
{
    original(snh, neti, cert);
    PreJoinEV pre_join_event = {&cert};

    CallEvent(Pre_join_call_backs, pre_join_event);
}