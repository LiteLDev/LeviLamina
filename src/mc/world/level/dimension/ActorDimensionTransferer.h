#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/dimension/IActorDimensionTransferer.h"

class ActorDimensionTransferer : public ::IActorDimensionTransferer {
public:
    // prevent constructor by default
    ActorDimensionTransferer& operator=(ActorDimensionTransferer const&);
    ActorDimensionTransferer(ActorDimensionTransferer const&);
    ActorDimensionTransferer();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ActorDimensionTransferer@@UEAA@XZ
    virtual ~ActorDimensionTransferer() = default;

    // vIndex: 1, symbol: ?setupActorForTransfer@ActorDimensionTransferer@@UEAAXAEAVActor@@@Z
    virtual void setupActorForTransfer(class Actor&);

    // vIndex: 2, symbol:
    // ?findTargetPositionAndSetPosition@ActorDimensionTransferer@@UEAA?AVVec3@@AEAVActor@@V?$AutomaticID@VDimension@@H@@1AEBVIDimension@@AEBVPortalForcer@@AEBV?$optional@VVec3@@@std@@@Z
    virtual class Vec3
    findTargetPositionAndSetPosition(class Actor&, DimensionType, DimensionType, class IDimension const&, class PortalForcer const&, std::optional<class Vec3> const&);

    // vIndex: 3, symbol:
    // ?transferActor@ActorDimensionTransferer@@UEAAXAEAVActor@@AEAVDimension@@AEBVVec3@@AEBV?$optional@VVec3@@@std@@@Z
    virtual void transferActor(class Actor&, class Dimension&, class Vec3 const&, std::optional<class Vec3> const&);

    // symbol:
    // ??0ActorDimensionTransferer@@QEAA@V?$unique_ptr@VIActorDimensionTransferProxy@@U?$default_delete@VIActorDimensionTransferProxy@@@std@@@std@@AEBV?$not_null@V?$StackRefResult@VActorManager@@@@@gsl@@@Z
    MCAPI
    ActorDimensionTransferer(std::unique_ptr<class IActorDimensionTransferProxy>, gsl::not_null<class StackRefResult<class ActorManager>> const&);

    // NOLINTEND
};
