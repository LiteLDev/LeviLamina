#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class HugeMushroomFeature : public ::Feature {
public:
    // prevent constructor by default
    HugeMushroomFeature& operator=(HugeMushroomFeature const&);
    HugeMushroomFeature(HugeMushroomFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HugeMushroomFeature();

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI HugeMushroomFeature();

    MCAPI explicit HugeMushroomFeature(int forcedType);

    MCAPI bool placeFixed(class BlockSource& region, class BlockPos const& pos, int mushroomType, int height) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canSurvive(class Block const& belowBlock) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(int forcedType);

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
