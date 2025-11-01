#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/heightmap_projection/Type.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessor.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessorType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockSource;
namespace Util { class XXHash; }
namespace br::worldgen { struct StructureBlockInfo; }
namespace br::worldgen { struct StructurePlaceSettings; }
// clang-format on

namespace br::worldgen::processors {

class Gravity : public ::br::worldgen::StructureProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::br::worldgen::HeightmapProjection::Type> mHeightmap;
    ::ll::TypedStorage<4, 4, int> mOffset;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::br::worldgen::StructureBlockInfo> process(::IBlockSource& region, ::BlockPos, ::BlockPos, ::br::worldgen::StructureBlockInfo const& originalBlockInfo, ::br::worldgen::StructureBlockInfo&& processedBlockInfo, ::br::worldgen::StructurePlaceSettings const&) const /*override*/;

    // vIndex: 3
    virtual ::br::worldgen::StructureProcessorType type() const /*override*/;

    // vIndex: 4
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    // vIndex: 0
    virtual ~Gravity() /*override*/ = default;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>> const& TERRAIN_MATCHING();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::br::worldgen::StructureBlockInfo> $process(::IBlockSource& region, ::BlockPos, ::BlockPos, ::br::worldgen::StructureBlockInfo const& originalBlockInfo, ::br::worldgen::StructureBlockInfo&& processedBlockInfo, ::br::worldgen::StructurePlaceSettings const&) const;

    MCFOLD ::br::worldgen::StructureProcessorType $type() const;

    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
