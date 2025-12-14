#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/StructureProcessor.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessorType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockSource;
namespace Util { class XXHash; }
namespace br::worldgen { struct StructureBlockInfo; }
namespace br::worldgen { struct StructurePlaceSettings; }
namespace br::worldgen::processors { struct RuleSet; }
// clang-format on

namespace br::worldgen::processors {

class Rule : public ::br::worldgen::StructureProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::br::worldgen::processors::RuleSet>> mRules;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::br::worldgen::StructureBlockInfo> process(
        ::IBlockSource& region,
        ::BlockPos,
        ::BlockPos                                structurePos,
        ::br::worldgen::StructureBlockInfo const& originalBlockInfo,
        ::br::worldgen::StructureBlockInfo&&      processedBlockInfo,
        ::br::worldgen::StructurePlaceSettings const&
    ) const /*override*/;

    virtual ::br::worldgen::StructureProcessorType type() const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    virtual ~Rule() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::br::worldgen::StructureBlockInfo> $process(
        ::IBlockSource& region,
        ::BlockPos,
        ::BlockPos                                structurePos,
        ::br::worldgen::StructureBlockInfo const& originalBlockInfo,
        ::br::worldgen::StructureBlockInfo&&      processedBlockInfo,
        ::br::worldgen::StructurePlaceSettings const&
    ) const;

    MCFOLD ::br::worldgen::StructureProcessorType $type() const;

    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors
