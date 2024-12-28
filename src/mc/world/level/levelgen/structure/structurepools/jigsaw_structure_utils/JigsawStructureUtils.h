#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
namespace JigsawStructureUtils { struct JigsawBlockMetadataCacheHandle; }
// clang-format on

namespace JigsawStructureUtils {
// functions
// NOLINTBEGIN
MCAPI bool canAttach(
    ::JigsawStructureUtils::JigsawBlockMetadataCacheHandle cacheHandle,
    ::JigsawStructureUtils::JigsawBlockMetadataCacheHandle rhsCacheHandle,
    ::Rotation                                             rotation,
    ::Rotation                                             rhsRotation
);

MCAPI uchar getFrontFacing(::JigsawStructureUtils::JigsawBlockMetadataCacheHandle cacheHandle, ::Rotation rotation);
// NOLINTEND

} // namespace JigsawStructureUtils
