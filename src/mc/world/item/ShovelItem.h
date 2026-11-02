#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/DiggerItem.h"
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPos;
class InteractionResult;
class ItemStack;
class Vec3;
struct ItemTier;
// clang-format on

class ShovelItem : public ::DiggerItem {
public:
    // prevent constructor by default
    ShovelItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getEnchantSlot() const /*override*/;

    virtual ::InteractionResult _useOn(
        ::ItemStack&  instance,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const /*override*/;

    virtual ::std::string_view getEfficiencyLocalization() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ShovelItem(::std::string const& name, int id, ::ItemTier const& tier);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::InteractionResult useShovelOn(::ItemStack& instance, ::Actor& entity, ::BlockPos pos, uchar face);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& name, int id, ::ItemTier const& tier);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getEnchantSlot() const;

    MCNAPI ::InteractionResult $_useOn(
        ::ItemStack&  instance,
        ::Actor&      entity,
        ::BlockPos    pos,
        uchar         face,
        ::HandSlot    handSlot,
        ::Vec3 const& clickPos
    ) const;

    MCNAPI ::std::string_view $getEfficiencyLocalization() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
