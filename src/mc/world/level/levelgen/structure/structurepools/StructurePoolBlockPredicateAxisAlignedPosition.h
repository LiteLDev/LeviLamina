#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"
#include "mc/world/level/levelgen/structure/structurepools/StructurePoolBlockPredicateType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class IRandom;
namespace Util { class XXHash; }
// clang-format on

class StructurePoolBlockPredicateAxisAlignedPosition : public ::IStructurePoolBlockPredicate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float const> mMinChance;
    ::ll::TypedStorage<4, 4, float const> mMaxChance;
    ::ll::TypedStorage<4, 4, int const>   mMinDist;
    ::ll::TypedStorage<4, 4, int const>   mMaxDist;
    ::ll::TypedStorage<1, 1, uchar const> mAxis;
    // NOLINTEND

public:
    // prevent constructor by default
    StructurePoolBlockPredicateAxisAlignedPosition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool test(::Block const&, ::IRandom&) const /*override*/;

    virtual bool test(::BlockPos const& worldPos, ::BlockPos const& refPos, ::IRandom& random) const /*override*/;

    virtual ::StructurePoolBlockPredicateType getType() const /*override*/;

    virtual void appendMetadataKey(::Util::XXHash& hash) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StructurePoolBlockPredicateAxisAlignedPosition(
        float minChance,
        float maxChance,
        int   mMinDistance,
        int   mMaxDistance,
        uchar axis
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(float minChance, float maxChance, int mMinDistance, int mMaxDistance, uchar axis);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $test(::Block const&, ::IRandom&) const;

    MCAPI bool $test(::BlockPos const& worldPos, ::BlockPos const& refPos, ::IRandom& random) const;

    MCFOLD ::StructurePoolBlockPredicateType $getType() const;

    MCAPI void $appendMetadataKey(::Util::XXHash& hash) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
