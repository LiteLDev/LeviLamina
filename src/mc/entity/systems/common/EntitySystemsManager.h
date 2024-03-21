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
    // symbol:
    // ??0EntitySystemsManager@@QEAA@_NW4SubClientId@@AEBV?$not_null@V?$StackRefResult@VEntityRegistry@@@@@gsl@@AEBV?$not_null@V?$StackRefResult@VPauseManager@@@@@3@@Z
    MCAPI
    EntitySystemsManager(bool, ::SubClientId, gsl::not_null<class StackRefResult<class EntityRegistry>> const&, gsl::not_null<class StackRefResult<class PauseManager>> const&);

    // symbol: ?getEntitySystems@EntitySystemsManager@@QEAAAEAVEntitySystems@@XZ
    MCAPI class EntitySystems& getEntitySystems();

    // symbol: ?tickEntitySystems@EntitySystemsManager@@QEAAXXZ
    MCAPI void tickEntitySystems();

    // NOLINTEND
};
