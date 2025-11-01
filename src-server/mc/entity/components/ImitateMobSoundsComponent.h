#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Randomize;
// clang-format on

class ImitateMobSoundsComponent {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool imitateNearbyMobs(::Actor& actor, ::Randomize const& randomize);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::ActorType, ::SharedTypes::Legacy::LevelSoundEvent> const& imitateMobMap();
    // NOLINTEND
};
