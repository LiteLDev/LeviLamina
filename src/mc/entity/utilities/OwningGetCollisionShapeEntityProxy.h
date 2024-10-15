#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"

class OwningGetCollisionShapeEntityProxy {
public:
    // prevent constructor by default
    OwningGetCollisionShapeEntityProxy& operator=(OwningGetCollisionShapeEntityProxy const&);
    OwningGetCollisionShapeEntityProxy(OwningGetCollisionShapeEntityProxy const&);
    OwningGetCollisionShapeEntityProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~OwningGetCollisionShapeEntityProxy() = default;

    // vIndex: 1
    virtual void __unk_vfn_1();

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

    MCAPI explicit OwningGetCollisionShapeEntityProxy(class EntityContext const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class EntityContext const&);

    MCAPI bool canDescendThroughBlock$() const;

    MCAPI class AABB const& getAABB$() const;

    MCAPI ::ActorType getEntityTypeId$() const;

    MCAPI float getFallDistance$() const;

    MCAPI bool hasLightWeightFamilyTag$() const;

    MCAPI bool hasPassenger$() const;

    MCAPI bool isRiding$() const;

    MCAPI bool isWearingLeatherBoots$() const;

    MCAPI bool isWorldBuilder$() const;

    // NOLINTEND
};
