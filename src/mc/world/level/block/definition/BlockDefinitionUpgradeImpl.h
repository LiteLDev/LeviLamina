#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct BlockComponentDescription;
struct BlockGeometryDescription;
struct BlockMaterialInstancesDescription;
namespace SharedTypes::v1_26_10::BlockDefinition { struct BlockComponents; }
namespace SharedTypes::v1_26_10::BlockDefinition { struct GeometryComponent; }
namespace SharedTypes::v1_26_10::BlockDefinition { struct MaterialInstancesComponent; }
// clang-format on

namespace BlockDefinitionUpgradeImpl {
// functions
// NOLINTBEGIN
MCAPI ::SharedTypes::v1_26_10::BlockDefinition::GeometryComponent
internalTransformGeometry(::BlockGeometryDescription const& description);

MCAPI ::SharedTypes::v1_26_10::BlockDefinition::MaterialInstancesComponent
internalTransformMaterialInstances(::BlockMaterialInstancesDescription const& description);

MCAPI void transformBreathability(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformChestObstruction(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformCollisionBox(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformConnectionRule(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformCraftingTable(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformDestructibleByExplosion(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformDestructibleByMining(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformDestructionParticles(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformDisplayName(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformEmbeddedVisual(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformEntityFallOn(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformFallOnComponent(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformFlammable(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformFlowerPottable(
    ::BlockComponentDescription const&,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformFriction(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformGeometry(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformInteractComponent(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformItemVisual(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformLightDampening(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformLightEmission(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformLiquidDetection(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformLoot(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformMapColor(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformMaterialInstance(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformMovable(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformPlacedComponent(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformPlacementFilter(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformPlayerDestroyedComponent(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformPlayerPlacingComponent(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformPrecipitationInteractions(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformQueuedTickingComponent(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformRandomOffset(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformRandomTickingComponent(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformRedstoneConductivity(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformRedstoneConsumer(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformRedstoneProducer(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformReplaceable(
    ::BlockComponentDescription const&,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformSelectionBox(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformStepOffComponent(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformStepOnComponent(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformSupport(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformTick(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformTransformation(
    ::BlockComponentDescription const&                         blockComponentDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);

MCAPI void transformUnitCube(
    ::BlockComponentDescription const&,
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents& blockComponents
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI ::std::unordered_map<
    ::std::string_view,
    ::std::function<
        void(::BlockComponentDescription const&, ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents&)>>&
transformers();
// NOLINTEND

} // namespace BlockDefinitionUpgradeImpl
