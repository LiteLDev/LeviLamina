#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/Loader.h"
#include "mc/versionless/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class CompoundTag;
namespace JigsawStructureUtils { struct JigsawBlockMetadataCacheHandle; }
namespace SharedTypes::v1_21_80 { class JigsawBlockMetadata; }
namespace SharedTypes::v1_21_80 { struct JigsawStructureMetadataFile; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace JigsawStructureUtils {
// functions
// NOLINTBEGIN
MCAPI bool canAttach(::JigsawStructureUtils::JigsawBlockMetadataCacheHandle cacheHandle, ::JigsawStructureUtils::JigsawBlockMetadataCacheHandle rhsCacheHandle, ::Rotation rotation, ::Rotation rhsRotation);

MCAPI ::Puv::Loader<::SharedTypes::v1_21_80::JigsawStructureMetadataFile> createMetadataLoader(::cereal::ReflectionCtx const& ctx);

MCAPI ::BlockPos getPosition(::SharedTypes::v1_21_80::JigsawBlockMetadata const& metadata, ::BlockPos const& offset, ::Rotation rotation);

MCAPI ::std::string getSerializationIdString(::CompoundTag const& blockIdTag);
// NOLINTEND

}
