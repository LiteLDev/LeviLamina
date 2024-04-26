#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorType.h"
#include "mc/events/LevelSoundEvent.h"

class ImitateMobSoundsComponent {
public:
    // prevent constructor by default
    ImitateMobSoundsComponent& operator=(ImitateMobSoundsComponent const&);
    ImitateMobSoundsComponent(ImitateMobSoundsComponent const&);
    ImitateMobSoundsComponent();

public:
    // NOLINTBEGIN
    // symbol: ?getRandomImitatedSound@ImitateMobSoundsComponent@@SA?AW4LevelSoundEvent@Legacy@Puv@@AEBVRandomize@@@Z
    MCAPI static ::Puv::Legacy::LevelSoundEvent getRandomImitatedSound(class Randomize const& randomize);

    // symbol: ?imitateNearbyMobs@ImitateMobSoundsComponent@@SA_NAEAVActor@@AEBVRandomize@@@Z
    MCAPI static bool imitateNearbyMobs(class Actor& actor, class Randomize const& randomize);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?imitateMobMap@ImitateMobSoundsComponent@@0V?$unordered_map@W4ActorType@@W4LevelSoundEvent@Legacy@Puv@@U?$hash@W4ActorType@@@std@@U?$equal_to@W4ActorType@@@6@V?$allocator@U?$pair@$$CBW4ActorType@@W4LevelSoundEvent@Legacy@Puv@@@std@@@6@@std@@B
    MCAPI static std::unordered_map<::ActorType, ::Puv::Legacy::LevelSoundEvent> const imitateMobMap;

    // NOLINTEND
};
