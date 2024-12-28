#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
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
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockPredicateCappedRandomBlockReplacement : public ::IStructurePoolBlockPredicate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk97713f;
    ::ll::UntypedStorage<8, 16> mUnk122d19;
    ::ll::UntypedStorage<8, 24> mUnk786fce;
    ::ll::UntypedStorage<8, 80> mUnk962793;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockPredicateCappedRandomBlockReplacement&
    operator=(StructurePoolBlockPredicateCappedRandomBlockReplacement const&);
    StructurePoolBlockPredicateCappedRandomBlockReplacement(StructurePoolBlockPredicateCappedRandomBlockReplacement const&);
    StructurePoolBlockPredicateCappedRandomBlockReplacement();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool test(::Block const& block, ::Randomize&) const /*override*/;

    // vIndex: 1
    virtual bool test(::BlockPos const& worldPos, ::BlockPos const&, ::Randomize&) const /*override*/;

    // vIndex: 3
    virtual bool finalize(::BlockSource& region, ::IRandom& random) /*override*/;

    // vIndex: 5
    virtual ::StructurePoolBlockPredicateType getType() const /*override*/;

    // vIndex: 6
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    // vIndex: 7
    virtual bool operator==(::StructurePoolBlockPredicateCappedRandomBlockReplacement const& other) const;

    // vIndex: 8
    virtual bool operator!=(::StructurePoolBlockPredicateCappedRandomBlockReplacement const& other) const;

    // vIndex: 0
    virtual ~StructurePoolBlockPredicateCappedRandomBlockReplacement() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructurePoolBlockPredicateCappedRandomBlockReplacement(
        ::std::map<::HashedString, ::HashedString> const& blockMappings,
        uint                                              maximumAmount
    );

    MCAPI bool _finalize(::BlockSource& region, ::IRandom& random, ::std::function<void(::BlockPos&)> applyToBlocks);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::map<::HashedString, ::HashedString> const& blockMappings, uint maximumAmount);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $test(::Block const& block, ::Randomize&) const;

    MCAPI bool $test(::BlockPos const& worldPos, ::BlockPos const&, ::Randomize&) const;

    MCAPI bool $finalize(::BlockSource& region, ::IRandom& random);

    MCAPI ::StructurePoolBlockPredicateType $getType() const;

    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
