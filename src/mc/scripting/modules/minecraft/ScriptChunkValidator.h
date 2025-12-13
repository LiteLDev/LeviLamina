#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockSource;
class ChunkPos;
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptChunkValidator {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk66966d;
    ::ll::UntypedStorage<4, 4>  mUnkb5b83a;
    ::ll::UntypedStorage<4, 4>  mUnk78441e;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptChunkValidator& operator=(ScriptChunkValidator const&);
    ScriptChunkValidator(ScriptChunkValidator const&);
    ScriptChunkValidator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptChunkValidator(::std::set<::ChunkPos> const& chunkPositions, ::BlockSource& region);

    MCNAPI ~ScriptChunkValidator();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::set<::ChunkPos> const& chunkPositions, ::BlockSource& region);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
