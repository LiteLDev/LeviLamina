#pragma once

#include "mc/_HeaderOutputPredefine.h"

class VersionedActorDamageCause {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka039ce;
    ::ll::UntypedStorage<4, 4>  mUnkc9eed6;
    ::ll::UntypedStorage<8, 40> mUnkd1aeb7;
    ::ll::UntypedStorage<1, 2>  mUnk1d165a;
    // NOLINTEND

public:
    // prevent constructor by default
    VersionedActorDamageCause& operator=(VersionedActorDamageCause const&);
    VersionedActorDamageCause(VersionedActorDamageCause const&);
    VersionedActorDamageCause();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~VersionedActorDamageCause();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
