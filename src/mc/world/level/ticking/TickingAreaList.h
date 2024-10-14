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
    // vIndex: 0
    virtual ~TickingAreaList();

    // vIndex: 1
    virtual bool removeDistantEntityAreasAndCheckForRemoved(
        std::vector<class Vec3> const&                 playerPositions,
        std::function<void(class ITickingArea const&)> requeue,
        class LevelStorage&                            levelStorage
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    MCAPI bool removeDistantEntityAreasAndCheckForRemoved$(
        std::vector<class Vec3> const&                 playerPositions,
        std::function<void(class ITickingArea const&)> requeue,
        class LevelStorage&                            levelStorage
    );

    // NOLINTEND
};
