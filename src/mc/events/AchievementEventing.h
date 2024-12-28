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
    MCAPI AchievementEventing();

    MCAPI void AwardAchievement(::Player& player, ::MinecraftEventing::AchievementIds achievementId);

    MCAPI void
    BlockBroken(::Player const& player, ::Block const& destroyedBlock, int method, int variantData, ushort auxType);

    MCAPI void CaravanChanged(::Mob& mob, int caravanSize);

    MCAPI void ItemUsed(::Player const& player, ::ItemDescriptor const& item, uint useMethod);

    MCAPI void JukeboxUsed(::Player const& player, ::ItemDescriptor const& disc);

    MCAPI void MobEffectChanged(::Player const& player, ::MobEffectInstance const& effectInstance, int change);

    MCAPI void PlayerBounced(::Player const& player, ::Block const& block, int bounceHeight, int auxType);

    MCAPI void PlayerTeleported(::Player& player, float metersTravelled, int cause, int sourceType);

    MCAPI void
    PlayerTravelled(::Player const& player, float metersTravelledSinceLastEvent, int travelMethodType, int newBiome);

    MCAPI ~AchievementEventing();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::unordered_map<::std::string, ::std::pair<short, short>>& mLegacyIdMap();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
