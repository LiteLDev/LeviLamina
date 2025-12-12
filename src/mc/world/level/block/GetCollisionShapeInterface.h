#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class AABB;
// clang-format on

class GetCollisionShapeInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GetCollisionShapeInterface() = default;

    // vIndex: 1
    virtual float getFeetAttachPosY() const = 0;

    // vIndex: 2
    virtual bool canDescendThroughBlock() const = 0;

    // vIndex: 3
    virtual float getFallDistance() const = 0;

    // vIndex: 4
    virtual ::ActorType getEntityTypeId() const = 0;

    // vIndex: 5
    virtual bool isWearingLeatherBoots() const = 0;

    // vIndex: 6
    virtual bool hasLightWeightFamilyTag() const = 0;

    // vIndex: 7
    virtual ::AABB const& getAABB() const = 0;

    // vIndex: 8
    virtual bool isWorldBuilder() const = 0;

    // vIndex: 9
    virtual bool isRiding() const = 0;

    // vIndex: 10
    virtual bool hasPassenger() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
