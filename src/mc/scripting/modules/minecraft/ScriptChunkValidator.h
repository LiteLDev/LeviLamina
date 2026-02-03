#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptChunkValidator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::set<::ChunkPos>> mChunkPositions;
    ::ll::TypedStorage<4, 4, int const>               mMaxHeight;
    ::ll::TypedStorage<4, 4, int const>               mMinHeight;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptChunkValidator();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptChunkValidator(::std::set<::ChunkPos> const& chunkPositions, ::BlockSource& region);

    MCAPI ~ScriptChunkValidator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::set<::ChunkPos> const& chunkPositions, ::BlockSource& region);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
