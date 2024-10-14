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
    MCAPI JigsawBlockInfo(class JigsawBlockInfo&&);

    MCAPI JigsawBlockInfo(
        class BlockPos const&  pos,
        class Block const*     block,
        class Block const*     finalBlock,
        class JigsawEditorData editorData
    );

    MCAPI uchar getFrontFacing() const;

    MCAPI class JigsawBlockInfo& operator=(class JigsawBlockInfo&&);

    MCAPI ~JigsawBlockInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
