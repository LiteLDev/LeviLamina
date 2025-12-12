#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/Block.h"
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Randomize;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockPredicateTrueIfFound : public ::IStructurePoolBlockPredicate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::set<::Block const*>> mReplacable;
    ::ll::TypedStorage<4, 4, float const>                 mProbability;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool test(::Block const& block, ::Randomize& randomize) const /*override*/;

    virtual bool test(::BlockPos const&, ::BlockPos const&, ::Randomize&) const /*override*/;

    virtual ::StructurePoolBlockPredicateType getType() const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    virtual ~StructurePoolBlockPredicateTrueIfFound() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $test(::Block const& block, ::Randomize& randomize) const;

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
