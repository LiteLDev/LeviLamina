#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Loader.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
namespace JigsawStructureUtils { struct JigsawBlockMetadataCacheHandle; }
namespace SharedTypes::v1_21_50 { class JigsawBlockMetadata; }
namespace SharedTypes::v1_21_50 { struct JigsawStructureMetadataFile; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JigsawStructureUtils {
// functions
// NOLINTBEGIN
MCNAPI bool canAttach(
    ::JigsawStructureUtils::JigsawBlockMetadataCacheHandle cacheHandle,
    ::JigsawStructureUtils::JigsawBlockMetadataCacheHandle rhsCacheHandle,
    ::Rotation                                             rotation,
    ::Rotation                                             rhsRotation
);

MCNAPI ::Puv::Loader<::SharedTypes::v1_21_50::JigsawStructureMetadataFile>
createMetadataLoader(::cereal::ReflectionCtx const& ctx);

MCNAPI ::BlockPos getPosition(
    ::SharedTypes::v1_21_50::JigsawBlockMetadata const& metadata,
    ::BlockPos const&                                   offset,
    ::Rotation                                          rotation
);
// NOLINTEND

} // namespace JigsawStructureUtils
