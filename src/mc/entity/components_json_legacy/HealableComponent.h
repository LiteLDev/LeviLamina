#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/FeedItem.h"

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
    // member functions
    // NOLINTBEGIN
    MCAPI void _useFeedItem(::Actor& owner, ::Player& player, ::FeedItem const& feedItem);

    MCAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _applyEffects(::Actor& owner, ::std::vector<::FeedItem::Effect> const& effects);

    MCAPI static bool _canHeal(::Actor& owner, ::ItemStack const& item, ::HealableDefinition const* healableDefinition);
    // NOLINTEND
};
