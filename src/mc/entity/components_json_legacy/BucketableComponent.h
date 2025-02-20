#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class BaseGameVersion;
class ItemStack;
class Player;
// clang-format on

class BucketableComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _canBucketWithItem(::ItemStack const& item, ::BaseGameVersion const& baseGameVersion);

    MCAPI static void implInteraction(::Actor& owner, ::Player& player);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& WATER_BUCKET_USEABLE_VERSION();
    // NOLINTEND
};
