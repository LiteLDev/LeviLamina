#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/projectile/Fireball.h"

class LargeFireball : public ::Fireball {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7333d2;
    // NOLINTEND

public:
    // prevent constructor by default
    LargeFireball& operator=(LargeFireball const&);
    LargeFireball(LargeFireball const&);
    LargeFireball();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual ~LargeFireball() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
