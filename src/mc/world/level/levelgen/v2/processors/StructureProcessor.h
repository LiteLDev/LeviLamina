#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/v2/processors/StructureProcessorType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class HashedString;
class IBlockSource;
struct IntProvider;
namespace Util { class XXHash; }
namespace br::worldgen { struct StructureBlockInfo; }
namespace br::worldgen { struct StructurePlaceSettings; }
namespace br::worldgen::processors { struct RuleSet; }
// clang-format on

namespace br::worldgen {

struct StructureProcessor {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructureProcessor() = default;

    // vIndex: 1
    virtual ::std::optional<::br::worldgen::StructureBlockInfo>
    process(::IBlockSource&, ::BlockPos, ::BlockPos, ::br::worldgen::StructureBlockInfo const&, ::br::worldgen::StructureBlockInfo&& processedBlockInfo, ::br::worldgen::StructurePlaceSettings const&)
        const;

    // vIndex: 2
    virtual ::std::vector<::br::worldgen::StructureBlockInfo>
    finalize(::IBlockSource&, ::BlockPos, ::BlockPos, ::std::vector<::br::worldgen::StructureBlockInfo> const&, ::std::vector<::br::worldgen::StructureBlockInfo>&& processedBlocks, ::br::worldgen::StructurePlaceSettings const&)
        const;

    // vIndex: 3
    virtual ::br::worldgen::StructureProcessorType type() const;

    // vIndex: 4
    virtual void appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>>
    BlockIgnore(::std::vector<::std::string> const& blocks);

    MCAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>>
    Capped(::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>> delegate, ::IntProvider limit);

    MCAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>> Protected(::std::string_view tag
    );

    MCAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>>
    Protected(::HashedString const& tag);

    MCAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>>
    Rule(::std::vector<::br::worldgen::processors::RuleSet> rules);

    MCAPI static void bootstrap();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::optional<::br::worldgen::StructureBlockInfo>
    $process(::IBlockSource&, ::BlockPos, ::BlockPos, ::br::worldgen::StructureBlockInfo const&, ::br::worldgen::StructureBlockInfo&& processedBlockInfo, ::br::worldgen::StructurePlaceSettings const&)
        const;

    MCAPI ::std::vector<::br::worldgen::StructureBlockInfo>
    $finalize(::IBlockSource&, ::BlockPos, ::BlockPos, ::std::vector<::br::worldgen::StructureBlockInfo> const&, ::std::vector<::br::worldgen::StructureBlockInfo>&& processedBlocks, ::br::worldgen::StructurePlaceSettings const&)
        const;

    MCFOLD ::br::worldgen::StructureProcessorType $type() const;

    MCAPI void $appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
