#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class BlockComponentStorageFinalizer {
public:
#ifdef LL_PLAT_C
    /// Settles the collision and selection boxes, then hands the transformation component to
    /// the redstone producer component when the block has one.
    LLAPI void finalizeComponentData(::Block& block);
#endif

    // member functions
    // NOLINTBEGIN
    MCAPI void _checkForCollisionComponentBoxDuplication(::Block& block);

#ifdef LL_PLAT_C
    MCAPI void _checkForDuplicatingBlockGeometryForPartVisibility(::Block& block);
#endif

    MCAPI void _checkForMissingCullingComponentForMaterialOverride(::Block& block);

    MCAPI void _checkForMissingGeometryComponent(::Block& block);

    MCAPI void _checkForSelectionBoxComponentDuplication(::Block& block);

#ifdef LL_PLAT_S
    MCAPI void _finalizeBlockTriggerComponents(::Block& block);
#endif

    MCAPI void _finalizeCollisionBoxComponent(::Block& block);

    MCAPI void _finalizeSelectionBoxComponent(::Block& block);

    MCAPI void addRemainingComponents(::Block& block);

#ifdef LL_PLAT_S
    MCAPI void finalizeComponentData(::Block& block);
#endif
    // NOLINTEND
};
