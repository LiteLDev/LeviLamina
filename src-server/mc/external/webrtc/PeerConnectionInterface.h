#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/MediaType.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/RefCountInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace rtc { class Thread; }
namespace webrtc { class CreateSessionDescriptionObserver; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class RTCError; }
namespace webrtc { class RTCStatsCollectorCallback; }
namespace webrtc { class Resource; }
namespace webrtc { class RtcEventLogOutput; }
namespace webrtc { class RtpReceiverInterface; }
namespace webrtc { class RtpSenderInterface; }
namespace webrtc { class RtpTransceiverInterface; }
namespace webrtc { class SctpTransportInterface; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class SetLocalDescriptionObserverInterface; }
namespace webrtc { class SetRemoteDescriptionObserverInterface; }
namespace webrtc { class SetSessionDescriptionObserver; }
namespace webrtc { class StatsObserver; }
namespace webrtc { class StreamCollectionInterface; }
namespace webrtc { struct BandwidthEstimationSettings; }
namespace webrtc { struct BitrateSettings; }
namespace webrtc { struct DataChannelInit; }
namespace webrtc { struct RtpEncodingParameters; }
namespace webrtc { struct RtpTransceiverInit; }
// clang-format on

namespace webrtc {

class PeerConnectionInterface : public ::webrtc::RefCountInterface {
public:
    // PeerConnectionInterface inner types declare
    // clang-format off
    struct IceServer;
    struct PortAllocatorConfig;
    struct RTCConfiguration;
    struct RTCOfferAnswerOptions;
    // clang-format on

    // PeerConnectionInterface inner types define
    enum class SignalingState : int {
        KStable             = 0,
        KHaveLocalOffer     = 1,
        KHaveLocalPrAnswer  = 2,
        KHaveRemoteOffer    = 3,
        KHaveRemotePrAnswer = 4,
        KClosed             = 5,
    };

    enum class IceGatheringState : int {
        KIceGatheringNew       = 0,
        KIceGatheringGathering = 1,
        KIceGatheringComplete  = 2,
    };

    enum class PeerConnectionState : int {
        KNew          = 0,
        KConnecting   = 1,
        KConnected    = 2,
        KDisconnected = 3,
        KFailed       = 4,
        KClosed       = 5,
    };

    enum class IceConnectionState : int {
        KIceConnectionNew          = 0,
        KIceConnectionChecking     = 1,
        KIceConnectionConnected    = 2,
        KIceConnectionCompleted    = 3,
        KIceConnectionFailed       = 4,
        KIceConnectionDisconnected = 5,
        KIceConnectionClosed       = 6,
        KIceConnectionMax          = 7,
    };

    enum class TlsCertPolicy : int {
        KTlsCertPolicySecure          = 0,
        KTlsCertPolicyInsecureNoCheck = 1,
    };

    struct IceServer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk3de981;
        ::ll::UntypedStorage<8, 24> mUnkb05464;
        ::ll::UntypedStorage<8, 32> mUnk6a3950;
        ::ll::UntypedStorage<8, 32> mUnk7d5845;
        ::ll::UntypedStorage<4, 4>  mUnk6919f5;
        ::ll::UntypedStorage<8, 32> mUnkc54e59;
        ::ll::UntypedStorage<8, 24> mUnkfb3c84;
        ::ll::UntypedStorage<8, 24> mUnkc3909a;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI IceServer();

        MCNAPI IceServer(::webrtc::PeerConnectionInterface::IceServer const&);

        MCNAPI ::webrtc::PeerConnectionInterface::IceServer&
        operator=(::webrtc::PeerConnectionInterface::IceServer const&);

        MCNAPI bool operator==(::webrtc::PeerConnectionInterface::IceServer const& o) const;

        MCNAPI ~IceServer();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();

