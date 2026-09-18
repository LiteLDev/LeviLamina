#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class BlockComponentStorageFinalizer {
public:
    /// Settles the collision and selection boxes, then hands the transformation component to
    /// the redstone producer component when the block has one.
    LLAPI void finalizeComponentData(::Block& block);

    // member functions
    // NOLINTBEGIN
    MCAPI void _checkForCollisionComponentBoxDuplication(::Block& block);

#ifdef LL_PLAT_C
    MCAPI void _checkForDuplicatingBlockGeometryForPartVisibility(::Block& block);
#endif

    MCAPI void _checkForMissingCullingComponentForMaterialOverride(::Block& block);

    MCAPI void _checkForMissingGeometryComponent(::Block& block);

    MCAPI void _checkForSelectionBoxComponentDuplication(::Block& block);

    MCAPI void _finalizeCollisionBoxComponent(::Block& block);

    MCAPI void _finalizeSelectionBoxComponent(::Block& block);

    MCAPI void addRemainingComponents(::Block& block);
    // NOLINTEND
};
