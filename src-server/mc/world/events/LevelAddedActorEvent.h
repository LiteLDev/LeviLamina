#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Level;
// clang-format on

struct LevelAddedActorEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Level>> mLevel;
    ::ll::TypedStorage<8, 24, ::WeakRef<::EntityContext>>             mActor;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~LevelAddedActorEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
