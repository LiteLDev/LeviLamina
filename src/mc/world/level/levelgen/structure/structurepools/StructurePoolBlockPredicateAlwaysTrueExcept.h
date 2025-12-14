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

class StructurePoolBlockPredicateAlwaysTrueExcept : public ::IStructurePoolBlockPredicate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::set<::Block const*>> mCannotReplace;
    ::ll::TypedStorage<4, 4, float const>                 mProbability;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool test(::Block const& block, ::Randomize& randomize) const /*override*/;

    virtual bool test(::BlockPos const& worldPos, ::BlockPos const& refPos, ::Randomize& randomize) const /*override*/;

    virtual ::StructurePoolBlockPredicateType getType() const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;

    virtual ~StructurePoolBlockPredicateAlwaysTrueExcept() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $test(::Block const& block, ::Randomize& randomize) const;

    MCFOLD bool $test(::BlockPos const& worldPos, ::BlockPos const& refPos, ::Randomize& randomize) const;

    MCFOLD ::StructurePoolBlockPredicateType $getType() const;

    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
