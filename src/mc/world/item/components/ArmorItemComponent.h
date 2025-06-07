#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/components/NetworkedItemComponent.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

class ArmorItemComponent : public ::NetworkedItemComponent<::ArmorItemComponent> {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ArmorItemComponent() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getIdentifier();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
