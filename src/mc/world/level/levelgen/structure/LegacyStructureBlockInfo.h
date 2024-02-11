#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LegacyStructureBlockInfo {
public:
    // prevent constructor by default
    LegacyStructureBlockInfo& operator=(LegacyStructureBlockInfo const&);
    LegacyStructureBlockInfo(LegacyStructureBlockInfo const&);
    LegacyStructureBlockInfo();

public:
    // NOLINTBEGIN
    // symbol:
    // ??0LegacyStructureBlockInfo@@QEAA@AEBVBlockPos@@V?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@AEBVBlock@@2@Z
    MCAPI LegacyStructureBlockInfo(
        class BlockPos const&              pos,
        std::unique_ptr<class CompoundTag> tag,
        class Block const&                 block,
        class Block const&                 extraBlock
    );

    // NOLINTEND
};
