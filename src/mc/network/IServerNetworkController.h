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
    virtual ~IServerNetworkController() = default;

    virtual bool isDedicatedServer() const = 0;

    virtual bool canChangePermission(::ServerPlayer const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
