#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/vanilla_components/AABBShapeComponent.h"
#include "mc/deps/vanilla_components/StateVectorComponent.h"
#include "mc/entity/components/ActorRotationComponent.h"
#include "mc/entity/components/ActorWalkAnimationComponent.h"

// auto generated forward declare list
// clang-format off
struct AABBShapeComponent;
struct ActorRotationComponent;
struct ActorWalkAnimationComponent;
struct StateVectorComponent;
// clang-format on

struct BuiltInActorComponents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::StateVectorComponent*>> mStateVectorComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::AABBShapeComponent*>> mAABBShapeComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ActorRotationComponent*>> mActorRotationComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ActorWalkAnimationComponent*>> mWalkAnimationComponent;
    // NOLINTEND

};
