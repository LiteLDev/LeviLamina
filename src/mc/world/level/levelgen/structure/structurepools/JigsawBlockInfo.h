#pragma once

#include "mc/_HeaderOutputPredefine.h"

class JigsawBlockInfo {
public:
    // prevent constructor by default
    JigsawBlockInfo& operator=(JigsawBlockInfo const&);
    JigsawBlockInfo(JigsawBlockInfo const&);
    JigsawBlockInfo();

public:
    // NOLINTBEGIN
    // symbol: ??0JigsawBlockInfo@@QEAA@$$QEAV0@@Z
    MCAPI JigsawBlockInfo(class JigsawBlockInfo&&);

    // symbol: ??0JigsawBlockInfo@@QEAA@AEBVBlockPos@@PEBVBlock@@1VJigsawEditorData@@@Z
    MCAPI JigsawBlockInfo(
        class BlockPos const&  pos,
        class Block const*     block,
        class Block const*     finalBlock,
        class JigsawEditorData editorData
    );

    // symbol: ?getFrontFacing@JigsawBlockInfo@@QEBAEXZ
    MCAPI uchar getFrontFacing() const;

    // symbol: ?getPoolName@JigsawBlockInfo@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getPoolName() const;

    // symbol: ??4JigsawBlockInfo@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class JigsawBlockInfo& operator=(class JigsawBlockInfo&&);

    // symbol: ??1JigsawBlockInfo@@QEAA@XZ
    MCAPI ~JigsawBlockInfo();

    // NOLINTEND
};
