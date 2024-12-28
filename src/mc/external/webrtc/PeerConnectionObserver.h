#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { struct CandidatePairChangeEvent; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class RtpReceiverInterface; }
namespace webrtc { class RtpTransceiverInterface; }
// clang-format on

namespace webrtc {

class PeerConnectionObserver {
public:
    // prevent constructor by default
    PeerConnectionObserver& operator=(PeerConnectionObserver const&);
    PeerConnectionObserver(PeerConnectionObserver const&);
    PeerConnectionObserver();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~PeerConnectionObserver();

    // vIndex: 1
    virtual void OnSignalingChange(::webrtc::PeerConnectionInterface::SignalingState) = 0;

    // vIndex: 2
    virtual void OnAddStream(::webrtc::scoped_refptr<::webrtc::MediaStreamInterface> stream);

    // vIndex: 3
    virtual void OnRemoveStream(::webrtc::scoped_refptr<::webrtc::MediaStreamInterface> stream);

    // vIndex: 4
    virtual void OnDataChannel(::webrtc::scoped_refptr<::webrtc::DataChannelInterface>) = 0;

    // vIndex: 5
    virtual void OnRenegotiationNeeded();

    // vIndex: 6
    virtual void OnNegotiationNeededEvent(uint event_id);

    // vIndex: 7
    virtual void OnIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState);

    // vIndex: 8
    virtual void OnStandardizedIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState new_state);

    // vIndex: 9
    virtual void OnConnectionChange(::webrtc::PeerConnectionInterface::PeerConnectionState);

    // vIndex: 10
    virtual void OnIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState) = 0;

    // vIndex: 11
    virtual void OnIceCandidate(::webrtc::IceCandidateInterface const*) = 0;

    // vIndex: 12
    virtual void OnIceCandidateError(
        ::std::string const& address,
        int                  port,
        ::std::string const& url,
        int                  error_code,
        ::std::string const& error_text
    );

    // vIndex: 13
    virtual void OnIceCandidatesRemoved(::std::vector<::cricket::Candidate> const&);

    // vIndex: 14
    virtual void OnIceConnectionReceivingChange(bool);

    // vIndex: 15
    virtual void OnIceSelectedCandidatePairChanged(::cricket::CandidatePairChangeEvent const& event);

    // vIndex: 16
    virtual void OnAddTrack(
        ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>                       receiver,
        ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const& streams
    );

    // vIndex: 17
    virtual void OnTrack(::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface> transceiver);

    // vIndex: 18
    virtual void OnRemoveTrack(::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface> receiver);

    // vIndex: 19
    virtual void OnInterestingUsage(int usage_pattern);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $OnAddStream(::webrtc::scoped_refptr<::webrtc::MediaStreamInterface> stream);

    MCAPI void $OnRemoveStream(::webrtc::scoped_refptr<::webrtc::MediaStreamInterface> stream);

    MCAPI void $OnRenegotiationNeeded();

    MCAPI void $OnNegotiationNeededEvent(uint event_id);

    MCAPI void $OnIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState);

    MCAPI void $OnStandardizedIceConnectionChange(::webrtc::PeerConnectionInterface::IceConnectionState new_state);

    MCAPI void $OnConnectionChange(::webrtc::PeerConnectionInterface::PeerConnectionState);

    MCAPI void $OnIceCandidateError(
        ::std::string const& address,
        int                  port,
        ::std::string const& url,
        int                  error_code,
        ::std::string const& error_text
    );

    MCAPI void $OnIceCandidatesRemoved(::std::vector<::cricket::Candidate> const&);

    MCAPI void $OnIceConnectionReceivingChange(bool);

    MCAPI void $OnIceSelectedCandidatePairChanged(::cricket::CandidatePairChangeEvent const& event);

    MCAPI void $OnAddTrack(
        ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>                       receiver,
        ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const& streams
    );

    MCAPI void $OnTrack(::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface> transceiver);

    MCAPI void $OnRemoveTrack(::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface> receiver);

    MCAPI void $OnInterestingUsage(int usage_pattern);
    // NOLINTEND
};

} // namespace webrtc
