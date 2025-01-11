#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorEventCoordinator;
// clang-format on

class VanillaActorEventListenerManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk8753be;
    ::ll::UntypedStorage<8, 8> mUnkaa8696;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaActorEventListenerManager& operator=(VanillaActorEventListenerManager const&);
    VanillaActorEventListenerManager(VanillaActorEventListenerManager const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VanillaActorEventListenerManager();

    MCAPI void registerWithActorEventCoordinator(::ActorEventCoordinator& actorEventCoordinator);

    MCAPI ~VanillaActorEventListenerManager();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
