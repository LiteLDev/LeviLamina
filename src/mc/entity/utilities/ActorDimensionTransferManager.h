#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/world/AutomaticID.h"

class ActorDimensionTransferManager {
public:
    // prevent constructor by default
    ActorDimensionTransferManager& operator=(ActorDimensionTransferManager const&);
    ActorDimensionTransferManager(ActorDimensionTransferManager const&);
    ActorDimensionTransferManager();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0ActorDimensionTransferManager@@QEAA@V?$unique_ptr@VIActorDimensionTransferer@@U?$default_delete@VIActorDimensionTransferer@@@std@@@std@@AEBV?$not_null@V?$StackRefResult@VDimensionManager@@@@@gsl@@AEBV?$not_null@V?$StackRefResult@VPortalForcer@@@@@4@@Z
    MCAPI
    ActorDimensionTransferManager(std::unique_ptr<class IActorDimensionTransferer>, gsl::not_null<class StackRefResult<class DimensionManager>> const&, gsl::not_null<class StackRefResult<class PortalForcer>> const&);

    // symbol:
    // ?actorChangeDimension@ActorDimensionTransferManager@@QEAAXAEAVActor@@V?$AutomaticID@VDimension@@H@@AEBV?$optional@VVec3@@@std@@@Z
    MCAPI void actorChangeDimension(class Actor&, DimensionType, std::optional<class Vec3> const&);

    // symbol: ?canChangeDimension@ActorDimensionTransferManager@@QEAA_NAEBVActor@@V?$AutomaticID@VDimension@@H@@@Z
    MCAPI bool canChangeDimension(class Actor const&, DimensionType);

    // symbol: ??1ActorDimensionTransferManager@@QEAA@XZ
    MCAPI ~ActorDimensionTransferManager();

    // NOLINTEND
};
