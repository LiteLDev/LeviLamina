#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/threading/Mutex.h"
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class HashedString;
class IRandom;
class Randomize;
namespace Bedrock::Threading { class Mutex; }
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockPredicateCappedRandomBlockReplacement : public ::IStructurePoolBlockPredicate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint const>                                        mMaximumAmount;
    ::ll::TypedStorage<8, 16, ::std::map<::HashedString, ::HashedString> const> mBlockMappings;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockPos>>                        mCandidatePositions;
    ::ll::TypedStorage<8, 80, ::Bedrock::Threading::Mutex>                      mCandidatePositionsLock;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockPredicateCappedRandomBlockReplacement();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool test(::Block const& block, ::Randomize&) const /*override*/;

    virtual bool test(::BlockPos const& worldPos, ::BlockPos const&, ::Randomize&) const /*override*/;

    virtual bool finalize(::BlockSource& region, ::IRandom& random) /*override*/;

    virtual ::StructurePoolBlockPredicateType getType() const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    virtual bool operator==(::StructurePoolBlockPredicateCappedRandomBlockReplacement const& other) const;

    virtual bool operator!=(::StructurePoolBlockPredicateCappedRandomBlockReplacement const& other) const;

    virtual ~StructurePoolBlockPredicateCappedRandomBlockReplacement() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructurePoolBlockPredicateCappedRandomBlockReplacement(
        ::std::map<::HashedString, ::HashedString> const& blockMappings,
        uint                                              maximumAmount
    );

    MCNAPI bool _finalize(::BlockSource& region, ::IRandom& random, ::std::function<void(::BlockPos&)> applyToBlocks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::map<::HashedString, ::HashedString> const& blockMappings, uint maximumAmount);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $test(::Block const& block, ::Randomize&) const;

    MCNAPI bool $test(::BlockPos const& worldPos, ::BlockPos const&, ::Randomize&) const;

    MCNAPI bool $finalize(::BlockSource& region, ::IRandom& random);

    MCNAPI ::StructurePoolBlockPredicateType $getType() const;

    MCNAPI void $appendMetadataKey(::Util::XXHash& hash) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
