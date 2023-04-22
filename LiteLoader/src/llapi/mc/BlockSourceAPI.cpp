#include "llapi/mc/BlockSource.hpp"

#include "llapi/Global.h"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/mc/AABB.hpp"
#include "llapi/mc/ChunkPos.hpp"
#include "llapi/mc/LevelChunk.hpp"
#include "llapi/mc/WeakEntityRef.hpp"
#include "llapi/mc/ActorClassTree.hpp"

BlockInstance BlockSource::getBlockInstance(BlockPos a1) {
    return BlockInstance{const_cast<Block*>(&getBlock(a1)), a1, this->getDimensionId()};
}

std::vector<Actor*> BlockSource::queryEntities(ActorType actorType, const AABB& range, bool ignoreType,
                                               float extendDistance) {
    std::vector<Actor*> entities;
    entities.clear();
    ChunkPos minChunk(((int)std::floor(range.min.x - extendDistance)) >> 4,
                      ((int)std::floor(range.min.z - extendDistance)) >> 4);
    ChunkPos maxChunk(((int)std::floor(range.max.x + extendDistance)) >> 4,
                      ((int)std::floor(range.max.z + extendDistance)) >> 4);

    for (int x = minChunk.x; x <= maxChunk.x; x++)
        for (int z = minChunk.z; z <= maxChunk.z; z++) {
            LevelChunk* chunk = getChunk({x, z});
            if (chunk != nullptr) {
                for (auto& weakEntityRef : chunk->getChunkEntities()) {
                    Actor* actor = weakEntityRef.tryUnwrap<Actor>();
                    if (actor != nullptr && ActorClassTree::isInstanceOf(*actor, actorType) != ignoreType &&
                        range.intersects(actor->getAABB())) {
                        entities.emplace_back(actor);
                    }
                }
            }
        }
    return std::move(entities);
}

std::vector<Actor*> BlockSource::getEntities(const AABB& range, float extendDistance) {
    std::vector<Actor*> entities;
    entities.clear();
    ChunkPos minChunk(((int)std::floor(range.min.x - extendDistance)) >> 4,
                      ((int)std::floor(range.min.z - extendDistance)) >> 4);
    ChunkPos maxChunk(((int)std::floor(range.max.x + extendDistance)) >> 4,
                      ((int)std::floor(range.max.z + extendDistance)) >> 4);

    for (int x = minChunk.x; x <= maxChunk.x; x++)
        for (int z = minChunk.z; z <= maxChunk.z; z++) {
            LevelChunk* chunk = getChunk({x, z});
            if (chunk != nullptr) {
                for (auto& weakEntityRef : chunk->getChunkEntities()) {
                    Actor* actor = weakEntityRef.tryUnwrap<Actor>();
                    if (actor != nullptr && range.intersects(actor->getAABB())) {
                        entities.emplace_back(actor);
                    }
                }
            }
        }
    return std::move(entities);
}