#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AABBShapeComponent;
struct ActorRotationComponent;
struct StateVectorComponent;
// clang-format on

struct BuiltInActorComponents {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::StateVectorComponent*>>   mStateVectorComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::AABBShapeComponent*>>     mAABBShapeComponent;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::ActorRotationComponent*>> mActorRotationComponent;
    // NOLINTEND
};
