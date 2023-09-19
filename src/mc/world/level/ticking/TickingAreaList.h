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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?removeDistantEntityAreasAndCheckForRemoved@TickingAreaList@@UEAA_NAEBV?$vector@VVec3@@V?$allocator@VVec3@@@std@@@std@@V?$function@$$A6AXAEBVITickingArea@@@Z@3@AEAVLevelStorage@@@Z
    virtual bool
    removeDistantEntityAreasAndCheckForRemoved(std::vector<class Vec3> const&, std::function<void(class ITickingArea const&)>, class LevelStorage&);

    // symbol: ??1TickingAreaList@@UEAA@XZ
    MCVAPI ~TickingAreaList();

    // NOLINTEND
};
