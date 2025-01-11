#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/game_refs/StackRefResult.h"

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
    ::ll::UntypedStorage<8, 8>  mUnk99130d;
    ::ll::UntypedStorage<1, 1>  mUnk57f4a3;
    ::ll::UntypedStorage<1, 1>  mUnk28ba01;
    ::ll::UntypedStorage<8, 16> mUnk4e7385;
    ::ll::UntypedStorage<8, 16> mUnkce2bdb;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemsManager& operator=(EntitySystemsManager const&);
    EntitySystemsManager(EntitySystemsManager const&);
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
