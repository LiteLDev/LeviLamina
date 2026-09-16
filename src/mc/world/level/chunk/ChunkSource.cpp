#include "mc/world/level/chunk/ChunkSource.h"

#include "mc/world/level/chunk/LevelChunk.h"

std::shared_ptr<LevelChunk> ChunkSource::getAvailableChunk(::ChunkPos const& cp) {
    auto chunk = getExistingChunk(cp);
    // A chunk is only handed out once it reaches ChunkState::Loaded; anything earlier is half-built.
    if (chunk != nullptr && chunk->mLoadState->load() >= ::ChunkState::Loaded) {
        return chunk;
    }
    return nullptr;
}
