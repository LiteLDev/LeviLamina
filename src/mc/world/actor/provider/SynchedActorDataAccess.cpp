#include "mc/world/actor/provider/SynchedActorDataAccess.h"
#include "mc/deps/vanilla_components/ActorDataFlagComponent.h"
#include "mc/deps/ecs/gamerefs_entity/EntityContext.h"

bool SynchedActorDataAccess::getActorFlag(::EntityContext const& entity, ::ActorFlags flag) {
    auto component = entity.tryGetComponent<ActorDataFlagComponent>();
    if (component) {
        return component->mValue.test(static_cast<size_t>(flag));
    }
    return false;
}
