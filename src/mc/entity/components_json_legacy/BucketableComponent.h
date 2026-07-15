#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class BaseGameVersion;
class InteractionResult;
class Player;
// clang-format on

class BucketableComponent {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::InteractionResult getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& WATER_BUCKET_USEABLE_VERSION();
    // NOLINTEND
};
