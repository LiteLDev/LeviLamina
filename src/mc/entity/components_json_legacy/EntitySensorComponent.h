#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/phys/AABB.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class EntitySubsensor;
struct Tick;
// clang-format on

class EntitySensorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                              mRelativeRange;
    ::ll::TypedStorage<1, 1, bool>                              mFindPlayersOnly;
    ::ll::TypedStorage<4, 24, ::AABB>                           mMaxBaseSearchArea;
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
    MCNAPI ::EntitySensorComponent& operator=(::EntitySensorComponent&&);

    MCNAPI void tick(::ActorOwnerComponent& actorOwnerComponent, ::Tick const& currentTick);

    MCNAPI ~EntitySensorComponent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
