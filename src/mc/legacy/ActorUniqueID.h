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
    MCAPI uint64 getHash() const;

#ifdef LL_PLAT_C
    MCFOLD ::std::string toString() const;
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ActorUniqueID const& INVALID_ID();
    // NOLINTEND
};
