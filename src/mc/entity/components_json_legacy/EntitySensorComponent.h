#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
struct Tick;
// clang-format on

class EntitySensorComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkc5cd48;
    ::ll::UntypedStorage<4, 12> mUnkaf1316;
    ::ll::UntypedStorage<8, 64> mUnkda0812;
    ::ll::UntypedStorage<8, 24> mUnk114a97;
    ::ll::UntypedStorage<1, 1>  mUnkd48ab6;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySensorComponent& operator=(EntitySensorComponent const&);
    EntitySensorComponent(EntitySensorComponent const&);
    EntitySensorComponent();

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
