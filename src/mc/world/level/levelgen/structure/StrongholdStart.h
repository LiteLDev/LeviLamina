#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class StrongholdStart : public ::StructureStart {
public:
    // prevent constructor by default
    StrongholdStart& operator=(StrongholdStart const&);
    StrongholdStart(StrongholdStart const&);
    StrongholdStart();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StrongholdStart@@UEAA@XZ
    virtual ~StrongholdStart() = default;

    // vIndex: 2, symbol: ?isValid@StrongholdStart@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol: ??0StrongholdStart@@QEAA@AEAVDimension@@AEAVRandom@@HH@Z
    MCAPI StrongholdStart(class Dimension& dimension, class Random& random, int chunkX, int chunkZ);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_initializePieceSet@StrongholdStart@@AEAAXAEAVRandom@@@Z
    MCAPI void _initializePieceSet(class Random& random);

    // NOLINTEND
};
