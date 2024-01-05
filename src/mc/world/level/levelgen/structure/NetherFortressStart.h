#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class NetherFortressStart : public ::StructureStart {
public:
    // prevent constructor by default
    NetherFortressStart& operator=(NetherFortressStart const&);
    NetherFortressStart(NetherFortressStart const&);
    NetherFortressStart();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1NetherFortressStart@@UEAA@XZ
    virtual ~NetherFortressStart() = default;

    // symbol: ??0NetherFortressStart@@QEAA@AEAVRandom@@FHH@Z
    MCAPI NetherFortressStart(class Random& random, short seaLevel, int chunkX, int chunkZ);

    // NOLINTEND
};
