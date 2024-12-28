#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/Mob.h"

class DebugInfoMob : public ::Mob {
public:
    // prevent constructor by default
    DebugInfoMob& operator=(DebugInfoMob const&);
    DebugInfoMob(DebugInfoMob const&);
    DebugInfoMob();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 8
    virtual ~DebugInfoMob() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
