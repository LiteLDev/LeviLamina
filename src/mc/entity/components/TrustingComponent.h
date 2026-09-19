#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/flat_set.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Interaction;
class Item;
class ItemStack;
class Player;
// clang-format on

struct TrustingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mChance;
    ::ll::
        TypedStorage<8, 24, ::brstd::flat_set<::Item const*, ::std::less<::Item const*>, ::std::vector<::Item const*>>>
            mTrustItems;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool _canTrust(::ItemStack const& instance) const;

    MCAPI ::Interaction getInteraction(::Actor& owner, ::Player& player);
    // NOLINTEND
};
