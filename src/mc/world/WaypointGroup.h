#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/UUID.h"

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
        struct Hasher {
        public:
            // member functions
            // NOLINTBEGIN
#ifdef LL_PLAT_C
            MCAPI uint64 operator()(::WaypointGroup::WaypointHandle const& handle) const;
#endif
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::mce::UUID> mUUID;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator<(::WaypointGroup::WaypointHandle const& other) const;

        MCFOLD bool operator==(::WaypointGroup::WaypointHandle const& other) const;
        // NOLINTEND
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WaypointGroup() = default;

    virtual bool has(::WaypointGroup::WaypointHandle const& handle) const = 0;

    virtual bool remove(::WaypointGroup::WaypointHandle const& handle) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
