#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class IRandom;
class IStructurePoolBlockPredicate;
class Random;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockRule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IStructurePoolBlockPredicate> const> mSourcePredicate;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IStructurePoolBlockPredicate> const> mTargetPredicate;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IStructurePoolBlockPredicate> const> mPositionPredicate;
    ::ll::TypedStorage<8, 8, ::Block const*>                                          mResultBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockRule();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructurePoolBlockRule(
        ::std::unique_ptr<::IStructurePoolBlockPredicate>&& sourceBlockPredicate,
        ::std::unique_ptr<::IStructurePoolBlockPredicate>&& targetBlockPredicate,
        ::Block const*                                      resultBlock
    );

    MCAPI StructurePoolBlockRule(
        ::std::unique_ptr<::IStructurePoolBlockPredicate>&& sourceBlockPredicate,
        ::std::unique_ptr<::IStructurePoolBlockPredicate>&& targetBlockPredicate,
        ::std::unique_ptr<::IStructurePoolBlockPredicate>&& distancePredicate,
        ::Block const*                                      resultBlock
    );

    MCAPI void appendMetadataKey(::Util::XXHash& hash) const;

    MCAPI bool finalizeRule(::BlockSource& region, ::IRandom& random);

    MCAPI bool processRule(
        ::Block const&    sourceBlock,
        ::Block const&    targetBlock,
        ::Random&         random,
        ::Block const*&   outputBlock,
        ::BlockPos const& worldPos,
        ::BlockPos const& refPos
    ) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::unique_ptr<::IStructurePoolBlockPredicate>&& sourceBlockPredicate,
        ::std::unique_ptr<::IStructurePoolBlockPredicate>&& targetBlockPredicate,
        ::Block const*                                      resultBlock
    );

    MCAPI void* $ctor(
        ::std::unique_ptr<::IStructurePoolBlockPredicate>&& sourceBlockPredicate,
        ::std::unique_ptr<::IStructurePoolBlockPredicate>&& targetBlockPredicate,
        ::std::unique_ptr<::IStructurePoolBlockPredicate>&& distancePredicate,
        ::Block const*                                      resultBlock
    );
    // NOLINTEND
};
