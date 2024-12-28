#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RealmEventForPlayer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnka96748;
    ::ll::UntypedStorage<8, 32> mUnka99384;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmEventForPlayer& operator=(RealmEventForPlayer const&);
    RealmEventForPlayer(RealmEventForPlayer const&);
    RealmEventForPlayer();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RealmEventForPlayer();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
