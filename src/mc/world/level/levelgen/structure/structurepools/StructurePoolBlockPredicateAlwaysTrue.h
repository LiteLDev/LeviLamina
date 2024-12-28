#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class Randomize;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockPredicateAlwaysTrue : public ::IStructurePoolBlockPredicate {
public:
    // prevent constructor by default
    StructurePoolBlockPredicateAlwaysTrue& operator=(StructurePoolBlockPredicateAlwaysTrue const&);
    StructurePoolBlockPredicateAlwaysTrue(StructurePoolBlockPredicateAlwaysTrue const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual bool test(::Block const& block, ::Randomize& randomize) const /*override*/;

    // vIndex: 1
    virtual bool test(::BlockPos const&, ::BlockPos const&, ::Randomize&) const /*override*/;

    // vIndex: 5
    virtual ::StructurePoolBlockPredicateType getType() const /*override*/;

    // vIndex: 6
    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    // vIndex: 0
    virtual ~StructurePoolBlockPredicateAlwaysTrue() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructurePoolBlockPredicateAlwaysTrue();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $test(::Block const& block, ::Randomize& randomize) const;

    MCAPI bool $test(::BlockPos const&, ::BlockPos const&, ::Randomize&) const;

    MCAPI ::StructurePoolBlockPredicateType $getType() const;

    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
