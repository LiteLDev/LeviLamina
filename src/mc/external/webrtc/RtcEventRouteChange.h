#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RtcEvent.h"

namespace webrtc {

class RtcEventRouteChange : public ::webrtc::RtcEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk791dd0;
    ::ll::UntypedStorage<4, 4> mUnk246866;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcEventRouteChange& operator=(RtcEventRouteChange const&);
    RtcEventRouteChange(RtcEventRouteChange const&);
    RtcEventRouteChange();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtcEventRouteChange() /*override*/;

    // vIndex: 1
    virtual ::webrtc::RtcEvent::Type GetType() const /*override*/;

    // vIndex: 2
    virtual bool IsConfigEvent() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtcEventRouteChange(bool connected, uint overhead);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(bool connected, uint overhead);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::RtcEvent::Type $GetType() const;

    MCNAPI bool $IsConfigEvent() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
