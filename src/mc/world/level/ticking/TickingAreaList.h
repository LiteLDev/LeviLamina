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
    // prevent constructor by default
    TickingAreaList& operator=(TickingAreaList const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool removeDistantEntityAreasAndCheckForRemoved(
        ::std::vector<::Vec3> const&                 playerPositions,
        ::std::function<void(::ITickingArea const&)> requeue,
        ::LevelStorage&                              levelStorage
    ) /*override*/;

    // vIndex: 0
    virtual ~TickingAreaList() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI TickingAreaList(::TickingAreaList const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::TickingAreaList const&);
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
