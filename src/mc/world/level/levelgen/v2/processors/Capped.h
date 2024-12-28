#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/StructureProcessor.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessorType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class IBlockSource;
struct IntProvider;
namespace Util { class XXHash; }
namespace br::worldgen { struct StructureBlockInfo; }
namespace br::worldgen { struct StructurePlaceSettings; }
// clang-format on

namespace br::worldgen::processors {

class Capped : public ::br::worldgen::StructureProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk54681c;
    ::ll::UntypedStorage<4, 32> mUnkb66182;
    // NOLINTEND

public:
    // prevent constructor by default
    Capped& operator=(Capped const&);
    Capped(Capped const&);
    Capped();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::std::vector<::br::worldgen::StructureBlockInfo> finalize(
        ::IBlockSource&                                          region,
        ::BlockPos                                               pos,
        ::BlockPos                                               structurePos,
        ::std::vector<::br::worldgen::StructureBlockInfo> const& originalBlocks,
        ::std::vector<::br::worldgen::StructureBlockInfo>&&      processedBlocks,
        ::br::worldgen::StructurePlaceSettings const&            settings
    ) const /*override*/;

    // vIndex: 3
    virtual ::br::worldgen::StructureProcessorType type() const /*override*/;

    // vIndex: 4
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    // vIndex: 0
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

    MCAPI ::br::worldgen::StructureProcessorType $type() const;

    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors
