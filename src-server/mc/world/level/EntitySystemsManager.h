#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/game_refs/WeakRef.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
class EntitySystems;
class PauseManager;
// clang-format on

class EntitySystemsManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::EntitySystems>> mEntitySystems;
    ::ll::TypedStorage<1, 1, bool const> mIsClientSide;
    ::ll::TypedStorage<1, 1, ::SubClientId const> mSubClientId;
    ::ll::TypedStorage<8, 16, ::WeakRef<::EntityRegistry>> mEntityRegistry;
    ::ll::TypedStorage<8, 16, ::WeakRef<::PauseManager>> mPauseManager;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void tickEntitySystems();
    // NOLINTEND

};
