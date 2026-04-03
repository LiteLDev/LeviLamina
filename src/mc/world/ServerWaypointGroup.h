#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/WaypointGroup.h"

// auto generated forward declare list
// clang-format off
class Player;
class ServerWaypoint;
// clang-format on

class ServerWaypointGroup : public ::WaypointGroup {
public:
    // ServerWaypointGroup inner types declare
    // clang-format off
    struct WaypointChangeRecord;
    // clang-format on

    // ServerWaypointGroup inner types define
    enum class Action : uchar {
        None   = 0,
        Add    = 1,
        Remove = 2,
        Update = 3,
    };

    struct WaypointChangeRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnke4eff1;
        ::ll::UntypedStorage<4, 4> mUnk23c1d6;
        // NOLINTEND

    public:
        // prevent constructor by default
        WaypointChangeRecord& operator=(WaypointChangeRecord const&);
        WaypointChangeRecord(WaypointChangeRecord const&);
        WaypointChangeRecord();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64>  mUnkae8ad6;
    ::ll::UntypedStorage<8, 16>  mUnkcf9453;
    ::ll::UntypedStorage<8, 128> mUnkd6f47c;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerWaypointGroup& operator=(ServerWaypointGroup const&);
    ServerWaypointGroup(ServerWaypointGroup const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool has(::WaypointGroup::WaypointHandle const& handle) const /*override*/;

    virtual bool remove(::WaypointGroup::WaypointHandle const& handle) /*override*/;

    virtual ~ServerWaypointGroup() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ServerWaypointGroup();

    MCNAPI ::WaypointGroup::WaypointHandle add(::std::unique_ptr<::ServerWaypoint> waypoint);

    MCNAPI ::std::map<::WaypointGroup::WaypointHandle, ::ServerWaypointGroup::WaypointChangeRecord> consumeChanges();

    MCNAPI void update(::Player const& viewingPlayer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $has(::WaypointGroup::WaypointHandle const& handle) const;

    MCNAPI bool $remove(::WaypointGroup::WaypointHandle const& handle);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
