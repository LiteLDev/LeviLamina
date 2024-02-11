#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyBlockPlacementProcessor {
public:
    // prevent constructor by default
    LegacyBlockPlacementProcessor& operator=(LegacyBlockPlacementProcessor const&);
    LegacyBlockPlacementProcessor(LegacyBlockPlacementProcessor const&);
    LegacyBlockPlacementProcessor();

public:
    // NOLINTBEGIN
    // symbol: ??0LegacyBlockPlacementProcessor@@QEAA@AEBVLegacyStructureSettings@@@Z
    MCAPI explicit LegacyBlockPlacementProcessor(class LegacyStructureSettings const& settings);

    // symbol:
    // ?applyBlockRules@LegacyBlockPlacementProcessor@@QEAAPEBVBlock@@AEAVBlockSource@@AEAVBlockPos@@PEBV2@AEBV4@@Z
    MCAPI class Block const* applyBlockRules(
        class BlockSource&    region,
        class BlockPos&       pos,
        class Block const*    blockToPlace,
        class BlockPos const& refPos
    );

    // symbol: ?applyGravity@LegacyBlockPlacementProcessor@@QEBAAEAVBlockPos@@AEAVBlockSource@@HAEAV2@@Z
    MCAPI class BlockPos& applyGravity(class BlockSource& region, int yOffset, class BlockPos& pos) const;

    // symbol: ?canPlace@LegacyBlockPlacementProcessor@@QEAA_NXZ
    MCAPI bool canPlace();

    // symbol: ??1LegacyBlockPlacementProcessor@@QEAA@XZ
    MCAPI ~LegacyBlockPlacementProcessor();

    // NOLINTEND
};
