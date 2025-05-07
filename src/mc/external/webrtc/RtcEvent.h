#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

class RtcEvent {
public:
    // RtcEvent inner types define
    enum class Type : uint {
        AlrStateEvent            = 0,
        RouteChangeEvent         = 1,
        RemoteEstimateEvent      = 2,
        AudioNetworkAdaptation   = 3,
        AudioPlayout             = 4,
        AudioReceiveStreamConfig = 5,
        AudioSendStreamConfig    = 6,
        BweUpdateDelayBased      = 7,
        BweUpdateLossBased       = 8,
        DtlsTransportState       = 9,
        DtlsWritableState        = 10,
        IceCandidatePairConfig   = 11,
        IceCandidatePairEvent    = 12,
        ProbeClusterCreated      = 13,
        ProbeResultFailure       = 14,
        ProbeResultSuccess       = 15,
        RtcpPacketIncoming       = 16,
        RtcpPacketOutgoing       = 17,
        RtpPacketIncoming        = 18,
        RtpPacketOutgoing        = 19,
        VideoReceiveStreamConfig = 20,
        VideoSendStreamConfig    = 21,
        GenericPacketSent        = 22,
        GenericPacketReceived    = 23,
        GenericAckReceived       = 24,
        FrameDecoded             = 25,
        NetEqSetMinimumDelay     = 26,
        BeginV3Log               = 38802816,
        EndV3Log                 = 38802817,
        FakeEvent                = 38802818,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnka3a47c;
    // NOLINTEND

public:
    // prevent constructor by default
    RtcEvent& operator=(RtcEvent const&);
    RtcEvent(RtcEvent const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RtcEvent() = default;

    // vIndex: 1
    virtual ::webrtc::RtcEvent::Type GetType() const = 0;

    // vIndex: 2
    virtual bool IsConfigEvent() const = 0;

    // vIndex: 3
    virtual uint GetGroupKey() const;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI RtcEvent();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
