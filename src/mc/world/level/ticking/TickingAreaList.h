#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ticking/TickingAreaListBase.h"

// auto generated forward declare list
// clang-format off
class ITickingArea;
class LevelStorage;
class Vec3;
// clang-format on

class TickingAreaList : public ::TickingAreaListBase {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool removeDistantEntityAreasAndCheckForRemoved(
        ::std::vector<::Vec3> const&                 playerPositions,
        ::std::function<void(::ITickingArea const&)> requeue,
        ::LevelStorage&                              levelStorage
    ) /*override*/;

    virtual ~TickingAreaList() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $removeDistantEntityAreasAndCheckForRemoved(
        ::std::vector<::Vec3> const&                 playerPositions,
        ::std::function<void(::ITickingArea const&)> requeue,
        ::LevelStorage&                              levelStorage
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
