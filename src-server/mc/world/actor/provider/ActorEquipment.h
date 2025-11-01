#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityContext;
class Player;
class SimpleContainer;
// clang-format on

namespace ActorEquipment {
// functions
// NOLINTBEGIN
MCFOLD ::SimpleContainer const& getArmorContainer(::EntityContext const& provider);

MCAPI ::SimpleContainer& getArmorContainer(::EntityContext&);

MCAPI ::SimpleContainer& getHandContainer(::EntityContext& provider);

MCAPI void initializeActor(::EntityContext& provider);

MCAPI void initializePlayer(::EntityContext& provider, ::Player& player);
// NOLINTEND

}
