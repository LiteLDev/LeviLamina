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
    MCNAPI_S void _checkForMissingGeometryComponent(::Block& block);

    MCNAPI void _finalizeBlockTriggerComponents(::Block& block);

    MCNAPI_C void _finalizeGeometryComponentForRendering(
        ::BlockComponentFinalizerForRendererContext& finalizerContext,
        ::Block&                                     block
    );

    MCNAPI_C bool _validatePotentialFullBlockGeometry(::Block const& block);

    MCNAPI void addRemainingComponents(::Block& block);

    MCNAPI void finalizeComponentData(::Block& block);

    MCNAPI_C void
    finalizeComponentDataForRendering(::Block& block, ::BlockComponentFinalizerForRendererContext& finalizerContext);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _addMissingVoxelShapesComponent(::Block& block);
    // NOLINTEND
};
