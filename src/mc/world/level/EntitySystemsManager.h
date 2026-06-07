#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/game_refs/StackRefResult.h"
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
    ::ll::TypedStorage<1, 1, bool const>                         mIsClientSide;
    ::ll::TypedStorage<1, 1, ::SubClientId const>                mSubClientId;
    ::ll::TypedStorage<8, 16, ::WeakRef<::EntityRegistry>>       mEntityRegistry;
    ::ll::TypedStorage<8, 16, ::WeakRef<::PauseManager>>         mPauseManager;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemsManager();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EntitySystemsManager(
        bool                                                       isClientSide,
        ::SubClientId                                              subClientId,
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry,
        ::gsl::not_null<::StackRefResult<::PauseManager>> const&   pauseManager
    );

    MCFOLD ::EntitySystems& getEntitySystems();

    MCAPI void tickEntitySystems();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        bool                                                       isClientSide,
        ::SubClientId                                              subClientId,
        ::gsl::not_null<::StackRefResult<::EntityRegistry>> const& entityRegistry,
        ::gsl::not_null<::StackRefResult<::PauseManager>> const&   pauseManager
    );
    // NOLINTEND
};
