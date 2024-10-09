#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorEquipment {
// NOLINTBEGIN
MCAPI std::vector<class ItemStack const*> getAllArmor(class EntityContext const& provider);

MCAPI class SimpleContainer& getArmorContainer(class EntityContext& provider);

MCAPI class SimpleContainer const& getArmorContainer(class EntityContext const& provider);

MCAPI class SimpleContainer& getHandContainer(class EntityContext& provider);

MCAPI class SimpleContainer const& getHandContainer(class EntityContext const& provider);

MCAPI void initializeActor(class EntityContext& provider);

MCAPI void initializePlayer(class EntityContext& provider, class Player& player);
// NOLINTEND

}; // namespace ActorEquipment
