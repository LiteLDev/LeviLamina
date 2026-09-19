#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class LevelChunk;
struct DimensionType;
namespace Bedrock { struct ChunkDimensionDebugData; }
namespace Bedrock::Profiling { class PerfClock; }
namespace Bedrock::RefCount::details { struct KeepAlive; }
// clang-format on

namespace Bedrock {

class ChunkDebugStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 80> mUnk8e25e3;
    ::ll::UntypedStorage<8, 24> mUnke18a9a;
    ::ll::UntypedStorage<8, 24> mUnk90a64b;
    ::ll::UntypedStorage<8, 24> mUnk7ccad8;
    ::ll::UntypedStorage<8, 24> mUnk9aceb1;
    ::ll::UntypedStorage<8, 24> mUnk415790;
    ::ll::UntypedStorage<8, 24> mUnk5ac4c1;
    ::ll::UntypedStorage<8, 64> mUnk3fcce0;
    ::ll::UntypedStorage<8, 64> mUnkf6f421;
    ::ll::UntypedStorage<8, 8>  mUnk6c26d5;
    ::ll::UntypedStorage<8, 8>  mUnke6a02e;
    ::ll::UntypedStorage<8, 80> mUnkb5b007;
    ::ll::UntypedStorage<8, 64> mUnk94bf16;
    // NOLINTEND

public:
    // prevent constructor by default
    ChunkDebugStorage& operator=(ChunkDebugStorage const&);
    ChunkDebugStorage(ChunkDebugStorage const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ChunkDebugStorage();

#ifdef LL_PLAT_C
    MCNAPI void clearChunkMapServerData();

    MCNAPI void dubious_clearSomeMoreDataSelectively();

    MCNAPI ::std::shared_ptr<::Bedrock::ChunkDimensionDebugData const>
    getChunkMapServerData(::DimensionType dimensionID);

    MCNAPI void legacy_clearSomeDataSelectively();
#endif

    MCNAPI void onLegacyUpdateMap(bool const* legacyMap);

    MCNAPI void onLiveSave(::LevelChunk const& levelChunk);

    MCNAPI void setChunkMapServerData(
        ::DimensionType                                             dimensionID,
        ::std::shared_ptr<::Bedrock::ChunkDimensionDebugData const> chunkMapDebugDraw
    );

#ifdef LL_PLAT_C
    MCNAPI void setReusedSubChunksPercent(::ChunkPos const& pos, uchar reusedPercent);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND
};

} // namespace Bedrock
