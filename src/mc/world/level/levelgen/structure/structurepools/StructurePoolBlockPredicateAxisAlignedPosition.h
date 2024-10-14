#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/structurepools/IStructurePoolBlockPredicate.h"

class StructurePoolBlockPredicateAxisAlignedPosition : public ::IStructurePoolBlockPredicate {
public:
    // prevent constructor by default
    StructurePoolBlockPredicateAxisAlignedPosition& operator=(StructurePoolBlockPredicateAxisAlignedPosition const&);
    StructurePoolBlockPredicateAxisAlignedPosition(StructurePoolBlockPredicateAxisAlignedPosition const&);
    StructurePoolBlockPredicateAxisAlignedPosition();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~StructurePoolBlockPredicateAxisAlignedPosition() = default;

    // vIndex: 1
    virtual bool test(class Block const& block, class Randomize& randomize) const;

    // vIndex: 2
    virtual bool test(class BlockPos const& pos, class BlockPos const& refPos, class Randomize& randomize) const;

    // vIndex: 3
    virtual bool finalize(class BlockSource&, class IRandom&);

    MCAPI StructurePoolBlockPredicateAxisAlignedPosition(
        float minChance,
        float maxChance,
        int   mMinDistance,
        int   mMaxDistance,
        uchar axis
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool finalize$(class BlockSource&, class IRandom&);

    MCAPI bool test$(class Block const& block, class Randomize& randomize) const;

    MCAPI bool test$(class BlockPos const& pos, class BlockPos const& refPos, class Randomize& randomize) const;

    // NOLINTEND
};
