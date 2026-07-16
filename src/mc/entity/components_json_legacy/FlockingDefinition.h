#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class FlockingComponent;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class FlockingDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>  mInWater;
    ::ll::TypedStorage<1, 1, bool>  mMatchVariant;
    ::ll::TypedStorage<1, 1, bool>  mUseCenterOfMass;
    ::ll::TypedStorage<4, 4, int>   mLowFlockLimit;
    ::ll::TypedStorage<4, 4, int>   mHighFlockLimit;
    ::ll::TypedStorage<4, 4, float> mGoalWeight;
    ::ll::TypedStorage<4, 4, float> mLonerChance;
    ::ll::TypedStorage<4, 4, float> mInfluenceRadius;
    ::ll::TypedStorage<4, 4, float> mBreachInfluence;
    ::ll::TypedStorage<4, 4, float> mSeparationWeight;
    ::ll::TypedStorage<4, 4, float> mSeparationThreshold;
    ::ll::TypedStorage<4, 4, float> mCohesionWeight;
    ::ll::TypedStorage<4, 4, float> mCohesionThreshold;
    ::ll::TypedStorage<4, 4, float> mInnerCohesionThres;
    ::ll::TypedStorage<4, 4, float> mMinHeight;
    ::ll::TypedStorage<4, 4, float> mMaxHeight;
    ::ll::TypedStorage<4, 4, float> mBlockDistance;
    ::ll::TypedStorage<4, 4, float> mBlockWeight;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void initialize(::EntityContext& entity, ::FlockingComponent& component) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::FlockingDefinition>>& root
    );
    // NOLINTEND
};
