#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
struct BlockComponentFinalizerForRendererContext;
// clang-format on

class BlockComponentStorageFinalizer {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI_S void _checkForMissingGeometryComponent(::Block& block);

    MCAPI void _finalizeBlockTriggerComponents(::Block& block);

    MCAPI_C void _finalizeGeometryComponentForRendering(
        ::BlockComponentFinalizerForRendererContext& finalizerContext,
        ::Block&                                     block
    );

    MCAPI_C bool _validatePotentialFullBlockGeometry(::Block const& block);

    MCAPI void addRemainingComponents(::Block& block);

    MCAPI void finalizeComponentData(::Block& block);

    MCAPI_C void
    finalizeComponentDataForRendering(::Block& block, ::BlockComponentFinalizerForRendererContext& finalizerContext);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _addMissingVoxelShapesComponent(::Block& block);
    // NOLINTEND
};
