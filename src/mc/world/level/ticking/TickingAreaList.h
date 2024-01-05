#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ticking/TickingAreaListBase.h"

class TickingAreaList : public ::TickingAreaListBase {
public:
    // prevent constructor by default
    TickingAreaList& operator=(TickingAreaList const&);
    TickingAreaList(TickingAreaList const&);
    TickingAreaList();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1TickingAreaList@@UEAA@XZ
    virtual ~TickingAreaList();

    // vIndex: 1, symbol:
    // ?removeDistantEntityAreasAndCheckForRemoved@TickingAreaList@@UEAA_NAEBV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@V?$function@$$A6AXAEBVITickingArea@@@Z@3@AEAVLevelStorage@@@Z
    virtual bool removeDistantEntityAreasAndCheckForRemoved(
        std::vector<class Vec3> const&                 playerPositions,
        std::function<void(class ITickingArea const&)> requeue,
        class LevelStorage&                            levelStorage
    );

    // NOLINTEND
};
