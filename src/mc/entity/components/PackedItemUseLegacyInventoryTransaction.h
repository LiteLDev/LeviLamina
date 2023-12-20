#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackedItemUseLegacyInventoryTransaction {
public:
    // prevent constructor by default
    PackedItemUseLegacyInventoryTransaction& operator=(PackedItemUseLegacyInventoryTransaction const&);
    PackedItemUseLegacyInventoryTransaction(PackedItemUseLegacyInventoryTransaction const&);

public:
    // NOLINTBEGIN
    // symbol: ??0PackedItemUseLegacyInventoryTransaction@@QEAA@XZ
    MCAPI PackedItemUseLegacyInventoryTransaction();

    // symbol: ??0PackedItemUseLegacyInventoryTransaction@@QEAA@$$QEAU0@@Z
    MCAPI PackedItemUseLegacyInventoryTransaction(struct PackedItemUseLegacyInventoryTransaction&&);

    // symbol: ??4PackedItemUseLegacyInventoryTransaction@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct PackedItemUseLegacyInventoryTransaction& operator=(struct PackedItemUseLegacyInventoryTransaction&&);

    // symbol: ??1PackedItemUseLegacyInventoryTransaction@@QEAA@XZ
    MCAPI ~PackedItemUseLegacyInventoryTransaction();

    // NOLINTEND
};
