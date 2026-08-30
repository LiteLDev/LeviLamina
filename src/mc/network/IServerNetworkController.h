#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerPlayer;
// clang-format on

struct IServerNetworkController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IServerNetworkController();

    virtual bool isDedicatedServer() const = 0;

    virtual bool canChangePermission(::ServerPlayer const& player) const = 0;
    // NOLINTEND
};
