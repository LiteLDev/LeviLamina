#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackedItemUseLegacyInventoryTransaction {

public:
    // prevent constructor by default
    PackedItemUseLegacyInventoryTransaction& operator=(PackedItemUseLegacyInventoryTransaction const&) = delete;
    PackedItemUseLegacyInventoryTransaction(PackedItemUseLegacyInventoryTransaction const&)            = delete;

public:
    /**
     * @symbol ??0PackedItemUseLegacyInventoryTransaction\@\@QEAA\@XZ
     */
    MCAPI PackedItemUseLegacyInventoryTransaction(); // NOLINT
    /**
     * @symbol ??0PackedItemUseLegacyInventoryTransaction\@\@QEAA\@$$QEAU0\@\@Z
     */
    MCAPI PackedItemUseLegacyInventoryTransaction(struct PackedItemUseLegacyInventoryTransaction&&); // NOLINT
    /**
     * @symbol ??4PackedItemUseLegacyInventoryTransaction\@\@QEAAAEAU0\@$$QEAU0\@\@Z
     */
    MCAPI struct PackedItemUseLegacyInventoryTransaction&
    operator=(struct PackedItemUseLegacyInventoryTransaction&&); // NOLINT
    /**
     * @symbol ??1PackedItemUseLegacyInventoryTransaction\@\@QEAA\@XZ
     */
    MCAPI ~PackedItemUseLegacyInventoryTransaction(); // NOLINT
};
