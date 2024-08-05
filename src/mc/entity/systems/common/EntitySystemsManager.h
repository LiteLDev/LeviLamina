#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/enums/SubClientId.h"

class EntitySystemsManager {
public:
    // prevent constructor by default
    EntitySystemsManager& operator=(EntitySystemsManager const&);
    EntitySystemsManager(EntitySystemsManager const&);
    EntitySystemsManager();

public:
    // NOLINTBEGIN
    MCAPI
    EntitySystemsManager(bool, ::SubClientId, gsl::not_null<class StackRefResult<class EntityRegistry>> const&, gsl::not_null<class StackRefResult<class PauseManager>> const&);

    MCAPI class EntitySystems& getEntitySystems();

    MCAPI void tickEntitySystems();

    // NOLINTEND
};
