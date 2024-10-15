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
    MCAPI JigsawStructureBlockInfo(
        class BlockPos const&              pos,
        std::unique_ptr<class CompoundTag> tag,
        class Block const&                 block
    );

    MCAPI class CompoundTag* getNonEmptyTag();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(class BlockPos const& pos, std::unique_ptr<class CompoundTag> tag, class Block const& block);

    // NOLINTEND
};
