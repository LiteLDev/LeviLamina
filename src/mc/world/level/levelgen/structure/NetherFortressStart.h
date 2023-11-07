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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~NetherFortressStart() = default;

    // symbol: ??0NetherFortressStart@@QEAA@AEAVRandom@@FHH@Z
    MCAPI NetherFortressStart(class Random&, short, int, int);

    // NOLINTEND
};
