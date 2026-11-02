#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ActorUniqueID {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64> rawID;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint64 getHash() const;

    MCNAPI ::std::string toString() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::ActorUniqueID const& INVALID_ID();
    // NOLINTEND
};
