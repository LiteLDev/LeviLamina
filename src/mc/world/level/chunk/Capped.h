#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/StructureProcessor.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessorType.h"
#include "mc/world/level/levelgen/v2/providers/IntProvider.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockSource;
namespace Util { class XXHash; }
namespace br::worldgen { struct StructureBlockInfo; }
namespace br::worldgen { struct StructurePlaceSettings; }
// clang-format on

namespace br::worldgen::processors {

class Capped : public ::br::worldgen::StructureProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor const>>> mDelegate;
    ::ll::TypedStorage<4, 32, ::IntProvider>                                                                mLimit;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::vector<::br::worldgen::StructureBlockInfo> finalize(
        ::IBlockSource&                                          region,
        ::BlockPos                                               pos,
        ::BlockPos                                               structurePos,
        ::std::vector<::br::worldgen::StructureBlockInfo> const& originalBlocks,
        ::std::vector<::br::worldgen::StructureBlockInfo>&&      processedBlocks,
        ::br::worldgen::StructurePlaceSettings const&            settings
    ) const /*override*/;

    virtual ::br::worldgen::StructureProcessorType type() const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    virtual ~Capped() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::br::worldgen::processors::Capped
    from(::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>> delegate, ::IntProvider limit);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::vector<::br::worldgen::StructureBlockInfo> $finalize(
        ::IBlockSource&                                          region,
        ::BlockPos                                               pos,
        ::BlockPos                                               structurePos,
        ::std::vector<::br::worldgen::StructureBlockInfo> const& originalBlocks,
        ::std::vector<::br::worldgen::StructureBlockInfo>&&      processedBlocks,
        ::br::worldgen::StructurePlaceSettings const&            settings
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
