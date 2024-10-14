#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"
#include "mc/world/level/block/GetCollisionShapeInterface.h"

class GetCollisionShapeActorProxy : public ::GetCollisionShapeInterface {
public:
    // prevent constructor by default
    GetCollisionShapeActorProxy& operator=(GetCollisionShapeActorProxy const&);
    GetCollisionShapeActorProxy(GetCollisionShapeActorProxy const&);
    GetCollisionShapeActorProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetCollisionShapeActorProxy() = default;

    // vIndex: 1
    virtual float getFeetAttachPosY() const;

    // vIndex: 2
    virtual bool canDescendThroughBlock() const;

    // vIndex: 3
    virtual float getFallDistance() const;

    // vIndex: 4
    virtual ::ActorType getEntityTypeId() const;

    // vIndex: 5
    virtual bool isWearingLeatherBoots() const;

    // vIndex: 6
    virtual bool hasLightWeightFamilyTag() const;

    // vIndex: 7
    virtual class AABB const& getAABB() const;

    // vIndex: 8
    virtual bool isWorldBuilder() const;

    // vIndex: 9
    virtual bool isRiding() const;

    // vIndex: 10
    virtual bool hasPassenger() const;

    MCAPI explicit GetCollisionShapeActorProxy(class Actor const& actor);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool canDescendThroughBlock$() const;

    MCAPI class AABB const& getAABB$() const;

    MCAPI ::ActorType getEntityTypeId$() const;

    MCAPI float getFallDistance$() const;

    MCAPI float getFeetAttachPosY$() const;

    MCAPI bool hasLightWeightFamilyTag$() const;

    MCAPI bool hasPassenger$() const;

    MCAPI bool isRiding$() const;

    MCAPI bool isWearingLeatherBoots$() const;

    MCAPI bool isWorldBuilder$() const;

    // NOLINTEND
};
