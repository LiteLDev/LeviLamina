#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockComponentDescription;
namespace SharedTypes::v1_21_110::BlockDefinition { struct BlockComponents; }
// clang-format on

namespace BlockDefinitionUpgradeImpl {
// functions
// NOLINTBEGIN
MCAPI void transformCraftingTable(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformDestructibleByExplosion(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformDestructibleByMining(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformDestructionParticles(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformDisplayName(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformEntityFallOn(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformFlammable(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformFlowerPottable(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformFriction(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformGeometry(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformLightDampening(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformLightEmission(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformLoot(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformMapColor(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformMaterialInstance(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformMovable(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformRedstoneConductivity(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformRedstoneProducer(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformSupport(
    ::BlockComponentDescription const&                          blockComponentDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents& blockComponents
);
// NOLINTEND

} // namespace BlockDefinitionUpgradeImpl
