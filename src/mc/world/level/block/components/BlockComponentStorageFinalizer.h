#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
// clang-format on

class BlockComponentStorageFinalizer {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _checkForCollisionComponentBoxDuplication(::Block& block);

#ifdef LL_PLAT_C
    MCNAPI void _checkForDuplicatingBlockGeometryForPartVisibility(::Block& block);
#endif

    MCNAPI void _checkForMissingCullingComponentForMaterialOverride(::Block& block);

    MCNAPI void _checkForMissingGeometryComponent(::Block& block);

    MCNAPI void _checkForSelectionBoxComponentDuplication(::Block& block);

    MCNAPI void _finalizeCollisionBoxComponent(::Block& block);

    MCNAPI void _finalizeSelectionBoxComponent(::Block& block);

    MCNAPI void addRemainingComponents(::Block& block);
    // NOLINTEND
};
