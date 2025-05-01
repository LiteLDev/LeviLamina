#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class JigsawEditorData;
// clang-format on

class JigsawBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12>  mUnkb6feaf;
    ::ll::UntypedStorage<8, 8>   mUnkb33309;
    ::ll::UntypedStorage<8, 8>   mUnk8a6e0e;
    ::ll::UntypedStorage<8, 144> mUnk88f9d8;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawBlockInfo& operator=(JigsawBlockInfo const&);
    JigsawBlockInfo(JigsawBlockInfo const&);
    JigsawBlockInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JigsawBlockInfo(::JigsawBlockInfo&&);

    MCNAPI JigsawBlockInfo(
        ::BlockPos const&  pos,
        ::Block const*     block,
        ::Block const*     finalBlock,
        ::JigsawEditorData editorData
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::JigsawBlockInfo&&);

    MCNAPI void*
    $ctor(::BlockPos const& pos, ::Block const* block, ::Block const* finalBlock, ::JigsawEditorData editorData);
    // NOLINTEND
};
