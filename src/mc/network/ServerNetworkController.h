#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class ServerNetworkController {
public:
    // prevent constructor by default
    ServerNetworkController& operator=(ServerNetworkController const&) = delete;
    ServerNetworkController(ServerNetworkController const&)            = delete;
    ServerNetworkController()                                          = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?isDedicatedServer@ServerNetworkController@@UEBA_NXZ
    virtual bool isDedicatedServer() const;

    // vIndex: 2, symbol: ?isHost@ServerNetworkController@@UEBA_NAEBVUUID@mce@@@Z
    virtual bool isHost(class mce::UUID const&) const;

    // vIndex: 3, symbol: ?canChangePermission@ServerNetworkController@@UEBA_NAEBVUUID@mce@@AEBVServerPlayer@@@Z
    virtual bool canChangePermission(class mce::UUID const&, class ServerPlayer const&) const;

    // NOLINTEND
};