        MCNAPI void* $ctor(::webrtc::PeerConnectionInterface::IceServer const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    enum class IceTransportsType : int {
        KNone   = 0,
        KRelay  = 1,
        KNoHost = 2,
        KAll    = 3,
    };

    enum class BundlePolicy : int {
        KBundlePolicyBalanced  = 0,
        KBundlePolicyMaxBundle = 1,
        KBundlePolicyMaxCompat = 2,
    };

    enum class RtcpMuxPolicy : int {
        KRtcpMuxPolicyNegotiate = 0,
        KRtcpMuxPolicyRequire   = 1,
    };

    enum class TcpCandidatePolicy : int {
        KTcpCandidatePolicyEnabled  = 0,
        KTcpCandidatePolicyDisabled = 1,
    };

    enum class CandidateNetworkPolicy : int {
        KCandidateNetworkPolicyAll     = 0,
        KCandidateNetworkPolicyLowCost = 1,
    };

    enum class ContinualGatheringPolicy : int {
        Once        = 0,
        Continually = 1,
    };

    struct PortAllocatorConfig {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkcd0e3a;
        ::ll::UntypedStorage<4, 4> mUnkdd1179;
        ::ll::UntypedStorage<4, 4> mUnk49079f;
        // NOLINTEND

    public:
        // prevent constructor by default
        PortAllocatorConfig& operator=(PortAllocatorConfig const&);
        PortAllocatorConfig(PortAllocatorConfig const&);
        PortAllocatorConfig();
    };

    enum class RTCConfigurationType : int {
        KSafe       = 0,
        KAggressive = 1,
    };

    struct RTCConfiguration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 24> mUnk629c09;
        ::ll::UntypedStorage<4, 4>  mUnk4830f7;
        ::ll::UntypedStorage<4, 4>  mUnk717174;
        ::ll::UntypedStorage<4, 4>  mUnk66c75f;
        ::ll::UntypedStorage<8, 24> mUnkd3ea1d;
        ::ll::UntypedStorage<4, 4>  mUnkcdda20;
        ::ll::UntypedStorage<1, 1>  mUnkbaaa3c;
        ::ll::UntypedStorage<4, 4>  mUnkb9d49c;
        ::ll::UntypedStorage<1, 1>  mUnk717484;
        ::ll::UntypedStorage<4, 8>  mUnka6b41c;
        ::ll::UntypedStorage<4, 4>  mUnk57bf83;
        ::ll::UntypedStorage<4, 4>  mUnk1d9b32;
        ::ll::UntypedStorage<4, 4>  mUnka8ff63;
        ::ll::UntypedStorage<1, 1>  mUnk109734;
        ::ll::UntypedStorage<4, 4>  mUnk384e2f;
        ::ll::UntypedStorage<4, 4>  mUnkb20099;
        ::ll::UntypedStorage<4, 4>  mUnk84f2bf;
        ::ll::UntypedStorage<4, 4>  mUnkee5809;
        ::ll::UntypedStorage<1, 1>  mUnk82a91e;
        ::ll::UntypedStorage<4, 24> mUnk60941a;
        ::ll::UntypedStorage<1, 1>  mUnk21e994;
        ::ll::UntypedStorage<4, 4>  mUnkbb6c8c;
        ::ll::UntypedStorage<1, 1>  mUnkf7f37d;
        ::ll::UntypedStorage<1, 1>  mUnk7ee788;
        ::ll::UntypedStorage<1, 1>  mUnkcf1bdf;
        ::ll::UntypedStorage<1, 1>  mUnkba1108;
        ::ll::UntypedStorage<4, 8>  mUnk95e9dc;
        ::ll::UntypedStorage<4, 8>  mUnkc895be;
        ::ll::UntypedStorage<4, 8>  mUnk7a4aa2;
        ::ll::UntypedStorage<4, 8>  mUnk3cfc8b;
        ::ll::UntypedStorage<4, 8>  mUnk4f8c77;
        ::ll::UntypedStorage<4, 8>  mUnkd1a0da;
        ::ll::UntypedStorage<4, 8>  mUnkfc6afe;
        ::ll::UntypedStorage<8, 8>  mUnk8ad91f;
        ::ll::UntypedStorage<4, 8>  mUnkcb3ad7;
        ::ll::UntypedStorage<4, 4>  mUnk920ef9;
        ::ll::UntypedStorage<1, 1>  mUnk632fd4;
        ::ll::UntypedStorage<1, 6>  mUnk891148;
        ::ll::UntypedStorage<1, 1>  mUnk3fa350;
        ::ll::UntypedStorage<8, 32> mUnk72f178;
        ::ll::UntypedStorage<1, 1>  mUnk7e56fd;
        ::ll::UntypedStorage<4, 8>  mUnk37c2ca;
        ::ll::UntypedStorage<4, 8>  mUnkcaadd4;
        ::ll::UntypedStorage<4, 4>  mUnkd8f345;
        ::ll::UntypedStorage<8, 24> mUnka79ac2;
        ::ll::UntypedStorage<4, 12> mUnk7726c8;
        ::ll::UntypedStorage<8, 16> mUnk556434;
        ::ll::UntypedStorage<8, 24> mUnk727990;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI RTCConfiguration();

        MCNAPI RTCConfiguration(::webrtc::PeerConnectionInterface::RTCConfiguration const&);

        MCNAPI bool operator!=(::webrtc::PeerConnectionInterface::RTCConfiguration const& o) const;

        MCNAPI ::webrtc::PeerConnectionInterface::RTCConfiguration&
        operator=(::webrtc::PeerConnectionInterface::RTCConfiguration const&);

        MCNAPI bool operator==(::webrtc::PeerConnectionInterface::RTCConfiguration const& o) const;

        MCNAPI ~RTCConfiguration();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor();

        MCNAPI void* $ctor(::webrtc::PeerConnectionInterface::RTCConfiguration const&);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct RTCOfferAnswerOptions {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkccf0d0;
        ::ll::UntypedStorage<4, 4> mUnk5fb335;
        ::ll::UntypedStorage<1, 1> mUnkb3b72c;
        ::ll::UntypedStorage<1, 1> mUnk7bd78a;
        ::ll::UntypedStorage<1, 1> mUnkaec6fd;
        ::ll::UntypedStorage<1, 1> mUnk53e40f;
        ::ll::UntypedStorage<4, 4> mUnk4d841f;
        ::ll::UntypedStorage<1, 1> mUnk418f5d;
        // NOLINTEND

    public:
        // prevent constructor by default
        RTCOfferAnswerOptions& operator=(RTCOfferAnswerOptions const&);
        RTCOfferAnswerOptions(RTCOfferAnswerOptions const&);
        RTCOfferAnswerOptions();
    };

    enum class StatsOutputLevel : int {
        KStatsOutputLevelStandard = 0,
        KStatsOutputLevelDebug    = 1,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::webrtc::scoped_refptr<::webrtc::StreamCollectionInterface> local_streams() = 0;

    // vIndex: 4
    virtual ::webrtc::scoped_refptr<::webrtc::StreamCollectionInterface> remote_streams() = 0;

    // vIndex: 5
    virtual bool AddStream(::webrtc::MediaStreamInterface*) = 0;

    // vIndex: 6
    virtual void RemoveStream(::webrtc::MediaStreamInterface* remove_stream) = 0;

    // vIndex: 8
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>>
    AddTrack(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>, ::std::vector<::std::string> const&) = 0;

    // vIndex: 7
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> AddTrack(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>,
        ::std::vector<::std::string> const&,
        ::std::vector<::webrtc::RtpEncodingParameters> const&
    ) = 0;

    // vIndex: 9
    virtual ::webrtc::RTCError RemoveTrackOrError(::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>);

    // vIndex: 13
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>>
        AddTransceiver(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>) = 0;

    // vIndex: 12
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> AddTransceiver(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface>,
        ::webrtc::RtpTransceiverInit const&
    ) = 0;

    // vIndex: 11
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>>
        AddTransceiver(::cricket::MediaType) = 0;

    // vIndex: 10
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>>
    AddTransceiver(::cricket::MediaType, ::webrtc::RtpTransceiverInit const&) = 0;

    // vIndex: 14
    virtual ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>
    CreateSender(::std::string const&, ::std::string const&) = 0;

    // vIndex: 15
    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> GetSenders() const = 0;

    // vIndex: 16
    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>> GetReceivers() const = 0;

    // vIndex: 17
    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> GetTransceivers() const = 0;

    // vIndex: 21
    virtual bool GetStats(
        ::webrtc::StatsObserver*,
        ::webrtc::MediaStreamTrackInterface*,
        ::webrtc::PeerConnectionInterface::StatsOutputLevel
    ) = 0;

    // vIndex: 20
    virtual void GetStats(::webrtc::RTCStatsCollectorCallback*) = 0;

    // vIndex: 19
    virtual void GetStats(
        ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>,
        ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>
    ) = 0;

    // vIndex: 18
    virtual void GetStats(
        ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>,
        ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>
    ) = 0;

    // vIndex: 22
    virtual void ClearStatsCache();

    // vIndex: 23
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::DataChannelInterface>>
    CreateDataChannelOrError(::std::string const&, ::webrtc::DataChannelInit const*);

    // vIndex: 24
    virtual ::webrtc::scoped_refptr<::webrtc::DataChannelInterface>
    CreateDataChannel(::std::string const& label, ::webrtc::DataChannelInit const* config);

    // vIndex: 25
    virtual ::webrtc::SessionDescriptionInterface const* local_description() const = 0;

    // vIndex: 26
    virtual ::webrtc::SessionDescriptionInterface const* remote_description() const = 0;

    // vIndex: 27
    virtual ::webrtc::SessionDescriptionInterface const* current_local_description() const = 0;

    // vIndex: 28
    virtual ::webrtc::SessionDescriptionInterface const* current_remote_description() const = 0;

    // vIndex: 29
    virtual ::webrtc::SessionDescriptionInterface const* pending_local_description() const = 0;

    // vIndex: 30
    virtual ::webrtc::SessionDescriptionInterface const* pending_remote_description() const = 0;

    // vIndex: 31
    virtual void RestartIce() = 0;

    // vIndex: 32
    virtual void CreateOffer(
        ::webrtc::CreateSessionDescriptionObserver*,
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&
    ) = 0;

    // vIndex: 33
    virtual void CreateAnswer(
        ::webrtc::CreateSessionDescriptionObserver*,
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&
    ) = 0;

    // vIndex: 37
    virtual void SetLocalDescription(
        ::std::unique_ptr<::webrtc::SessionDescriptionInterface>,
        ::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface>
    );

    // vIndex: 36
    virtual void SetLocalDescription(::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface>);

    // vIndex: 35
    virtual void
    SetLocalDescription(::webrtc::SetSessionDescriptionObserver*, ::webrtc::SessionDescriptionInterface*) = 0;

    // vIndex: 34
    virtual void SetLocalDescription(::webrtc::SetSessionDescriptionObserver*);

    // vIndex: 39
    virtual void SetRemoteDescription(
        ::std::unique_ptr<::webrtc::SessionDescriptionInterface>,
        ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface>
    ) = 0;

    // vIndex: 38
    virtual void SetRemoteDescription(::webrtc::SetSessionDescriptionObserver*, ::webrtc::SessionDescriptionInterface*);

    // vIndex: 40
    virtual bool ShouldFireNegotiationNeededEvent(uint) = 0;

    // vIndex: 41
    virtual ::webrtc::PeerConnectionInterface::RTCConfiguration GetConfiguration() = 0;

    // vIndex: 42
    virtual ::webrtc::RTCError SetConfiguration(::webrtc::PeerConnectionInterface::RTCConfiguration const&) = 0;

    // vIndex: 44
    virtual bool AddIceCandidate(::webrtc::IceCandidateInterface const*) = 0;

    // vIndex: 43
    virtual void
        AddIceCandidate(::std::unique_ptr<::webrtc::IceCandidateInterface>, ::std::function<void(::webrtc::RTCError)>);

    // vIndex: 45
    virtual bool RemoveIceCandidates(::std::vector<::cricket::Candidate> const&) = 0;

    // vIndex: 46
    virtual ::webrtc::RTCError SetBitrate(::webrtc::BitrateSettings const&) = 0;

    // vIndex: 47
    virtual void ReconfigureBandwidthEstimation(::webrtc::BandwidthEstimationSettings const&) = 0;

    // vIndex: 48
    virtual void SetAudioPlayout(bool) = 0;

    // vIndex: 49
    virtual void SetAudioRecording(bool) = 0;

    // vIndex: 50
    virtual ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface>
    LookupDtlsTransportByMid(::std::string const&) = 0;

    // vIndex: 51
    virtual ::webrtc::scoped_refptr<::webrtc::SctpTransportInterface> GetSctpTransport() const = 0;

    // vIndex: 52
    virtual ::webrtc::PeerConnectionInterface::SignalingState signaling_state() = 0;

    // vIndex: 53
    virtual ::webrtc::PeerConnectionInterface::IceConnectionState ice_connection_state() = 0;

    // vIndex: 54
    virtual ::webrtc::PeerConnectionInterface::IceConnectionState standardized_ice_connection_state() = 0;

    // vIndex: 55
    virtual ::webrtc::PeerConnectionInterface::PeerConnectionState peer_connection_state() = 0;

    // vIndex: 56
    virtual ::webrtc::PeerConnectionInterface::IceGatheringState ice_gathering_state() = 0;

    // vIndex: 57
    virtual ::std::optional<bool> can_trickle_ice_candidates() = 0;

    // vIndex: 58
    virtual void AddAdaptationResource(::webrtc::scoped_refptr<::webrtc::Resource>) = 0;

    // vIndex: 60
    virtual bool StartRtcEventLog(::std::unique_ptr<::webrtc::RtcEventLogOutput>, int64) = 0;

    // vIndex: 59
    virtual bool StartRtcEventLog(::std::unique_ptr<::webrtc::RtcEventLogOutput>) = 0;

    // vIndex: 61
    virtual void StopRtcEventLog() = 0;

    // vIndex: 62
    virtual void Close() = 0;

    // vIndex: 63
    virtual ::rtc::Thread* signaling_thread() const = 0;

    // vIndex: 2
    virtual ~PeerConnectionInterface() /*override*/ = default;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string_view AsString(::webrtc::PeerConnectionInterface::SignalingState state);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::scoped_refptr<::webrtc::DataChannelInterface>
    $CreateDataChannel(::std::string const& label, ::webrtc::DataChannelInit const* config);
    // NOLINTEND
};

} // namespace webrtc
