#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/block/GetCollisionShapeInterface.h"

// auto generated forward declare list
// clang-format off
class AABB;
// clang-format on

class GetCollisionShapeEntityProxy : public ::GetCollisionShapeInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnkeeb197;
    ::ll::UntypedStorage<8, 8> mUnka19660;
    // NOLINTEND

public:
    // prevent constructor by default
    GetCollisionShapeEntityProxy& operator=(GetCollisionShapeEntityProxy const&);
    GetCollisionShapeEntityProxy(GetCollisionShapeEntityProxy const&);
    GetCollisionShapeEntityProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual float getFeetAttachPosY() const /*override*/;

    virtual bool canDescendThroughBlock() const /*override*/;

    virtual float getFallDistance() const /*override*/;

    virtual ::ActorType getEntityTypeId() const /*override*/;

    virtual bool isWearingLeatherBoots() const /*override*/;

    virtual bool canStandOnPowderSnow() const /*override*/;

    virtual bool isWorldBuilder() const /*override*/;

    virtual ::AABB const& getAABB() const /*override*/;

    virtual bool isRiding() const /*override*/;

    virtual bool hasPassenger() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getFeetAttachPosY() const;

    MCAPI bool $canDescendThroughBlock() const;

    MCAPI float $getFallDistance() const;

    MCAPI ::ActorType $getEntityTypeId() const;

    MCAPI bool $isWearingLeatherBoots() const;

    MCAPI bool $canStandOnPowderSnow() const;

    MCAPI bool $isWorldBuilder() const;

    MCAPI ::AABB const& $getAABB() const;

    MCAPI bool $isRiding() const;

    MCAPI bool $hasPassenger() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
