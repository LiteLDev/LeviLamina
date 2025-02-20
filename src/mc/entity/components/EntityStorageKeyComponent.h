#pragma once

#include "mc/_HeaderOutputPredefine.h"

class EntityStorageKeyComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk7b9fd1;
    ::ll::UntypedStorage<8, 32> mUnk603187;
    ::ll::UntypedStorage<1, 1>  mUnk3883e8;
    // NOLINTEND

public:
    // prevent constructor by default
    EntityStorageKeyComponent& operator=(EntityStorageKeyComponent const&);
    EntityStorageKeyComponent(EntityStorageKeyComponent const&);
    EntityStorageKeyComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::EntityStorageKeyComponent& operator=(::EntityStorageKeyComponent&&);
    // NOLINTEND
};
