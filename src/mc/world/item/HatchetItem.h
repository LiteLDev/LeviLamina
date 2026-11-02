#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/DiggerItem.h"

// auto generated forward declare list
// clang-format off
struct ItemTier;
// clang-format on

class HatchetItem : public ::DiggerItem {
public:
    // prevent constructor by default
    HatchetItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual int getEnchantSlot() const /*override*/;

    virtual ::std::string_view getEfficiencyLocalization() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI HatchetItem(::std::string const& name, int id, ::ItemTier const& tier);
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

    MCNAPI ::std::string_view $getEfficiencyLocalization() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
