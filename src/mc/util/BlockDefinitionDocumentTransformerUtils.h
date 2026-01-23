#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_110/block/GeometryComponent.h"

// auto generated forward declare list
// clang-format off
struct BlockComponentGroupDescription;
struct BlockGeometryDescription;
namespace SharedTypes::v1_21_110::BlockDefinition { struct BlockComponents; }
// clang-format on

namespace BlockDefinitionDocumentTransformerUtils {
// functions
// NOLINTBEGIN
MCNAPI void transformCraftingTable(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformDestructibleByExplosion(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformDestructibleByMining(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformDestructionParticles(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformDisplayName(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformEntityFallOn(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformFlammable(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformFlowerPottable(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformFriction(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformGeometry(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformLightDampening(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformLightEmission(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformLoot(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformMapColorComponent(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformMaterialInstances(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformMovable(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformRedstoneConductivity(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformRedstoneProducer(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformSupport(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void transformTags(
    ::SharedTypes::v1_21_110::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                 blockComponentGroupDescription
);

MCNAPI void visitDetailedGeometry(
    ::BlockGeometryDescription&                                                           geometryDescription,
    ::SharedTypes::v1_21_110::BlockDefinition::GeometryComponent::DetailedGeometry const& detailedGeometry
);
// NOLINTEND

} // namespace BlockDefinitionDocumentTransformerUtils
