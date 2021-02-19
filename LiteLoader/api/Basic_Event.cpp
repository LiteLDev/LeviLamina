#include <iostream>
#include <vector>
#include <functional>
#include <string>
#include <liteloader.h>
#include <api/Basic_Event.h>
#include <lbpch.h>
#include <api/types/helper.h>
#include <mc/OffsetHelper.h>
#include <mc/Player.h>
#include <mc/Command.h>
#include <mc/mass.h>
class ServerPlayer;
class NetworkIdentifier;
vector<function<void(JoinEV)>> JoinCallBacks;
LIAPI void Event::addEventListener(function<void(JoinEV)> callback) {
	JoinCallBacks.push_back(callback);
}
THook(void, "?sendLoginMessageLocal@ServerNetworkHandler@@QEAAXAEBVNetworkIdentifier@@AEBVConnectionRequest@@AEAVServerPlayer@@@Z",
    void* ServerNetworkHandler_this, NetworkIdentifier* Ni, void* ConnectionRequest, ServerPlayer* sp) {
    string ip = liteloader::getIP(*Ni);
    xuid_t xuid = atoll(SymCall("?getXuid@ExtendedCertificate@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCertificate@@@Z", string, void*)(offPlayer::getCert((Player*)sp)).c_str());
    JoinEV JoinEV = { sp, ip, xuid };
    for (size_t count = 0; count < JoinCallBacks.size(); count++) {
        JoinCallBacks[count](JoinEV);
    }
    return original(ServerNetworkHandler_this, Ni, ConnectionRequest, sp);
}

class DisconnectPacket;
class ServerNetworkHandler;
vector<function<void(LeftEV)>> LeftCallBacks;
LIAPI void Event::addEventListener(function<void(LeftEV)> callback) {
    LeftCallBacks.push_back(callback);
}
THook(void, "?_onPlayerLeft@ServerNetworkHandler@@AEAAXPEAVServerPlayer@@_N@Z",
    ServerNetworkHandler* _this, ServerPlayer* sp, bool a3) {
    xuid_t xuid = atoll(SymCall("?getXuid@ExtendedCertificate@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCertificate@@@Z", string, void*)(offPlayer::getCert((Player*)sp)).c_str());
    LeftEV LeftEV = { sp,  xuid };
    for (size_t count = 0; count < LeftCallBacks.size(); count++) {
        LeftCallBacks[count](LeftEV);
    }
    return original(_this, sp,a3);
}

vector<function<void(ChatEV)>> ChatCallBacks;
LIAPI void Event::addEventListener(function<void(ChatEV)> callback) {
    ChatCallBacks.push_back(callback);
}
THook(void, "?_displayGameMessage@ServerNetworkHandler@@AEAAXAEBVPlayer@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z", void* snh, ServerPlayer* sp, string* msg) {
    ChatEV ChatEV = { sp,  *msg };
    for (size_t count = 0; count < ChatCallBacks.size(); count++) {
        ChatCallBacks[count](ChatEV);
    }
    original(snh, sp, msg);
}

class ChangeDimensionRequest;
class Level;

vector<function<void(ChangeDimEV)>> ChangeDimCallBacks;
LIAPI void Event::addEventListener(function<void(ChangeDimEV)> callback) {
    ChangeDimCallBacks.push_back(callback);
}
THook(bool, "?_playerChangeDimension@Level@@AEAA_NPEAVPlayer@@AEAVChangeDimensionRequest@@@Z", Level* _this, Player* _this_sp, ChangeDimensionRequest* cdimreq) {
    ChangeDimEV CDimEV;
    CDimEV.Player = _this_sp;
    bool ret = original(_this, _this_sp, cdimreq);
    for (size_t count = 0; count < ChangeDimCallBacks.size(); count++) {
        ChangeDimCallBacks[count](CDimEV);
    }
    return ret;
}

Player* MakeSP(CommandOrigin& ori) {
    if (ori.getOriginType() == OriginType::Player) {
        return (Player*)ori.getEntity();
    }
    return 0;
}

vector<function<bool(PlayerUseCmdEV)>> PlayerUseCmdCallBacks;
LIAPI void Event::addEventListener(function<bool(PlayerUseCmdEV)> callback) {
    PlayerUseCmdCallBacks.push_back(callback);
}
THook(bool,"?executeCommand@MinecraftCommands@@QEBA?AUMCRESULT@@V?$shared_ptr@VCommandContext@@@std@@_N@Z",
	MinecraftCommands* _this, unsigned int* a2, std::shared_ptr<CommandContext> x, char a4) {
    
	Player* sp = MakeSP(x->getOrigin());
    bool result = original(_this, a2, x, a4);
	if (sp) {
        string cmd = x->getCmd();
        if (cmd.at(0) == '/') {
            cmd = cmd.substr(1, cmd.size() - 1);
        }
        PlayerUseCmdEV PlayerUseCmdEV = { sp,cmd,result};
        for (size_t count = 0; count < PlayerUseCmdCallBacks.size(); count++) {
            bool ret = PlayerUseCmdCallBacks[count](PlayerUseCmdEV);
            if (ret)
                return true;
        }
	}
    return result;
}
class BaseCommandBlock;
class BlockSource;

