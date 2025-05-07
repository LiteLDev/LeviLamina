#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class HashedString;
class Randomize;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockPredicateBlockMatch : public ::IStructurePoolBlockPredicate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::HashedString> const> mBlockMatchings;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool test(::Block const& block, ::Randomize&) const /*override*/;

    // vIndex: 1
    virtual bool test(::BlockPos const&, ::BlockPos const&, ::Randomize&) const /*override*/;

    // vIndex: 5
    virtual ::StructurePoolBlockPredicateType getType() const /*override*/;

    // vIndex: 6
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    // vIndex: 0
    virtual ~StructurePoolBlockPredicateBlockMatch() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $test(::Block const& block, ::Randomize&) const;

    MCNAPI bool $test(::BlockPos const&, ::BlockPos const&, ::Randomize&) const;

    MCNAPI ::StructurePoolBlockPredicateType $getType() const;

    MCNAPI void $appendMetadataKey(::Util::XXHash& hash) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
