#include "mc/world/level/BlockSource.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/world/actor/Actor.h"
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/phys/AABB.h"

std::vector<class Actor*>
BlockSource::getEntities(class AABB const& range, float extendDistance, ActorType actorType, bool ignoreType) const {
    std::vector<Actor*> entities;

    ChunkPos minChunk{range.min.x - extendDistance, range.min.z - extendDistance};
    ChunkPos maxChunk{range.max.x + extendDistance, range.max.z + extendDistance};

    for (int x = minChunk.x; x <= maxChunk.x; x++)
        for (int z = minChunk.z; z <= maxChunk.z; z++) {
            LevelChunk* chunk = getChunk({x, z});
            if (chunk == nullptr) {
                continue;
            }
            for (auto& weakEntityRef : chunk->getChunkEntities()) {
                auto* actor = weakEntityRef.tryUnwrap<Actor>();
                if (actor != nullptr &&
                    (actorType == ActorType::TypeMask || actor->isInstanceOf(actorType) != ignoreType) &&
                    range.intersects(actor->getAABB())) {
                    entities.emplace_back(actor);
                }
            }
        }
    return entities;
}