#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/structure/StructureStart.h"

class EndCityStart : public ::StructureStart {
public:
    // prevent constructor by default
    EndCityStart& operator=(EndCityStart const&);
    EndCityStart(EndCityStart const&);
    EndCityStart();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 2, symbol: ?isValid@EndCityStart@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol: ?getYPositionForFeature@EndCityStart@@SAHAEBVChunkPos@@AEAVDimension@@@Z
    MCAPI static int getYPositionForFeature(class ChunkPos const&, class Dimension&);

    // NOLINTEND
};
