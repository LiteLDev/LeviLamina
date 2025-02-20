#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/Item.h"

class AirBlockItem : public ::Item {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AirBlockItem() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AirBlockItem(::std::string const& name, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& name, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
