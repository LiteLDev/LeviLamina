#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemStack;
class SimpleContainer;
class EntityContext;
class Player;

namespace ActorEquipment {
// NOLINTBEGIN
MCAPI std::vector<class ItemStack const*> getAllArmor(class EntityContext const&);

MCAPI class SimpleContainer& getArmorContainer(class EntityContext&);

MCAPI class SimpleContainer const& getArmorContainer(class EntityContext const&);

MCAPI class SimpleContainer& getHandContainer(class EntityContext&);

MCAPI class SimpleContainer const& getHandContainer(class EntityContext const&);

MCAPI void initializeActor(class EntityContext&);

MCAPI void initializePlayer(class EntityContext&, class Player&);
// NOLINTEND

}; // namespace ActorEquipment
