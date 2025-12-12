#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/util/Reference.h"
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
    virtual ~StructureProcessor() = default;

    virtual ::std::optional<::br::worldgen::StructureBlockInfo> process(
        ::IBlockSource&,
        ::BlockPos,
        ::BlockPos,
        ::br::worldgen::StructureBlockInfo const&,
        ::br::worldgen::StructureBlockInfo&& processedBlockInfo,
        ::br::worldgen::StructurePlaceSettings const&
    ) const;

    virtual ::std::vector<::br::worldgen::StructureBlockInfo> finalize(
        ::IBlockSource&,
        ::BlockPos,
        ::BlockPos,
        ::std::vector<::br::worldgen::StructureBlockInfo> const&,
        ::std::vector<::br::worldgen::StructureBlockInfo>&& processedBlocks,
        ::br::worldgen::StructurePlaceSettings const&
    ) const;

    virtual ::br::worldgen::StructureProcessorType type() const;

    virtual void appendMetadataKey(::Util::XXHash&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>>
    BlockIgnore(::std::vector<::SharedTypes::Reference<0>> const& blocks);

    MCNAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>>
    Capped(::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>> delegate, ::IntProvider limit);

    MCNAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>>
    Protected(::HashedString const& tag);

    MCNAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>>
    Protected(::std::string_view tag);

    MCNAPI static ::gsl::not_null<::std::shared_ptr<::br::worldgen::StructureProcessor>>
    Rule(::std::vector<::br::worldgen::processors::RuleSet> rules);

    MCNAPI static void bootstrap();
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

    MCNAPI ::std::vector<::br::worldgen::StructureBlockInfo> $finalize(
        ::IBlockSource&,
        ::BlockPos,
        ::BlockPos,
        ::std::vector<::br::worldgen::StructureBlockInfo> const&,
        ::std::vector<::br::worldgen::StructureBlockInfo>&& processedBlocks,
        ::br::worldgen::StructurePlaceSettings const&
    ) const;

    MCNAPI ::br::worldgen::StructureProcessorType $type() const;

    MCNAPI void $appendMetadataKey(::Util::XXHash&) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace br::worldgen
