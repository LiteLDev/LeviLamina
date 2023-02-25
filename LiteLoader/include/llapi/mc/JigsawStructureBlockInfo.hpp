/**
 * @file  JigsawStructureBlockInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JigsawStructureBlockInfo.
 *
 */
class JigsawStructureBlockInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWSTRUCTUREBLOCKINFO
public:
    class JigsawStructureBlockInfo& operator=(class JigsawStructureBlockInfo const &) = delete;
    JigsawStructureBlockInfo(class JigsawStructureBlockInfo const &) = delete;
    JigsawStructureBlockInfo() = delete;
#endif

public:
    /**
     * @symbol  ??0JigsawStructureBlockInfo\@\@QEAA\@AEBVBlockPos\@\@V?$unique_ptr\@VCompoundTag\@\@U?$default_delete\@VCompoundTag\@\@\@std\@\@\@std\@\@AEBVBlock\@\@\@Z
     */
    MCAPI JigsawStructureBlockInfo(class BlockPos const &, std::unique_ptr<class CompoundTag>, class Block const &);
    /**
     * @symbol  ??0JigsawStructureBlockInfo\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI JigsawStructureBlockInfo(class JigsawStructureBlockInfo &&);
    /**
     * @symbol  ?getNonEmptyTag\@JigsawStructureBlockInfo\@\@QEAAPEAVCompoundTag\@\@XZ
     */
    MCAPI class CompoundTag * getNonEmptyTag();

};