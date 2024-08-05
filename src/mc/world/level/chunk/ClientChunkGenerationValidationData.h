#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientChunkGenerationValidationData {
public:
    // prevent constructor by default
    ClientChunkGenerationValidationData& operator=(ClientChunkGenerationValidationData const&);
    ClientChunkGenerationValidationData(ClientChunkGenerationValidationData const&);
    ClientChunkGenerationValidationData();

public:
    // NOLINTBEGIN
    MCAPI void captureServerChunkData(class ChunkSource&);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI void _captureChunkData(std::map<class ChunkPos, std::vector<std::string>>& data, class ChunkSource&);

    // NOLINTEND
};
