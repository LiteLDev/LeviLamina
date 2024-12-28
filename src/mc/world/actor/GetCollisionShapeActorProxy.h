#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/block/GetCollisionShapeInterface.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Actor;
// clang-format on

class GetCollisionShapeActorProxy : public ::GetCollisionShapeInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd7fbd7;
    // NOLINTEND

public:
    // prevent constructor by default
    GetCollisionShapeActorProxy& operator=(GetCollisionShapeActorProxy const&);
    GetCollisionShapeActorProxy(GetCollisionShapeActorProxy const&);
    GetCollisionShapeActorProxy();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual float getFeetAttachPosY() const /*override*/;

    // vIndex: 2
    virtual bool canDescendThroughBlock() const /*override*/;

    // vIndex: 3
    virtual float getFallDistance() const /*override*/;

    // vIndex: 4
    virtual ::ActorType getEntityTypeId() const /*override*/;

    // vIndex: 5
    virtual bool isWearingLeatherBoots() const /*override*/;

    // vIndex: 6
    virtual bool hasLightWeightFamilyTag() const /*override*/;

    // vIndex: 8
    virtual bool isWorldBuilder() const /*override*/;

    // vIndex: 7
    virtual ::AABB const& getAABB() const /*override*/;

    // vIndex: 9
    virtual bool isRiding() const /*override*/;

    // vIndex: 10
    virtual bool hasPassenger() const /*override*/;

    // vIndex: 0
    virtual ~GetCollisionShapeActorProxy() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit GetCollisionShapeActorProxy(::Actor const& actor);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& actor);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI float $getFeetAttachPosY() const;

    MCAPI bool $canDescendThroughBlock() const;

    MCAPI float $getFallDistance() const;

    MCAPI ::ActorType $getEntityTypeId() const;

    MCAPI bool $isWearingLeatherBoots() const;

    MCAPI bool $hasLightWeightFamilyTag() const;

    MCAPI bool $isWorldBuilder() const;

    MCAPI ::AABB const& $getAABB() const;

    MCAPI bool $isRiding() const;

    MCAPI bool $hasPassenger() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
