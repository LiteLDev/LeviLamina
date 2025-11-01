#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IStructurePoolBlockPredicate;
class Random;
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
    // member functions
    // NOLINTBEGIN
    MCAPI bool processRule(
        ::Block const&    sourceBlock,
        ::Block const&    targetBlock,
        ::Random&         random,
        ::Block const*&   outputBlock,
        ::BlockPos const& worldPos,
        ::BlockPos const& refPos
    ) const;
    // NOLINTEND
};
