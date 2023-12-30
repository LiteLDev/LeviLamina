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
    // vIndex: 0, symbol: ??1MonsterRoomFeature@@UEAA@XZ
    virtual ~MonsterRoomFeature();

    // vIndex: 3, symbol: ?place@MonsterRoomFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0MonsterRoomFeature@@QEAA@XZ
    MCAPI MonsterRoomFeature();

    // NOLINTEND
};
