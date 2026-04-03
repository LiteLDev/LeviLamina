#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/block/GeometryComponent.h"

// auto generated forward declare list
// clang-format off
struct BlockComponentGroupDescription;
struct BlockGeometryDescription;
struct BlockMaterialInstancesDescription;
namespace SharedTypes::v1_26_10::BlockDefinition { struct BlockComponents; }
namespace SharedTypes::v1_26_10::BlockDefinition { struct MaterialInstancesComponent; }
// clang-format on

namespace BlockDefinitionDocumentTransformerUtils {
// functions
// NOLINTBEGIN
MCNAPI ::BlockMaterialInstancesDescription internalTransformMaterialInstances(
    ::SharedTypes::v1_26_10::BlockDefinition::MaterialInstancesComponent const& materialInstancesComponent
);

MCNAPI void transformBreathability(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformChestObstruction(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformCollisionBox(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformConnectionRule(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformCraftingTable(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformDestructibleByExplosion(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformDestructibleByMining(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformDestructionParticles(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformDisplayName(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformEmbeddedVisual(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformEntityFallOn(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformFallOnComponent(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformFlammable(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformFlowerPottable(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformFriction(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformGeometry(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformInteractComponent(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformItemVisual(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformLightDampening(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformLightEmission(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformLiquidDetection(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformLoot(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformMapColorComponent(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformMaterialInstances(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformMovable(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformPlacedComponent(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformPlacementFilter(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformPlayerDestroyedComponent(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformPlayerPlacingComponent(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformPrecipitationInteractions(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformQueuedTickingComponent(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformRandomOffset(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformRandomTickingComponent(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformRedstoneConductivity(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformRedstoneConsumer(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformRedstoneProducer(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformReplaceable(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const&,
    ::BlockComponentGroupDescription& blockComponentGroupDescription
);

MCNAPI void transformSelectionBox(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformStepOffComponent(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformStepOnComponent(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformSupport(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformTags(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformTick(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformTransformation(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const& blockComponents,
    ::BlockComponentGroupDescription&                                blockComponentGroupDescription
);

MCNAPI void transformUnitCube(
    ::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const&,
    ::BlockComponentGroupDescription& blockComponentGroupDescription
);

MCNAPI void visitDetailedGeometry(
    ::BlockGeometryDescription&                                                          geometryDescription,
    ::SharedTypes::v1_26_10::BlockDefinition::GeometryComponent::DetailedGeometry const& detailedGeometry
);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::std::unordered_map<
    ::std::string_view,
    ::std::function<
        void(::SharedTypes::v1_26_10::BlockDefinition::BlockComponents const&, ::BlockComponentGroupDescription&)>>&
transformers();
// NOLINTEND

} // namespace BlockDefinitionDocumentTransformerUtils
