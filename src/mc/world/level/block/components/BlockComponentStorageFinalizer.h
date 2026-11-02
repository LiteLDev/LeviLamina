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
    MCNAPI void _checkForCollisionComponentBoxDuplication(::Block& block);

#ifdef LL_PLAT_C
    MCNAPI void _checkForDuplicatingBlockGeometryForPartVisibility(::Block& block);
#endif

    MCNAPI void _checkForMissingCullingComponentForMaterialOverride(::Block& block);

    MCNAPI void _checkForMissingGeometryComponent(::Block& block);

    MCNAPI void _checkForSelectionBoxComponentDuplication(::Block& block);

    MCAPI void _finalizeCollisionBoxComponent(::Block& block);

    MCAPI void _finalizeSelectionBoxComponent(::Block& block);

    MCNAPI void addRemainingComponents(::Block& block);
    // NOLINTEND
};
