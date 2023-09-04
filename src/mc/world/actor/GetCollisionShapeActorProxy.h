#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorType.h"
#include "mc/world/level/block/utils/GetCollisionShapeInterface.h"

class GetCollisionShapeActorProxy : public ::GetCollisionShapeInterface {
public:
    // prevent constructor by default
    GetCollisionShapeActorProxy& operator=(GetCollisionShapeActorProxy const&) = delete;
    GetCollisionShapeActorProxy(GetCollisionShapeActorProxy const&)            = delete;
    GetCollisionShapeActorProxy()                                              = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getFeetAttachPosY@GetCollisionShapeActorProxy@@UEBAMXZ
    virtual float getFeetAttachPosY() const;

    // vIndex: 2, symbol: ?canDescendThroughBlock@GetCollisionShapeActorProxy@@UEBA_NXZ
    virtual bool canDescendThroughBlock() const;

    // vIndex: 3, symbol: ?getFallDistance@GetCollisionShapeActorProxy@@UEBAMXZ
    virtual float getFallDistance() const;

    // vIndex: 4, symbol: ?getEntityTypeId@GetCollisionShapeActorProxy@@UEBA?AW4ActorType@@XZ
    virtual ::ActorType getEntityTypeId() const;

    // vIndex: 5, symbol: ?isWearingLeatherBoots@GetCollisionShapeActorProxy@@UEBA_NXZ
    virtual bool isWearingLeatherBoots() const;

    // vIndex: 6, symbol: ?hasLightWeightFamilyTag@GetCollisionShapeActorProxy@@UEBA_NXZ
    virtual bool hasLightWeightFamilyTag() const;

    // vIndex: 7, symbol: ?getAABB@GetCollisionShapeActorProxy@@UEBAAEBVAABB@@XZ
    virtual class AABB const& getAABB() const;

    // vIndex: 8, symbol: ?isWorldBuilder@GetCollisionShapeActorProxy@@UEBA_NXZ
    virtual bool isWorldBuilder() const;

    // vIndex: 9, symbol: ?isRiding@GetCollisionShapeActorProxy@@UEBA_NXZ
    virtual bool isRiding() const;

    // vIndex: 10, symbol: ?hasPassenger@GetCollisionShapeActorProxy@@UEBA_NXZ
    virtual bool hasPassenger() const;

    // symbol: ??0GetCollisionShapeActorProxy@@QEAA@AEBUIActorMovementProxy@@@Z
    MCAPI GetCollisionShapeActorProxy(struct IActorMovementProxy const&);

    // NOLINTEND
};
