#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/StructureProcessor.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessorType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
class IBlockSource;
namespace Util { class XXHash; }
namespace br::worldgen { struct StructureBlockInfo; }
namespace br::worldgen { struct StructurePlaceSettings; }
// clang-format on

namespace br::worldgen::processors {

class ProtectedBlock : public ::br::worldgen::StructureProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk7ddcf8;
    // NOLINTEND

public:
    // prevent constructor by default
    ProtectedBlock& operator=(ProtectedBlock const&);
    ProtectedBlock(ProtectedBlock const&);
    ProtectedBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::std::optional<::br::worldgen::StructureBlockInfo>
    process(::IBlockSource& region, ::BlockPos, ::BlockPos, ::br::worldgen::StructureBlockInfo const&, ::br::worldgen::StructureBlockInfo&& processedBlockInfo, ::br::worldgen::StructurePlaceSettings const&)
        const /*override*/;

    // vIndex: 3
    virtual ::br::worldgen::StructureProcessorType type() const /*override*/;

    // vIndex: 4
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    // vIndex: 0
    virtual ~ProtectedBlock() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::br::worldgen::processors::ProtectedBlock from(::HashedString cannotReplace);
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
    $process(::IBlockSource& region, ::BlockPos, ::BlockPos, ::br::worldgen::StructureBlockInfo const&, ::br::worldgen::StructureBlockInfo&& processedBlockInfo, ::br::worldgen::StructurePlaceSettings const&)
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
