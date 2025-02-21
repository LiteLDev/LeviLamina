#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorFilterGroup;
class ActorOwnerComponent;
class EntitySubsensor;
class Vec3;
struct Tick;
// clang-format on

class EntitySensorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                              mRelativeRange;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mMaxSensorRange;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>               mEventCondition;
    ::ll::TypedStorage<8, 24, ::std::vector<::EntitySubsensor>> mSubsensors;
    ::ll::TypedStorage<1, 1, bool>                              mCanFireEventWithNoEntities;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySensorComponent& operator=(EntitySensorComponent const&);
    EntitySensorComponent(EntitySensorComponent const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::EntitySensorComponent& operator=(::EntitySensorComponent&&);

    MCAPI void tick(::ActorOwnerComponent& actorOwnerComponent, ::Tick const& currentTick);

    MCAPI ~EntitySensorComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
