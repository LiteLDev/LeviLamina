#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/DtlsTransportState.h"
#include "mc/external/webrtc/RtcEvent.h"

namespace webrtc {

class RtcEventDtlsTransportState : public ::webrtc::RtcEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke21ae9;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcEventDtlsTransportState& operator=(RtcEventDtlsTransportState const&);
    RtcEventDtlsTransportState(RtcEventDtlsTransportState const&);
    RtcEventDtlsTransportState();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RtcEventDtlsTransportState() /*override*/ = default;

    virtual ::webrtc::RtcEvent::Type GetType() const /*override*/;

    virtual bool IsConfigEvent() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RtcEventDtlsTransportState(::webrtc::DtlsTransportState state);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::DtlsTransportState state);
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
