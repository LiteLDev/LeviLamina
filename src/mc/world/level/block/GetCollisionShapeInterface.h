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
    virtual ~GetCollisionShapeInterface() = default;

    virtual float getFeetAttachPosY() const = 0;

    virtual bool canDescendThroughBlock() const = 0;

    virtual float getFallDistance() const = 0;

    virtual ::ActorType getEntityTypeId() const = 0;

    virtual bool isWearingLeatherBoots() const = 0;

    virtual bool hasLightWeightFamilyTag() const = 0;

    virtual ::AABB const& getAABB() const = 0;

    virtual bool isWorldBuilder() const = 0;

    virtual bool isRiding() const = 0;

    virtual bool hasPassenger() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
