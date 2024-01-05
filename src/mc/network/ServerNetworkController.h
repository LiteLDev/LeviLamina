#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/AbilitiesIndex.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ServerNetworkController {
public:
    // prevent constructor by default
    ServerNetworkController& operator=(ServerNetworkController const&);
    ServerNetworkController(ServerNetworkController const&);
    ServerNetworkController();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ServerNetworkController@@UEAA@XZ
    virtual ~ServerNetworkController() = default;

    // vIndex: 1, symbol: ?isDedicatedServer@ServerNetworkController@@UEBA_NXZ
    virtual bool isDedicatedServer() const;

    // vIndex: 2, symbol: ?isHost@ServerNetworkController@@UEBA_NAEBVUUID@mce@@@Z
    virtual bool isHost(class mce::UUID const& playerID) const;

    // vIndex: 3, symbol: ?canChangePermission@ServerNetworkController@@UEBA_NAEBVUUID@mce@@AEBVServerPlayer@@@Z
    virtual bool canChangePermission(class mce::UUID const& playerId, class ServerPlayer const& player) const;

    // symbol:
    // ??0ServerNetworkController@@QEAA@_NAEBVUUID@mce@@V?$function@$$A6A_NAEBVServerPlayer@@W4AbilitiesIndex@@@Z@std@@@Z
    MCAPI
    ServerNetworkController(bool isDedicatedServer, class mce::UUID const&, std::function<bool(class ServerPlayer const&, ::AbilitiesIndex)>);

    // NOLINTEND
};
