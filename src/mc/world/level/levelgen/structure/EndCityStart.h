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
    // vIndex: 0, symbol: __gen_??1EndCityStart@@UEAA@XZ
    virtual ~EndCityStart() = default;

    // vIndex: 2, symbol: ?isValid@EndCityStart@@UEBA_NXZ
    virtual bool isValid() const;

    // symbol: ?getYPositionForFeature@EndCityStart@@SAHAEBVChunkPos@@AEAVDimension@@@Z
    MCAPI static int getYPositionForFeature(class ChunkPos const& pos, class Dimension& dimension);

    // NOLINTEND
};
