#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"
#include "mc/world/item/ItemUseMethod.h"

// auto generated forward declare list
// clang-format off
class ItemStack;
class Level;
class Player;
// clang-format on

class SpyglassItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 80
    virtual void releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const /*override*/;

    // vIndex: 79
    virtual ::ItemUseMethod useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const
        /*override*/;

    // vIndex: 76
    virtual ::ItemStack& use(::ItemStack& instance, ::Player& player) const /*override*/;

    // vIndex: 62
    virtual float getViewDamping() const /*override*/;

    // vIndex: 0
    virtual ~SpyglassItem() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $releaseUsing(::ItemStack& item, ::Player* player, int durationLeft) const;

    MCNAPI ::ItemUseMethod $useTimeDepleted(::ItemStack& inoutInstance, ::Level* level, ::Player* player) const;

    MCNAPI ::ItemStack& $use(::ItemStack& instance, ::Player& player) const;

    MCNAPI float $getViewDamping() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
