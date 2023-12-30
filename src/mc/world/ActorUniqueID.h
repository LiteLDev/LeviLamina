#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

struct ActorUniqueID {
public:
    // prevent constructor by default
    ActorUniqueID& operator=(ActorUniqueID const&);
    ActorUniqueID(ActorUniqueID const&);
    ActorUniqueID();

public:
    // NOLINTBEGIN
    // symbol: ?fromUUID@ActorUniqueID@@SA?AU1@AEBVUUID@mce@@@Z
    MCAPI static struct ActorUniqueID fromUUID(class mce::UUID const& uuid);

    // symbol: ?INVALID_ID@ActorUniqueID@@2U1@B
    MCAPI static struct ActorUniqueID const INVALID_ID;

    // NOLINTEND
};
