#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/DiggerItem.h"
#include "mc/world/item/Item.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class RenderParams;
// clang-format on

class PickaxeItem : public ::DiggerItem {
public:
    // prevent constructor by default
    PickaxeItem& operator=(PickaxeItem const&);
    PickaxeItem(PickaxeItem const&);
    PickaxeItem();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 54
    virtual int getEnchantSlot() const /*override*/;

    // vIndex: 8
    virtual void executeEvent(::ItemStackBase&, ::std::string const&, ::RenderParams&) const /*override*/;

    // vIndex: 0
    virtual ~PickaxeItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PickaxeItem(::std::string const& name, int id, ::Item::Tier const& tier);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::Item::Tier const& tier);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getEnchantSlot() const;

    MCAPI void $executeEvent(::ItemStackBase&, ::std::string const&, ::RenderParams&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
