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
    // vIndex: 0
    virtual ~IServerNetworkController() = default;

    // vIndex: 1
    virtual bool isDedicatedServer() const = 0;

    // vIndex: 2
    virtual bool isHost(::mce::UUID const&) const = 0;

    // vIndex: 3
    virtual bool canChangePermission(::mce::UUID const&, ::ServerPlayer const&) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
