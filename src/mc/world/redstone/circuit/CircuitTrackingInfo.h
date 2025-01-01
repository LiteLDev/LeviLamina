#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BaseCircuitComponent;
class BlockPos;
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
        ::ll::UntypedStorage<8, 8>  mUnk106ebf;
        ::ll::UntypedStorage<4, 12> mUnk79e265;
        ::ll::UntypedStorage<1, 1>  mUnkd64ed2;
        ::ll::UntypedStorage<8, 8>  mUnk8146c8;
        // NOLINTEND

    public:
        // prevent constructor by default
        Entry& operator=(Entry const&);
        Entry(Entry const&);
        Entry();
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
