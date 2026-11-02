#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
namespace JigsawStructureUtils { struct JigsawBlockMetadataCacheHandle; }
// clang-format on

namespace JigsawStructureUtils {
// functions
// NOLINTBEGIN
MCNAPI bool canAttach(
    ::JigsawStructureUtils::JigsawBlockMetadataCacheHandle cacheHandle,
    ::JigsawStructureUtils::JigsawBlockMetadataCacheHandle rhsCacheHandle,
    ::Rotation                                             rotation,
    ::Rotation                                             rhsRotation,
    bool                                                   ignoreNameCheck
);

MCNAPI uchar getFrontFacing(::JigsawStructureUtils::JigsawBlockMetadataCacheHandle cacheHandle, ::Rotation rotation);

MCNAPI ::std::string getSerializationIdString(::CompoundTag const& blockIdTag);
// NOLINTEND

} // namespace JigsawStructureUtils
