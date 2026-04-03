#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/ServerWaypoint.h"

// auto generated forward declare list
// clang-format off
class Player;
struct ActorUniqueID;
// clang-format on

class ServerEntityWaypoint : public ::ServerWaypoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk4b646a;
    ::ll::UntypedStorage<8, 24> mUnk548ea6;
    ::ll::UntypedStorage<4, 20> mUnkca78ff;
    ::ll::UntypedStorage<1, 1>  mUnk216ee1;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerEntityWaypoint& operator=(ServerEntityWaypoint const&);
    ServerEntityWaypoint(ServerEntityWaypoint const&);
    ServerEntityWaypoint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::optional<::ActorUniqueID> tryGetActorID() const /*override*/;

    virtual bool calculateIsVisible(::Player const& viewingPlayer) const /*override*/;

    virtual void update(::Player const& viewingPlayer) /*override*/;

    virtual bool isValid() const /*override*/;

    virtual ~ServerEntityWaypoint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _updatePosition(::Player const& viewingPlayer);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::optional<::ActorUniqueID> $tryGetActorID() const;

    MCNAPI bool $calculateIsVisible(::Player const& viewingPlayer) const;

    MCNAPI void $update(::Player const& viewingPlayer);

    MCNAPI bool $isValid() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
