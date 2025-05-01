#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/MinecraftEventing.h"

// auto generated forward declare list
// clang-format off
class Block;
class ItemDescriptor;
class Mob;
class MobEffectInstance;
class Player;
// clang-format on

namespace Social::Events {

class AchievementEventing {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd1617b;
    // NOLINTEND

public:
    // prevent constructor by default
    AchievementEventing& operator=(AchievementEventing const&);
    AchievementEventing(AchievementEventing const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI AchievementEventing();

    MCNAPI void AwardAchievement(::Player& player, ::MinecraftEventing::AchievementIds achievementId);

    MCNAPI void CaravanChanged(::Mob& mob, int caravanSize);

    MCNAPI void ItemUsed(::Player const& player, ::ItemDescriptor const& item, uint useMethod);

    MCNAPI void JukeboxUsed(::Player const& player, ::ItemDescriptor const& disc);

    MCNAPI void MobEffectChanged(::Player const& player, ::MobEffectInstance const& effectInstance, int change);

    MCNAPI void PlayerBounced(::Player const& player, ::Block const& block, int bounceHeight, int auxType);

    MCNAPI void PlayerTeleported(::Player& player, float metersTravelled, int cause, int sourceType);

    MCNAPI void
    PlayerTravelled(::Player const& player, float metersTravelledSinceLastEvent, int travelMethodType, int newBiome);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::std::string, ::std::pair<short, short>>& mLegacyIdMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Social::Events
