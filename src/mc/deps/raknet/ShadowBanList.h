#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/raknet/RakPeer.h"

// auto generated forward declare list
// clang-format off
namespace RakNet { struct SystemAddress; }
// clang-format on

namespace RakNet {

class ShadowBanList {
public:
    // prevent constructor by default
    ShadowBanList& operator=(ShadowBanList const&);
    ShadowBanList(ShadowBanList const&);
    ShadowBanList();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ShadowBanList@RakNet@@QEAA@V?$function@$$A6AXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z@std@@V?$duration@_JU?$ratio@$00$00@std@@@chrono@3@1@Z
    MCAPI ShadowBanList(std::function<void(std::string const&)>, std::chrono::seconds, std::chrono::seconds);

    // symbol: ?addBan@ShadowBanList@RakNet@@QEAAGAEBUSystemAddress@2@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@Z
    MCAPI ushort addBan(struct RakNet::SystemAddress const&, std::chrono::seconds);

    // symbol:
    // ?shouldDisconnectConnection@ShadowBanList@RakNet@@QEAAPEAURemoteSystemStruct@RakPeer@2@USystemAddress@2@V?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@V?$span@PEAURemoteSystemStruct@RakPeer@RakNet@@$0?0@gsl@@@Z
    MCAPI struct RakNet::RakPeer::RemoteSystemStruct*
        shouldDisconnectConnection(struct RakNet::SystemAddress, std::chrono::seconds, gsl::span<struct RakNet::RakPeer::RemoteSystemStruct*>);

    // symbol: ?tryUnban@ShadowBanList@RakNet@@QEAA_NAEBUSystemAddress@2@@Z
    MCAPI bool tryUnban(struct RakNet::SystemAddress const&);

    // symbol: ?updateBans@ShadowBanList@RakNet@@QEAA_KV?$duration@_JU?$ratio@$00$00@std@@@chrono@std@@@Z
    MCAPI uint64 updateBans(std::chrono::seconds);

    // symbol: ??1ShadowBanList@RakNet@@QEAA@XZ
    MCAPI ~ShadowBanList();

    // NOLINTEND
};

}; // namespace RakNet
