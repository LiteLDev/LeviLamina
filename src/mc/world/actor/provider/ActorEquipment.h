#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class ItemStack;
class Player;
class SimpleContainer;
// clang-format on

namespace ActorEquipment {
// functions
// NOLINTBEGIN
MCAPI ::std::vector<::ItemStack const*> getAllArmor(::EntityContext const& provider);

MCFOLD ::SimpleContainer const& getArmorContainer(::EntityContext const& provider);

MCFOLD ::SimpleContainer& getArmorContainer(::EntityContext& provider);

MCFOLD ::SimpleContainer const& getHandContainer(::EntityContext const& provider);

MCFOLD ::SimpleContainer& getHandContainer(::EntityContext& provider);

MCAPI void initializeActor(::EntityContext& provider);

MCAPI void initializePlayer(::EntityContext& provider, ::Player& player);
// NOLINTEND

} // namespace ActorEquipment
