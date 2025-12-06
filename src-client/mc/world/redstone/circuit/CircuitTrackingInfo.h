#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BlockPos.h"
#include "mc/world/redstone/circuit/components/CircuitComponentType.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
// clang-format on

class CircuitTrackingInfo {
public:
    // CircuitTrackingInfo inner types declare
    // clang-format off
    class Entry;
    // clang-format on

    // CircuitTrackingInfo inner types define
    class Entry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::BaseCircuitComponent*> mComponent;
        ::ll::TypedStorage<4, 12, ::BlockPos>             mPos;
        ::ll::TypedStorage<1, 1, uchar>                   mDirection;
        ::ll::TypedStorage<8, 8, ::CircuitComponentType>  mTypeID;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::CircuitTrackingInfo::Entry> mCurrent;
    ::ll::TypedStorage<8, 32, ::CircuitTrackingInfo::Entry> mPower;
    ::ll::TypedStorage<8, 32, ::CircuitTrackingInfo::Entry> mNearest;
    ::ll::TypedStorage<8, 32, ::CircuitTrackingInfo::Entry> m2ndNearest;
    ::ll::TypedStorage<4, 4, int>                           mDampening;
    ::ll::TypedStorage<1, 1, bool>                          mDirectlyPowered;
    ::ll::TypedStorage<4, 4, int>                           mData;
    // NOLINTEND

public:
    // prevent constructor by default
    CircuitTrackingInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CircuitTrackingInfo(::gsl::not_null<::BaseCircuitComponent*> component, ::BlockPos const& pos, int dampening);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::gsl::not_null<::BaseCircuitComponent*> component, ::BlockPos const& pos, int dampening);
    // NOLINTEND
};
