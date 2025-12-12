#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
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

class ProtectedBlock : public ::br::worldgen::StructureProcessor {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString> mCannotReplace;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::br::worldgen::StructureBlockInfo> process(
        ::IBlockSource& region,
        ::BlockPos,
        ::BlockPos,
        ::br::worldgen::StructureBlockInfo const&,
        ::br::worldgen::StructureBlockInfo&& processedBlockInfo,
        ::br::worldgen::StructurePlaceSettings const&
    ) const /*override*/;

    virtual ::br::worldgen::StructureProcessorType type() const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    virtual ~ProtectedBlock() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::br::worldgen::processors::ProtectedBlock from(::HashedString cannotReplace);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<::br::worldgen::StructureBlockInfo> $process(
        ::IBlockSource& region,
        ::BlockPos,
        ::BlockPos,
        ::br::worldgen::StructureBlockInfo const&,
        ::br::worldgen::StructureBlockInfo&& processedBlockInfo,
        ::br::worldgen::StructurePlaceSettings const&
    ) const;

    MCNAPI ::br::worldgen::StructureProcessorType $type() const;

    MCNAPI void $appendMetadataKey(::Util::XXHash& hash) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen::processors
