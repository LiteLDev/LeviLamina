#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WaypointGroup {
public:
    // WaypointGroup inner types declare
    // clang-format off
    class WaypointHandle;
    // clang-format on

    // WaypointGroup inner types define
    class WaypointHandle {
    public:
        // WaypointHandle inner types declare
        // clang-format off
        struct Hasher;
        // clang-format on

        // WaypointHandle inner types define
        struct Hasher {};

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnkacbd9c;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaypointHandle& operator=(WaypointHandle const&);
        WaypointHandle(WaypointHandle const&);
        WaypointHandle();
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WaypointGroup() = default;

    virtual bool has(::WaypointGroup::WaypointHandle const&) const = 0;

    virtual bool remove(::WaypointGroup::WaypointHandle const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
