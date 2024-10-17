#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RealmEventForPlayer {
public:
    // prevent constructor by default
    RealmEventForPlayer& operator=(RealmEventForPlayer const&);
    RealmEventForPlayer(RealmEventForPlayer const&);
    RealmEventForPlayer();

public:
    // NOLINTBEGIN
    MCAPI ~RealmEventForPlayer();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
