#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class ActorInteraction;
class HealableDefinition;
class ItemStack;
class Player;
struct FeedItem;
// clang-format on

class HealableComponent {
public:
    // prevent constructor by default
    HealableComponent& operator=(HealableComponent const&);
    HealableComponent(HealableComponent const&);
    HealableComponent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _useFeedItem(::Actor& owner, ::Player& player, ::FeedItem const& feedItem);

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool _canHeal(::Actor& owner, ::ItemStack const& item, ::HealableDefinition const* healableDefinition);
    // NOLINTEND
};
