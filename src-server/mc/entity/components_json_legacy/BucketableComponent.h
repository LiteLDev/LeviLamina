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
    MCNAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool _canBucketWithItem(::ItemStack const& item, ::BaseGameVersion const& baseGameVersion);

    MCNAPI static void implInteraction(::Actor& owner, ::Player& player);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::BaseGameVersion const& WATER_BUCKET_USEABLE_VERSION();
    // NOLINTEND

};
