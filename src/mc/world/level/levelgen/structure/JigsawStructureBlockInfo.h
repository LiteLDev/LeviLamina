#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawStructureBlockInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWSTRUCTUREBLOCKINFO
public:
    JigsawStructureBlockInfo& operator=(JigsawStructureBlockInfo const&) = delete;
    JigsawStructureBlockInfo(JigsawStructureBlockInfo const&)            = delete;
    JigsawStructureBlockInfo()                                           = delete;
#endif

public:
    /**
     * @symbol
     * ??0JigsawStructureBlockInfo\@\@QEAA\@AEBVBlockPos\@\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBVBlock\@\@\@Z
     */
    MCAPI JigsawStructureBlockInfo(class BlockPos const&, std::unique_ptr<class CompoundTag>, class Block const&);
    /**
     * @symbol ?getNonEmptyTag\@JigsawStructureBlockInfo\@\@QEAAPEAVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag* getNonEmptyTag();
};
