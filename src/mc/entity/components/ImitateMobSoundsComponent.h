#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/utilities/ActorType.h"
#include "mc/events/LevelSoundEvent.h"

class ImitateMobSoundsComponent {
public:
    // prevent constructor by default
    ImitateMobSoundsComponent& operator=(ImitateMobSoundsComponent const&) = delete;
    ImitateMobSoundsComponent(ImitateMobSoundsComponent const&)            = delete;
    ImitateMobSoundsComponent()                                            = delete;

public:
    // NOLINTBEGIN
    // symbol: ?getRandomImitatedSound@ImitateMobSoundsComponent@@SA?AW4LevelSoundEvent@@AEBVRandomize@@@Z
    MCAPI static ::LevelSoundEvent getRandomImitatedSound(class Randomize const&);

    // symbol: ?imitateNearbyMobs@ImitateMobSoundsComponent@@SA_NAEAVActor@@AEBVRandomize@@@Z
    MCAPI static bool imitateNearbyMobs(class Actor&, class Randomize const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol:
    // ?imitateMobMap@ImitateMobSoundsComponent@@0V?$unordered_map@W4ActorType@@W4LevelSoundEvent@@U?$hash@W4ActorType@@@std@@U?$equal_to@W4ActorType@@@4@V?$allocator@U?$pair@$$CBW4ActorType@@W4LevelSoundEvent@@@std@@@4@@std@@B
    MCAPI static std::unordered_map<::ActorType, ::LevelSoundEvent> const imitateMobMap;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    inline auto& $imitateMobMap() { return imitateMobMap; }

    // NOLINTEND
};
