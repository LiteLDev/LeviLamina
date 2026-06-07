#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class ChunkSource;
// clang-format on

struct ClientChunkGenerationValidationData {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void
    _captureChunkData(::std::map<::ChunkPos, ::std::vector<::std::string>>& data, ::ChunkSource& chunkSource);

#ifdef LL_PLAT_C
    MCAPI void captureClientChunkData(::ChunkSource& clientChunkSource);
#endif

    MCAPI void captureServerChunkData(::ChunkSource& serverChunkSource);
    // NOLINTEND
};
