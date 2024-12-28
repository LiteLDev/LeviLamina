#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

struct ActorUniqueID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64> rawID;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorUniqueID& operator=(ActorUniqueID const&);
    ActorUniqueID(ActorUniqueID const&);
    ActorUniqueID();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI uint64 getHash() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::ActorUniqueID fromUUID(::mce::UUID const& uuid);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ActorUniqueID const& INVALID_ID();
    // NOLINTEND
};
