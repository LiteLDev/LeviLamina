#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ItemStack;
class SimpleContainer;
class EntityContext;
class Player;

namespace ActorEquipment {
// NOLINTBEGIN
// symbol:
// ?getAllArmor@ActorEquipment@@YA?AV?$vector@PEBVItemStack@@V?$allocator@PEBVItemStack@@@std@@@std@@AEBVEntityContext@@@Z
MCAPI std::vector<class ItemStack const*> getAllArmor(class EntityContext const&);

// symbol: ?getArmorContainer@ActorEquipment@@YAAEAVSimpleContainer@@AEAVEntityContext@@@Z
MCAPI class SimpleContainer& getArmorContainer(class EntityContext&);

// symbol: ?getArmorContainer@ActorEquipment@@YAAEBVSimpleContainer@@AEBVEntityContext@@@Z
MCAPI class SimpleContainer const& getArmorContainer(class EntityContext const&);

// symbol: ?getHandContainer@ActorEquipment@@YAAEAVSimpleContainer@@AEAVEntityContext@@@Z
MCAPI class SimpleContainer& getHandContainer(class EntityContext&);

// symbol: ?getHandContainer@ActorEquipment@@YAAEBVSimpleContainer@@AEBVEntityContext@@@Z
MCAPI class SimpleContainer const& getHandContainer(class EntityContext const&);

// symbol: ?initializeActor@ActorEquipment@@YAXAEAVEntityContext@@@Z
MCAPI void initializeActor(class EntityContext&);

// symbol: ?initializePlayer@ActorEquipment@@YAXAEAVEntityContext@@AEAVPlayer@@@Z
MCAPI void initializePlayer(class EntityContext&, class Player&);
// NOLINTEND

}; // namespace ActorEquipment
