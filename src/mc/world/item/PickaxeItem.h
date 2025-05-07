#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/DiggerItem.h"

// auto generated forward declare list
// clang-format off
class ItemStackBase;
class RenderParams;
// clang-format on

class PickaxeItem : public ::DiggerItem {
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI int $getEnchantSlot() const;

    MCFOLD void $executeEvent(::ItemStackBase&, ::std::string const&, ::RenderParams&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
