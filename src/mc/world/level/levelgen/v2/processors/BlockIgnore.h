#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/StructureProcessor.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessorType.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
class BlockPos;
class HashedString;
class IBlockSource;
namespace Util { class XXHash; }
namespace br::worldgen { struct StructureBlockInfo; }
namespace br::worldgen { struct StructurePlaceSettings; }
// clang-format on

namespace br::worldgen::processors {

class BlockIgnore : public ::br::worldgen::StructureProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockLegacy const*>> mToIgnore;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::br::worldgen::StructureBlockInfo>
    process(::IBlockSource&, ::BlockPos, ::BlockPos, ::br::worldgen::StructureBlockInfo const&, ::br::worldgen::StructureBlockInfo&& processedBlockInfo, ::br::worldgen::StructurePlaceSettings const&)
        const /*override*/;

    // vIndex: 3
    virtual ::br::worldgen::StructureProcessorType type() const /*override*/;

    // vIndex: 4
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    // vIndex: 0
    virtual ~BlockIgnore() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bootstrap();

    MCAPI static ::br::worldgen::processors::BlockIgnore from(::std::vector<::HashedString> const& toIgnore);

    MCAPI static ::br::worldgen::processors::BlockIgnore from(::std::vector<::std::string> const& toIgnore);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>> const& STRUCTURE_BLOCK();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::br::worldgen::StructureBlockInfo>
    $process(::IBlockSource&, ::BlockPos, ::BlockPos, ::br::worldgen::StructureBlockInfo const&, ::br::worldgen::StructureBlockInfo&& processedBlockInfo, ::br::worldgen::StructurePlaceSettings const&)
        const;

    MCFOLD ::br::worldgen::StructureProcessorType $type() const;

    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors
