#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ServerPlayerMovementComponent;
struct TickingSystemWithInfo;
// clang-format on

struct PlayerTickSystem {
public:
    // PlayerTickSystem inner types define
    using TickCallback = ::std::function<void(::ServerPlayerMovementComponent const&)>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::TickingSystemWithInfo create(bool isCatchup);
    // NOLINTEND
};
