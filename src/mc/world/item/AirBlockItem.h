#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

class AirBlockItem : public ::Item {
public:
    // prevent constructor by default
    AirBlockItem();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AirBlockItem(::std::string const& name, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
