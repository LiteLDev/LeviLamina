#pragma once

#include "llapi/event/Event.h"
#include "llapi/mc/Actor.hpp"
#include "llapi/mc/BlockInstance.hpp"
#include "llapi/utils/AccessorMacro.h"

namespace ll::event::entity {
/**
 * @brief Projectile hit block event.
 */
class ProjectileHitBlockEvent : public Event<ProjectileHitBlockEvent> {
    LL_RO_MEMBER(BlockInstance, blockInstance, getBlockInstance);
    LL_RO_MEMBER(Actor*, source, getSource);

    ProjectileHitBlockEvent(BlockInstance const& blockInstance, Actor* source);

    LL_DELETE_COPY(ProjectileHitBlockEvent);
    LL_DELETE_MOVE(ProjectileHitBlockEvent);
};
} // namespace ll::event::entity
