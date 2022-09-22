/**
 * @file  JigsawBlockInfo.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class JigsawBlockInfo.
 *
 */
class JigsawBlockInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWBLOCKINFO
public:
    class JigsawBlockInfo& operator=(class JigsawBlockInfo const &) = delete;
    JigsawBlockInfo(class JigsawBlockInfo const &) = delete;
    JigsawBlockInfo() = delete;
#endif

public:
    /**
     * @hash   1784229017
     * @symbol ??0JigsawBlockInfo@@QEAA@AEBVBlockPos@@PEBVBlock@@1VJigsawEditorData@@@Z
     */
    MCAPI JigsawBlockInfo(class BlockPos const &, class Block const *, class Block const *, class JigsawEditorData);
    /**
     * @hash   -260410008
     * @symbol ??4JigsawBlockInfo@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class JigsawBlockInfo & operator=(class JigsawBlockInfo &&);

};