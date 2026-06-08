#include "mc/server/ServerPlayer.h"
#include "mc/deps/ecs/gamerefs_entity/GameRefsEntity.h"
#include "mc/entity/components/ServerPlayerComponent.h"

ServerPlayer* ServerPlayer::tryGetFromEntity(::EntityContext& entity, bool includeRemoved) {
    if (entity.hasComponent<ServerPlayerComponent>()) {
        return static_cast<ServerPlayer*>(Actor::tryGetFromEntity(entity, includeRemoved));
    }
    return nullptr;
}
