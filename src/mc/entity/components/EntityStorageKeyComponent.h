#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityStorageKeyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mStorageKey;
    ::ll::TypedStorage<8, 32, ::std::string> mLastSerializedActorState;
    ::ll::TypedStorage<1, 1, bool>           mDirtyFromNonSerializedState;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityStorageKeyComponent& operator=(EntityStorageKeyComponent const&);
    EntityStorageKeyComponent(EntityStorageKeyComponent const&);
    EntityStorageKeyComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::EntityStorageKeyComponent& operator=(::EntityStorageKeyComponent&&);
    // NOLINTEND
};
