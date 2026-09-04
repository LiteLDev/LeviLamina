#include "mc/entity/systems/OnFireSystem.h"
#include "mc/entity/components/OnFireComponent.h"
#include "mc/world/actor/Actor.h"


void OnFireSystem::setOnFireNoEffects(Actor& actor, int seconds) {
    auto& onFire =
        actor.getEntityContext().getRegistry().get_or_emplace<OnFireComponent>(actor.getEntityContext().mEntity);

    onFire.mOnFireTicks = std::max(onFire.mOnFireTicks, seconds * 20);
}
