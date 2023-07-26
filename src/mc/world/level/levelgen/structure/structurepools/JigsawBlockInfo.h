#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawBlockInfo {

public:
    // prevent constructor by default
    JigsawBlockInfo& operator=(JigsawBlockInfo const&) = delete;
    JigsawBlockInfo(JigsawBlockInfo const&)            = delete;
    JigsawBlockInfo()                                  = delete;

public:
    /**
     * @symbol ??0JigsawBlockInfo\@\@QEAA\@AEBVBlockPos\@\@PEBVBlock\@\@1VJigsawEditorData\@\@\@Z
     */
    MCAPI
    JigsawBlockInfo(class BlockPos const&, class Block const*, class Block const*, class JigsawEditorData); // NOLINT
    /**
     * @symbol ??4JigsawBlockInfo\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class JigsawBlockInfo& operator=(class JigsawBlockInfo&&); // NOLINT
};
