#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerPlayer;
namespace mce { class UUID; }
// clang-format on

struct IServerNetworkController {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IServerNetworkController() = default;

    virtual bool isDedicatedServer() const = 0;

    virtual bool isHost(::mce::UUID const&) const = 0;

    virtual bool canChangePermission(::mce::UUID const&, ::ServerPlayer const&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
