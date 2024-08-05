#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackedItemUseLegacyInventoryTransaction {
public:
    // prevent constructor by default
    PackedItemUseLegacyInventoryTransaction& operator=(PackedItemUseLegacyInventoryTransaction const&);
    PackedItemUseLegacyInventoryTransaction(PackedItemUseLegacyInventoryTransaction const&);

public:
    // NOLINTBEGIN
    MCAPI PackedItemUseLegacyInventoryTransaction();

    MCAPI PackedItemUseLegacyInventoryTransaction(struct PackedItemUseLegacyInventoryTransaction&&);

    MCAPI struct PackedItemUseLegacyInventoryTransaction& operator=(struct PackedItemUseLegacyInventoryTransaction&&);

    MCAPI ~PackedItemUseLegacyInventoryTransaction();

    // NOLINTEND
};
