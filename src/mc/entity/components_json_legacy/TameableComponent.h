#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class ItemDescriptor;
class Player;
struct ActorDefinitionTameItem;
// clang-format on

class TameableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                     mChance;
    ::ll::TypedStorage<8, 24, ::std::vector<::ActorDefinitionTameItem>> mTameItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _attemptToTame(::Actor& owner, ::Player& player, ::std::optional<::ItemDescriptor> const& resultItem);

    MCAPI bool _canTame(::Actor& owner, ::Player& player, ::ItemDescriptor& resultItemOut);

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);

    MCAPI void tame(::Actor& owner, ::Player& player);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _becomeTame(::Actor& owner);
    // NOLINTEND
};