vector<function<bool(CmdBlockExeEV)>> CmdBlockExeEVCallBacks;
LIAPI void Event::addEventListener(function<bool(CmdBlockExeEV)> callback) {
    CmdBlockExeEVCallBacks.push_back(callback);
}
THook(bool, "?_performCommand@BaseCommandBlock@@AEAA_NAEAVBlockSource@@AEBVCommandOrigin@@AEA_N@Z",
    BaseCommandBlock* _this, BlockSource* a2, CommandOrigin* a3, bool* a4) {
    CmdBlockExeEV ev = { offBaseCommandBlock::getCMD(_this),offBaseCommandBlock::getPos(_this) };
    for (size_t count = 0; count < CmdBlockExeEVCallBacks.size(); count++) {
        bool ret = CmdBlockExeEVCallBacks[count](ev);
        if (ret)
            return true;
    }
    return original(_this, a2, a3, a4);
}


vector<function<void(PlayerDeathEV)>> PlayerDeathCallBacks;
LIAPI void Event::addEventListener(function<void(PlayerDeathEV)> callback) {
    PlayerDeathCallBacks.push_back(callback);
}

THook(void*, "?die@Player@@UEAAXAEBVActorDamageSource@@@Z", ServerPlayer& thi, void* src) {
    PlayerDeathEV playerDeathEv;
    playerDeathEv.Player = &thi;
    for (size_t count = 0; count < PlayerDeathCallBacks.size(); count++) {
        PlayerDeathCallBacks[count](playerDeathEv);
    }
    return original(thi, src);
}

/*
vector<function<void(PlayerDestroyEv)>> PlayerDestroyCallBacks;
LIAPI void Event::addEventListener(function<void(PlayerDestroyEv)> callback) {
    PlayerDestroyCallBacks.push_back(callback);
}
class BlockLegacy;
THook(bool, "?playerWillDestroy@BlockLegacy@@UEBA_NAEAVPlayer@@AEBVBlockPos@@AEBVBlock@@@Z",
    BlockLegacy* _this, Player& pl, BlockPos& blkpos, Block& bl) {
    PlayerDestroyEv PlayerDestroyEv;
    PlayerDestroyEv.Player = &pl;
    PlayerDestroyEv.blkpos = blkpos;
    PlayerDestroyEv.bl = &bl;
    for (size_t count = 0; count < PlayerDestroyCallBacks.size(); count++) {
        PlayerDestroyCallBacks[count](PlayerDestroyEv);
    }
    return original(_this,pl,blkpos,bl);
}


vector<function<void(PlayerUseItemOnEv)>> PlayerUseItemOnCallBacks;
LIAPI void Event::addEventListener(function<void(PlayerUseItemOnEv)> callback) {
    PlayerUseItemOnCallBacks.push_back(callback);
}

THook(bool, "?useItemOn@GameMode@@UEAA_NAEAVItemStack@@AEBVBlockPos@@EAEBVVec3@@PEBVBlock@@@Z", 
    void* thi, ItemStack& a2, BlockPos a3_pos, unsigned char side, void* a5, void* a6_block) {
    auto sp = *dAccess<ServerPlayer**, 8>(thi);
    PlayerUseItemOnEv PlayerUseItemOnEv = { sp,  &a2 , a3_pos, side };
    PlayerUseItemOnEv.Player = sp;
    PlayerUseItemOnEv.blkpos = a3_pos;
    PlayerUseItemOnEv.ItemStack = &a2;
    PlayerUseItemOnEv.side = side;
    for (size_t count = 0; count < PlayerUseItemOnCallBacks.size(); count++) {
        PlayerUseItemOnCallBacks[count](PlayerUseItemOnEv);
    }
     return original(thi, a2, a3_pos, side, a5, a6_block);
}


vector<function<void(MobHurtedEv)>> MobHurtedCallBacks;
LIAPI void Event::addEventListener(function<void(MobHurtedEv)> callback) {
    MobHurtedCallBacks.push_back(callback);
}

THook(bool, "?_hurt@Mob@@MEAA_NAEBVActorDamageSource@@H_N1@Z", Mob* ac, ActorDamageSource& src, int damage, bool unk1_1, bool unk2_0) {
    MobHurtedEv MobHurtedEv;
    MobHurtedEv.ActorDamageSource = &src;
    MobHurtedEv.Damage = damage;
    MobHurtedEv.Mob = ac;
    for (size_t count = 0; count < MobHurtedCallBacks.size(); count++) {
        MobHurtedCallBacks[count](MobHurtedEv);
    }
    return original(ac, src, damage, unk1_1, unk2_0);
}
*/