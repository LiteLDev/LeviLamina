#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/DiggerItem.h"
#include "mc/world/item/HandSlot.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class RenderParams;
struct ItemTier;
// clang-format on

class PickaxeItem : public ::DiggerItem {
public:
    // prevent constructor by default
    PickaxeItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getEnchantSlot() const /*override*/;

    virtual void
    executeEvent(::ItemStackBase& item, ::std::string const& name, ::HandSlot handSlot, ::RenderParams& params) const
        /*override*/;

    virtual ::std::string_view getEfficiencyLocalization() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PickaxeItem(::std::string const& name, int id, ::ItemTier const& tier);
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

    MCNAPI void
    $executeEvent(::ItemStackBase& item, ::std::string const& name, ::HandSlot handSlot, ::RenderParams& params) const;

    MCNAPI ::std::string_view $getEfficiencyLocalization() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
