#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/world/actor/ActorType.h"

class ImitateMobSoundsComponent {
public:
    // prevent constructor by default
    ImitateMobSoundsComponent& operator=(ImitateMobSoundsComponent const&);
    ImitateMobSoundsComponent(ImitateMobSoundsComponent const&);
    ImitateMobSoundsComponent();

public:
    // NOLINTBEGIN
    MCAPI static ::Puv::Legacy::LevelSoundEvent getRandomImitatedSound(class Randomize const& randomize);

    MCAPI static bool imitateNearbyMobs(class Actor& actor, class Randomize const& randomize);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static std::unordered_map<::ActorType, ::Puv::Legacy::LevelSoundEvent> const& imitateMobMap();

    // NOLINTEND
};
