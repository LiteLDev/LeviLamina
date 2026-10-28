#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/ActorFilterGroup.h"
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Interaction;
class Player;
struct FeedItem;
// clang-format on

class HealableComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::FeedItem>> mHealItems;
    ::ll::TypedStorage<1, 1, bool>                       mForceUse;
    ::ll::TypedStorage<8, 64, ::ActorFilterGroup>        mFilter;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Interaction getInteraction(::Actor& owner, ::Player& player, ::HandSlot handSlot);
    // NOLINTEND
};
