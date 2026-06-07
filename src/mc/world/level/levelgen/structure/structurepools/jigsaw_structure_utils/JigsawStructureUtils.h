#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Loader.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolElementType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BoundingBox;
class CompoundTag;
namespace JigsawStructureUtils { struct JigsawBlockMetadataCacheHandle; }
namespace SharedTypes::v1_21_80 { class JigsawBlockMetadata; }
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadataFile; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JigsawStructureUtils {
// functions
// NOLINTBEGIN
MCAPI bool canAttach(
    ::JigsawStructureUtils::JigsawBlockMetadataCacheHandle cacheHandle,
    ::JigsawStructureUtils::JigsawBlockMetadataCacheHandle rhsCacheHandle,
    ::Rotation                                             rotation,
    ::Rotation                                             rhsRotation,
    bool                                                   ignoreNameCheck
);

MCAPI ::Puv::
    Loader<::SharedTypes::v1_21_80::JigsawStructureMetadataFile, ::SharedTypes::v1_21_80::JigsawStructureMetadataFile>
    createMetadataLoader(::cereal::ReflectionCtx const& ctx);

MCAPI ::BoundingBox getBoundingBox(::BlockPos const& size, ::BlockPos const& offset, ::Rotation rotation);

MCAPI uchar getFrontFacing(::JigsawStructureUtils::JigsawBlockMetadataCacheHandle cacheHandle, ::Rotation rotation);

MCAPI ::BlockPos getPosition(
    ::SharedTypes::v1_21_80::JigsawBlockMetadata const& metadata,
    ::BlockPos const&                                   offset,
    ::Rotation                                          rotation
);

MCAPI ::std::string getSerializationIdString(::CompoundTag const& blockIdTag);

MCAPI ::BlockPos getSize(::BlockPos const& size, ::Rotation rotation);

MCAPI bool ignoresJigsawBlockNameCheck(::StructurePoolElementType elementType);
// NOLINTEND

} // namespace JigsawStructureUtils
