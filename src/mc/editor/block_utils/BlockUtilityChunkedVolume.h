#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class SimpleBlockVolume;
class SubChunkPos;
namespace Editor::BlockUtils::Task { struct BlockUtilitySubChunkBatch; }
// clang-format on

namespace Editor::BlockUtils::Task {

class BlockUtilityChunkedVolume {
public:
    // BlockUtilityChunkedVolume inner types declare
    // clang-format off
    struct ChunkBuildState;
    // clang-format on

    // BlockUtilityChunkedVolume inner types define
    struct ChunkBuildState {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 64> mUnk1144ef;
        // NOLINTEND

    public:
        // prevent constructor by default
        ChunkBuildState& operator=(ChunkBuildState const&);
        ChunkBuildState(ChunkBuildState const&);
        ChunkBuildState();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk68d3af;
    ::ll::UntypedStorage<8, 64> mUnk633ec4;
    ::ll::UntypedStorage<8, 24> mUnked4451;
    ::ll::UntypedStorage<4, 24> mUnk9c4d1d;
    ::ll::UntypedStorage<8, 8>  mUnk57d268;
    ::ll::UntypedStorage<1, 1>  mUnk5073fb;
    ::ll::UntypedStorage<1, 1>  mUnkd958f0;
    ::ll::UntypedStorage<1, 1>  mUnk6c7340;
    // NOLINTEND

public:
    // prevent constructor by default
    BlockUtilityChunkedVolume& operator=(BlockUtilityChunkedVolume const&);
    BlockUtilityChunkedVolume(BlockUtilityChunkedVolume const&);
    BlockUtilityChunkedVolume();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Editor::BlockUtils::Task::BlockUtilitySubChunkBatch& _getOrCreateSubChunk(::SubChunkPos const& subChunk);

    MCNAPI void addPosition(::BlockPos const& position, ::Block const* payload);

    MCNAPI void addVolume(::SimpleBlockVolume const& volume);

    MCNAPI void finalize();

    MCNAPI void releaseStorage();

    MCNAPI ~BlockUtilityChunkedVolume();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::BlockUtils::Task
