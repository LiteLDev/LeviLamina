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
    MCNAPI float $getFeetAttachPosY() const;

    MCNAPI bool $canDescendThroughBlock() const;

    MCNAPI float $getFallDistance() const;

    MCNAPI ::ActorType $getEntityTypeId() const;

    MCNAPI bool $isWearingLeatherBoots() const;

    MCNAPI bool $canStandOnPowderSnow() const;

    MCNAPI bool $isWorldBuilder() const;

    MCNAPI ::AABB const& $getAABB() const;

    MCNAPI bool $isRiding() const;

    MCNAPI bool $hasPassenger() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
