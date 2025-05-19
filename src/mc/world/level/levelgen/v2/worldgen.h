#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class BoundingBox;
class IRandom;
class IStructureTemplate;
class JigsawStructureRegistry;
class StructurePoolElement;
class StructureTemplatePool;
namespace JigsawStructureUtils { class MetadataCache; }
namespace SharedTypes::v1_21_50 { class JigsawBlockMetadata; }
namespace SharedTypes::v1_21_50 { struct JigsawStructureMetadata; }
namespace br::worldgen { struct StructureBlockInfo; }
namespace br::worldgen { struct StructurePlaceSettings; }
namespace br::worldgen { struct StructureTemplateBlockPalette; }
// clang-format on

namespace br::worldgen {
// functions
// NOLINTBEGIN
MCNAPI int expansionHackCalc(
    ::JigsawStructureUtils::MetadataCache&                             cache,
    ::BlockPos const&                                                  offset,
    ::Rotation                                                         rotation,
    ::BoundingBox const&                                               box,
    ::std::vector<::SharedTypes::v1_21_50::JigsawBlockMetadata> const& targetJigsaws,
    ::std::vector<uint64> const&                                       targetJigsawIndexes,
    ::JigsawStructureRegistry const&                                   pools
);

MCNAPI void expansionHackEval(int expandTo, ::BoundingBox& box);

MCNAPI bool isEmptyPool(::StructureTemplatePool const& pool);

MCNAPI int noopCalc(
    ::JigsawStructureUtils::MetadataCache&,
    ::BlockPos const&,
    ::Rotation,
    ::BoundingBox const&,
    ::std::vector<::SharedTypes::v1_21_50::JigsawBlockMetadata> const&,
    ::std::vector<uint64> const&,
    ::JigsawStructureRegistry const&
);

MCNAPI void noopEval(int, ::BoundingBox&);

MCNAPI bool placeInWorld(
    ::IStructureTemplate const&                   tmpl,
    ::BlockSource&                                region,
    ::BlockPos                                    position,
    ::BlockPos                                    structureOrigin,
    ::br::worldgen::StructurePlaceSettings const& settings,
    ::IRandom&                                    random
);

MCNAPI ::std::vector<::br::worldgen::StructureBlockInfo> processBlockInfos(
    ::BlockSource&                                region,
    ::BlockPos                                    position,
    ::BlockPos                                    structureOrigin,
    ::br::worldgen::StructurePlaceSettings const& settings,
    ::br::worldgen::StructureTemplateBlockPalette sourceBlockInfos
);

MCNAPI ::std::optional<::BlockPos> randomNamedJigsawLocation(
    ::StructurePoolElement const& source,
    ::std::string_view            name,
    ::BlockPos                    pos,
    ::Rotation                    rot,
    ::IRandom&                    random
);

MCNAPI ::std::vector<uint64> shuffledJigsawBlockId(::StructureTemplatePool const& pool, ::IRandom& random);

MCNAPI ::std::vector<uint64>
shuffledJigsawBlockIndexes(::SharedTypes::v1_21_50::JigsawStructureMetadata const& metadata, ::IRandom& random);
// NOLINTEND

} // namespace br::worldgen
