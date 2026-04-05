#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Publisher.h"
#include "mc/world/WaypointGroup.h"

// auto generated forward declare list
// clang-format off
class Player;
class ServerWaypoint;
namespace Bedrock::PubSub::ThreadModel { struct MultiThreaded; }
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
        ::ll::TypedStorage<1, 1, ::ServerWaypointGroup::Action> mAction;
        ::ll::TypedStorage<4, 4, uint>                          mUpdateFlags;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::WaypointGroup::WaypointHandle,
            ::std::unique_ptr<::ServerWaypoint>,
            ::WaypointGroup::WaypointHandle::Hasher,
            ::std::equal_to<::WaypointGroup::WaypointHandle>>>
        mWaypoints;
    ::ll::TypedStorage<8, 16, ::std::map<::WaypointGroup::WaypointHandle, ::ServerWaypointGroup::WaypointChangeRecord>>
        mChangeRecords;
    ::ll::TypedStorage<
        8,
        128,
        ::Bedrock::PubSub::Publisher<
            void(::std::vector<::WaypointGroup::WaypointHandle> const&),
            ::Bedrock::PubSub::ThreadModel::MultiThreaded,
            0>>
        mOnInvalidActorRemovedEvent;
    // NOLINTEND

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
    MCAPI ServerWaypointGroup();

    MCAPI ::WaypointGroup::WaypointHandle add(::std::unique_ptr<::ServerWaypoint> waypoint);

    MCAPI ::std::map<::WaypointGroup::WaypointHandle, ::ServerWaypointGroup::WaypointChangeRecord> consumeChanges();

    MCAPI void update(::Player const& viewingPlayer);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $has(::WaypointGroup::WaypointHandle const& handle) const;

    MCAPI bool $remove(::WaypointGroup::WaypointHandle const& handle);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
