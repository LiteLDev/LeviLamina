#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace br::spawn {

struct EntityType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4f2ddb;
    ::ll::UntypedStorage<8, 48> mUnkddc014;
    ::ll::UntypedStorage<1, 1>  mUnkb3681d;
    ::ll::UntypedStorage<1, 1>  mUnkadf18f;
    ::ll::UntypedStorage<4, 4>  mUnk278ed2;
    ::ll::UntypedStorage<4, 4>  mUnk51fd0c;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityType& operator=(EntityType const&);
    EntityType(EntityType const&);
    EntityType();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~EntityType();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace br::spawn
