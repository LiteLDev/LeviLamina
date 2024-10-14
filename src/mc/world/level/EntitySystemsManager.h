#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/SubClientId.h"
#include "mc/deps/game_refs/StackRefResult.h"

class EntitySystemsManager {
public:
    // prevent constructor by default
    EntitySystemsManager& operator=(EntitySystemsManager const&);
    EntitySystemsManager(EntitySystemsManager const&);
    EntitySystemsManager();

public:
    // NOLINTBEGIN
    MCAPI EntitySystemsManager(
        bool                                                             isClientSide,
        ::SubClientId                                                    subClientId,
        gsl::not_null<class StackRefResult<class EntityRegistry>> const& entityRegistry,
        gsl::not_null<class StackRefResult<class PauseManager>> const&   pauseManager
    );

    MCAPI class EntitySystems& getEntitySystems();

    MCAPI void tickEntitySystems();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
