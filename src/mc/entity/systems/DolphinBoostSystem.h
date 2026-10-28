#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/EntityModifier.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class EntitySystems;
class LocalSpatialEntityFetcher;
class StrictEntityContext;
struct AABBShapeComponent;
struct DimensionTypeComponent;
struct DolphinFlagComponent;
struct IsNearDolphinsFlagComponent;
struct LocalSpatialEntityFetcherFactoryComponent;
// clang-format on

namespace DolphinBoostSystem {
// functions
// NOLINTBEGIN
MCAPI void _tickFindDolphins(
    ::StrictEntityContext const&                                             context,
    ::AABBShapeComponent const&                                              aabbShapeComponent,
    ::DimensionTypeComponent const&                                          dimensionComponent,
    ::ViewT<::StrictEntityContext, ::Include<::DolphinFlagComponent>> const& dolphins,
    ::EntityModifier<::IsNearDolphinsFlagComponent> const&                   modifier,
    ::LocalSpatialEntityFetcherFactoryComponent&                             spatialEntityFetcherFactory,
    ::LocalSpatialEntityFetcher&                                             spatialEntityFetcher
);

MCAPI void registerSystems(::EntitySystems& systemRegistry, bool isClientSide);
// NOLINTEND

} // namespace DolphinBoostSystem
