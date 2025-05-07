#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/actor/item/Minecart.h"
#include "mc/world/actor/item/MinecartType.h"

class MinecartRideable : public ::Minecart {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 139
    virtual ::MinecartType getType() /*override*/;

    // vIndex: 8
    virtual ~MinecartRideable() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::MinecartType $getType();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
