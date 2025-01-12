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
// clang-format on

class StructurePoolBlockRule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd70255;
    ::ll::UntypedStorage<8, 8> mUnkab6020;
    ::ll::UntypedStorage<8, 8> mUnk1ea1d2;
    ::ll::UntypedStorage<8, 8> mUnkecaf8e;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockRule& operator=(StructurePoolBlockRule const&);
    StructurePoolBlockRule(StructurePoolBlockRule const&);
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

    MCFOLD bool finalizeRule(::BlockSource& region, ::IRandom& random);

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
