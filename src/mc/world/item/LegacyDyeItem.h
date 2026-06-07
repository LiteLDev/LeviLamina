#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/DyePowderItem.h"
#include "mc/world/item/ItemColor.h"

class LegacyDyeItem : public ::DyePowderItem {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mAllowLegacyUseAsDye;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyDyeItem();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isDye() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LegacyDyeItem(::std::string const& name, int id, ::ItemColor color, bool allowLegacyUseAsDye);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id, ::ItemColor color, bool allowLegacyUseAsDye);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isDye() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
