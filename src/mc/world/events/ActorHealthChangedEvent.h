#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class WeakEntityRef;
// clang-format on

struct ActorHealthChangedEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::WeakEntityRef> mEntity;
    ::ll::TypedStorage<4, 4, float>            mOldValue;
    ::ll::TypedStorage<4, 4, float>            mNewValue;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ActorHealthChangedEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
