#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawStructureBlockInfo {
public:
    // prevent constructor by default
    JigsawStructureBlockInfo& operator=(JigsawStructureBlockInfo const&);
    JigsawStructureBlockInfo(JigsawStructureBlockInfo const&);
    JigsawStructureBlockInfo();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0JigsawStructureBlockInfo@@QEAA@AEBVBlockPos@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBVBlock@@@Z
    MCAPI JigsawStructureBlockInfo(
        class BlockPos const&              pos,
        std::unique_ptr<class CompoundTag> tag,
        class Block const&                 block
    );

    // symbol: ?getNonEmptyTag@JigsawStructureBlockInfo@@QEAAPEAVCompoundTag@@XZ
    MCAPI class CompoundTag* getNonEmptyTag();

    // NOLINTEND
};
