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
    MCNAPI void _useFeedItem(::Actor& owner, ::Player& player, ::FeedItem const& feedItem);

    MCNAPI bool getInteraction(::Actor& owner, ::Player& player, ::ActorInteraction& interaction);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _applyEffects(::Actor& owner, ::std::vector<::FeedItem::Effect> const& effects);

    MCNAPI static bool
    _canHeal(::Actor& owner, ::ItemStack const& item, ::HealableDefinition const* healableDefinition);
    // NOLINTEND
};
