#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class MonsterRoomFeature : public ::Feature {
public:
    // prevent constructor by default
    MonsterRoomFeature& operator=(MonsterRoomFeature const&);
    MonsterRoomFeature(MonsterRoomFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MonsterRoomFeature();

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI MonsterRoomFeature();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$();

    MCAPI void dtor$();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
