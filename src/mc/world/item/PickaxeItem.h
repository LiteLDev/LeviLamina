#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/DiggerItem.h"

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

    virtual void executeEvent(::ItemStackBase& item, ::std::string const& name, ::RenderParams& params) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PickaxeItem(::std::string const& name, int id, ::ItemTier const& tier);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::ItemTier const& tier);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getEnchantSlot() const;

    MCFOLD void $executeEvent(::ItemStackBase& item, ::std::string const& name, ::RenderParams& params) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
