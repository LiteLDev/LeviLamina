#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawBlockInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_JIGSAWBLOCKINFO
public:
    JigsawBlockInfo& operator=(JigsawBlockInfo const&) = delete;
    JigsawBlockInfo(JigsawBlockInfo const&)            = delete;
    JigsawBlockInfo()                                  = delete;
#endif

public:
    /**
     * @symbol ??0JigsawBlockInfo\@\@QEAA\@AEBVBlockPos\@\@PEBVBlock\@\@1VJigsawEditorData\@\@\@Z
     */
    MCAPI JigsawBlockInfo(class BlockPos const&, class Block const*, class Block const*, class JigsawEditorData);
    /**
     * @symbol ??4JigsawBlockInfo\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class JigsawBlockInfo& operator=(class JigsawBlockInfo&&);
};
