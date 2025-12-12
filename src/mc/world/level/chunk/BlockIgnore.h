#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessor.h"
#include "mc/world/level/levelgen/v2/processors/StructureProcessorType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockType;
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
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockType const*>> mToIgnore;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::br::worldgen::StructureBlockInfo> process(
        ::IBlockSource&,
        ::BlockPos,
        ::BlockPos,
        ::br::worldgen::StructureBlockInfo const&,
        ::br::worldgen::StructureBlockInfo&& processedBlockInfo,
        ::br::worldgen::StructurePlaceSettings const&
    ) const /*override*/;

    virtual ::br::worldgen::StructureProcessorType type() const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    virtual ~BlockIgnore() /*override*/;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bootstrap();

    MCNAPI static ::br::worldgen::processors::BlockIgnore
    from(::std::vector<::SharedTypes::Reference<0>> const& toIgnore);

    MCNAPI static ::br::worldgen::processors::BlockIgnore from(::std::vector<::HashedString> const& toIgnore);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>> const& STRUCTURE_BLOCK();
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
        ::IBlockSource&,
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
