#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/HandSlot.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class BlockSource;
class Container;
class InteractionResult;
class ItemInstance;
class ItemStack;
class ItemStackBase;
class Level;
class Player;
class Vec3;
namespace Bedrock::Safety { class RedactableString; }
// clang-format on

class FireworksItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::InteractionResult _useOn(
        ::ItemStack&  instance,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const /*override*/;

    virtual ::ItemStack& use(::ItemStack& item, ::Player& player, ::HandSlot handSlot) const /*override*/;

    virtual bool dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const
        /*override*/;

    virtual void appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           advancedToolTips
    ) const /*override*/;

    virtual bool isDestructive(int) const /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::ItemInstance const& initFireworksRocketItem(
        ::ItemInstance&                      itemInstance,
        ::std::vector<::ItemInstance> const& charges,
        int                                  sulphurCount
    );

    MCNAPI static ::ItemStack const&
    initFireworksRocketItem(::ItemStack& item, ::std::vector<::ItemStack> const& charges, int sulphurCount);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::string const& TAG_EXPLOSIONS();

    MCNAPI static ::std::string const& TAG_E_FLIGHT();

    MCNAPI static ::std::string const& TAG_FIREWORKS();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::InteractionResult $_useOn(
        ::ItemStack&  instance,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const;

    MCNAPI ::ItemStack& $use(::ItemStack& item, ::Player& player, ::HandSlot handSlot) const;

    MCNAPI bool $dispense(::BlockSource& region, ::Container& container, int slot, ::Vec3 const& pos, uchar face) const;

    MCNAPI void $appendFormattedHovertext(
        ::ItemStackBase const&               stack,
        ::Level&                             level,
        ::Bedrock::Safety::RedactableString& hovertext,
        bool const                           advancedToolTips
    ) const;

    MCNAPI bool $isDestructive(int) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
