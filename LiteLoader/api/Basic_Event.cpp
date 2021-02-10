#include <iostream>
#include <vector>
#include <functional>
#include <string>
#include <liteloader.h>
#include <api/Basic_Event.h>
#include <loader/Loader.h>
#include <api/types/helper.h>
#include <mc/OffsetHelper.h>

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