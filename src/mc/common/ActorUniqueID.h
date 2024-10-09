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
    MCAPI uint64 getHash() const;

    MCAPI static struct ActorUniqueID fromUUID(class mce::UUID const& uuid);

    MCAPI static struct ActorUniqueID const INVALID_ID;

    // NOLINTEND
};
