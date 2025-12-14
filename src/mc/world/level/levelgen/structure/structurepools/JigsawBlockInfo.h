#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/level/levelgen/structure/JigsawEditorData.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class JigsawBlockInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 12, ::BlockPos>          mPos;
    ::ll::TypedStorage<8, 8, ::Block const*>       mBlock;
    ::ll::TypedStorage<8, 8, ::Block const*>       mFinalBlock;
    ::ll::TypedStorage<8, 144, ::JigsawEditorData> mEditorData;
    // NOLINTEND

public:
    // prevent constructor by default
    JigsawBlockInfo& operator=(JigsawBlockInfo const&);
    JigsawBlockInfo(JigsawBlockInfo const&);
    JigsawBlockInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI JigsawBlockInfo(::JigsawBlockInfo&&);

    MCAPI JigsawBlockInfo(
        ::BlockPos const&  pos,
        ::Block const*     block,
        ::Block const*     finalBlock,
        ::JigsawEditorData editorData
    );

    MCAPI ~JigsawBlockInfo();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::JigsawBlockInfo&&);

    MCAPI void*
    $ctor(::BlockPos const& pos, ::Block const* block, ::Block const* finalBlock, ::JigsawEditorData editorData);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
