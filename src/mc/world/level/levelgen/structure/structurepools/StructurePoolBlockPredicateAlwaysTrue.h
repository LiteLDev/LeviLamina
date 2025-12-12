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
    // virtual functions
    // NOLINTBEGIN
    virtual bool test(::Block const& block, ::Randomize& randomize) const /*override*/;

    virtual bool test(::BlockPos const&, ::BlockPos const&, ::Randomize&) const /*override*/;

    virtual ::StructurePoolBlockPredicateType getType() const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    virtual ~StructurePoolBlockPredicateAlwaysTrue() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $test(::Block const& block, ::Randomize& randomize) const;

    MCFOLD bool $test(::BlockPos const&, ::BlockPos const&, ::Randomize&) const;

    MCFOLD ::StructurePoolBlockPredicateType $getType() const;

    MCFOLD void $appendMetadataKey(::Util::XXHash& hash) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
