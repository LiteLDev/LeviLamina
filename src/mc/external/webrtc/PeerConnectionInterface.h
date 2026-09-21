#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/AdapterType.h"
#include "mc/external/webrtc/CryptoOptions.h"
#include "mc/external/webrtc/MediaConfig.h"
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/PortPrunePolicy.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/RefCountInterface.h"
#include "mc/external/webrtc/SdpSemantics.h"
#include "mc/external/webrtc/TimeDelta.h"
#include "mc/external/webrtc/VpnPreference.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Candidate; }
namespace webrtc { class CreateSessionDescriptionObserver; }
namespace webrtc { class DataChannelEventObserverInterface; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class IceCandidate; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class NetworkControllerInterface; }
namespace webrtc { class NetworkMask; }
namespace webrtc { class RTCCertificate; }
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
namespace webrtc { class StaticStunServer; }
namespace webrtc { class StatsObserver; }
namespace webrtc { class StreamCollectionInterface; }
namespace webrtc { class Thread; }
namespace webrtc { class TurnCustomizer; }
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
    enum class BundlePolicy : int {
        KBundlePolicyBalanced  = 0,
        KBundlePolicyMaxBundle = 1,
        KBundlePolicyMaxCompat = 2,
    };

    enum class CandidateNetworkPolicy : int {
        KCandidateNetworkPolicyAll     = 0,
        KCandidateNetworkPolicyLowCost = 1,
    };

    enum class ContinualGatheringPolicy : int {
        Once        = 0,
        Continually = 1,
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

    enum class IceGatheringState : int {
        KIceGatheringNew       = 0,
        KIceGatheringGathering = 1,
        KIceGatheringComplete  = 2,
    };

    enum class IceTransportsType : int {
        KNone   = 0,
        KRelay  = 1,
        KNoHost = 2,
        KAll    = 3,
    };

    enum class PeerConnectionState : int {
        KNew          = 0,
        KConnecting   = 1,
        KConnected    = 2,
        KDisconnected = 3,
        KFailed       = 4,
        KClosed       = 5,
    };

    enum class RTCConfigurationType : int {
        KSafe       = 0,
        KAggressive = 1,
    };

    enum class RtcpMuxPolicy : int {
        KRtcpMuxPolicyNegotiate = 0,
        KRtcpMuxPolicyRequire   = 1,
    };

    enum class SignalingState : int {
        KStable             = 0,
        KHaveLocalOffer     = 1,
        KHaveLocalPrAnswer  = 2,
        KHaveRemoteOffer    = 3,
        KHaveRemotePrAnswer = 4,
        KClosed             = 5,
    };

    enum class StatsOutputLevel : int {
        KStatsOutputLevelStandard = 0,
        KStatsOutputLevelDebug    = 1,
    };

    enum class TcpCandidatePolicy : int {
        KTcpCandidatePolicyEnabled  = 0,
        KTcpCandidatePolicyDisabled = 1,
    };

    enum class TlsCertPolicy : int {
        KTlsCertPolicySecure          = 0,
        KTlsCertPolicyInsecureNoCheck = 1,
    };

    struct IceServer {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 32, ::std::string>                                   uri;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                    urls;
        ::ll::TypedStorage<8, 32, ::std::string>                                   username;
        ::ll::TypedStorage<8, 32, ::std::string>                                   password;
        ::ll::TypedStorage<4, 4, ::webrtc::PeerConnectionInterface::TlsCertPolicy> tls_cert_policy;
        ::ll::TypedStorage<8, 32, ::std::string>                                   hostname;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                    tls_alpn_protocols;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                    tls_elliptic_curves;
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

    struct PortAllocatorConfig {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, int>  min_port;
        ::ll::TypedStorage<4, 4, int>  max_port;
        ::ll::TypedStorage<4, 4, uint> flags;
        // NOLINTEND
    };

    struct RTCConfiguration {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 24, ::std::vector<::webrtc::PeerConnectionInterface::IceServer>>      servers;
        ::ll::TypedStorage<4, 4, ::webrtc::PeerConnectionInterface::IceTransportsType>              type;
        ::ll::TypedStorage<4, 4, ::webrtc::PeerConnectionInterface::BundlePolicy>                   bundle_policy;
        ::ll::TypedStorage<4, 4, ::webrtc::PeerConnectionInterface::RtcpMuxPolicy>                  rtcp_mux_policy;
        ::ll::TypedStorage<8, 24, ::std::vector<::webrtc::scoped_refptr<::webrtc::RTCCertificate>>> certificates;
        ::ll::TypedStorage<4, 4, int>                                                       ice_candidate_pool_size;
        ::ll::TypedStorage<1, 1, bool>                                                      disable_ipv6_on_wifi;
        ::ll::TypedStorage<4, 4, int>                                                       max_ipv6_networks;
        ::ll::TypedStorage<1, 1, bool>                                                      disable_link_local_networks;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>                                      screencast_min_bitrate;
        ::ll::TypedStorage<4, 4, ::webrtc::PeerConnectionInterface::TcpCandidatePolicy>     tcp_candidate_policy;
        ::ll::TypedStorage<4, 4, ::webrtc::PeerConnectionInterface::CandidateNetworkPolicy> candidate_network_policy;
        ::ll::TypedStorage<4, 4, int>  audio_jitter_buffer_max_packets;
        ::ll::TypedStorage<1, 1, bool> audio_jitter_buffer_fast_accelerate;
        ::ll::TypedStorage<4, 4, int>  audio_jitter_buffer_min_delay_ms;
        ::ll::TypedStorage<4, 4, int>  ice_connection_receiving_timeout;
        ::ll::TypedStorage<4, 4, int>  ice_backup_candidate_pair_ping_interval;
        ::ll::TypedStorage<4, 4, ::webrtc::PeerConnectionInterface::ContinualGatheringPolicy>
                                                            continual_gathering_policy;
        ::ll::TypedStorage<1, 1, bool>                      prioritize_most_likely_ice_candidate_pairs;
        ::ll::TypedStorage<4, 24, ::webrtc::MediaConfig>    media_config;
        ::ll::TypedStorage<1, 1, bool>                      prune_turn_ports;
        ::ll::TypedStorage<4, 4, ::webrtc::PortPrunePolicy> turn_port_prune_policy;
        ::ll::TypedStorage<1, 1, bool>                      presume_writable_when_fully_relayed;
        ::ll::TypedStorage<1, 1, bool>                      enable_ice_renomination;
        ::ll::TypedStorage<1, 1, bool>                      redetermine_role_on_ice_restart;
        ::ll::TypedStorage<1, 1, bool>                      surface_ice_candidates_on_ice_transport_type_changed;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>      ice_check_interval_strong_connectivity;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>      ice_check_interval_weak_connectivity;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>      ice_check_min_interval;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>      ice_unwritable_timeout;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>      ice_unwritable_min_checks;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>      ice_inactive_timeout;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>      stun_candidate_keepalive_interval;
        ::ll::TypedStorage<8, 8, ::webrtc::TurnCustomizer*> turn_customizer;
        ::ll::TypedStorage<4, 8, ::std::optional<::webrtc::AdapterType>> network_preference;
        ::ll::TypedStorage<4, 4, ::webrtc::SdpSemantics>                 sdp_semantics;
        ::ll::TypedStorage<1, 1, bool>                                   active_reset_srtp_params;
        ::ll::TypedStorage<8, 32, ::webrtc::CryptoOptions>               crypto_options;
        ::ll::TypedStorage<1, 1, bool>                                   offer_extmap_allow_mixed;
        ::ll::TypedStorage<8, 32, ::std::string>                         turn_logging_id;
        ::ll::TypedStorage<1, 1, bool>                                   enable_implicit_rollback;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>                   report_usage_pattern_delay_ms;
        ::ll::TypedStorage<4, 8, ::std::optional<int>>                   stable_writable_connection_ping_interval_ms;
        ::ll::TypedStorage<4, 4, ::webrtc::VpnPreference>                vpn_preference;
        ::ll::TypedStorage<8, 24, ::std::vector<::webrtc::NetworkMask>>  vpn_list;
        ::ll::TypedStorage<4, 12, ::webrtc::PeerConnectionInterface::PortAllocatorConfig> port_allocator_config;
        ::ll::TypedStorage<8, 16, ::std::optional<::webrtc::TimeDelta>>                   pacer_burst_interval;
        ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::webrtc::StaticStunServer const>>>
            static_stun_servers;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI RTCConfiguration();

        MCNAPI RTCConfiguration(::webrtc::PeerConnectionInterface::RTCConfiguration const&);

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
        ::ll::TypedStorage<4, 4, int>  offer_to_receive_video;
        ::ll::TypedStorage<4, 4, int>  offer_to_receive_audio;
        ::ll::TypedStorage<1, 1, bool> voice_activity_detection;
        ::ll::TypedStorage<1, 1, bool> ice_restart;
        ::ll::TypedStorage<1, 1, bool> use_rtp_mux;
        ::ll::TypedStorage<1, 1, bool> raw_packetization_for_video;
        ::ll::TypedStorage<4, 4, int>  num_simulcast_layers;
        ::ll::TypedStorage<1, 1, bool> use_obsolete_sctp_sdp;
        // NOLINTEND
    };

    using IceServers = ::std::vector<::webrtc::PeerConnectionInterface::IceServer>;

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::scoped_refptr<::webrtc::StreamCollectionInterface> local_streams() = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::StreamCollectionInterface> remote_streams() = 0;

    virtual bool AddStream(::webrtc::MediaStreamInterface* a1) = 0;

    virtual void RemoveStream(::webrtc::MediaStreamInterface* a1) = 0;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> AddTrack(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> a1,
        ::std::vector<::std::string> const&                          a2
    ) = 0;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> AddTrack(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> a1,
        ::std::vector<::std::string> const&                          a2,
        ::std::vector<::webrtc::RtpEncodingParameters> const&        a3
    ) = 0;

    virtual ::webrtc::RTCError RemoveTrackOrError(::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> a1);

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>>
    AddTransceiver(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> a1) = 0;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> AddTransceiver(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> a1,
        ::webrtc::RtpTransceiverInit const&                          a2
    ) = 0;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>>
    AddTransceiver(::webrtc::MediaType a1) = 0;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>>
    AddTransceiver(::webrtc::MediaType a1, ::webrtc::RtpTransceiverInit const& a2) = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>
    CreateSender(::std::string const& a1, ::std::string const& a2) = 0;

    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> GetSenders() const = 0;

    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>> GetReceivers() const = 0;

    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> GetTransceivers() const = 0;

    virtual bool GetStats(
        ::webrtc::StatsObserver*                            a1,
        ::webrtc::MediaStreamTrackInterface*                a2,
        ::webrtc::PeerConnectionInterface::StatsOutputLevel a3
    ) = 0;

    virtual void GetStats(::webrtc::RTCStatsCollectorCallback* a1) = 0;

    virtual void GetStats(
        ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>        a1,
        ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> a2
    ) = 0;

    virtual void GetStats(
        ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>      a1,
        ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> a2
    ) = 0;

    virtual void ClearStatsCache();

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::DataChannelInterface>>
    CreateDataChannelOrError(::std::string const& a1, ::webrtc::DataChannelInit const* a2);

    virtual ::webrtc::scoped_refptr<::webrtc::DataChannelInterface>
    CreateDataChannel(::std::string const& label, ::webrtc::DataChannelInit const* config);

    virtual ::webrtc::SessionDescriptionInterface const* local_description() const = 0;

    virtual ::webrtc::SessionDescriptionInterface const* remote_description() const = 0;

    virtual ::webrtc::SessionDescriptionInterface const* current_local_description() const = 0;

    virtual ::webrtc::SessionDescriptionInterface const* current_remote_description() const = 0;

    virtual ::webrtc::SessionDescriptionInterface const* pending_local_description() const = 0;

    virtual ::webrtc::SessionDescriptionInterface const* pending_remote_description() const = 0;

    virtual void RestartIce() = 0;

    virtual void CreateOffer(
        ::webrtc::CreateSessionDescriptionObserver*                     a1,
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& a2
    ) = 0;

    virtual void CreateAnswer(
        ::webrtc::CreateSessionDescriptionObserver*                     a1,
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& a2
    ) = 0;

    virtual void SetLocalDescription(
        ::std::unique_ptr<::webrtc::SessionDescriptionInterface>                a1,
        ::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface> a2
    );

    virtual void SetLocalDescription(::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface> a1);

    virtual void
    SetLocalDescription(::webrtc::SetSessionDescriptionObserver* a1, ::webrtc::SessionDescriptionInterface* a2) = 0;

    virtual void SetLocalDescription(::webrtc::SetSessionDescriptionObserver* a1);

    virtual void SetRemoteDescription(
        ::std::unique_ptr<::webrtc::SessionDescriptionInterface>                 a1,
        ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface> a2
    ) = 0;

    virtual void
    SetRemoteDescription(::webrtc::SetSessionDescriptionObserver* a1, ::webrtc::SessionDescriptionInterface* a2);

    virtual bool ShouldFireNegotiationNeededEvent(uint a1) = 0;

    virtual ::webrtc::PeerConnectionInterface::RTCConfiguration GetConfiguration() = 0;

    virtual ::webrtc::RTCError SetConfiguration(::webrtc::PeerConnectionInterface::RTCConfiguration const& a1) = 0;

    virtual bool AddIceCandidate(::webrtc::IceCandidate const* a1) = 0;

    virtual void
    AddIceCandidate(::std::unique_ptr<::webrtc::IceCandidate> a1, ::std::function<void(::webrtc::RTCError)> a2);

    virtual bool RemoveIceCandidate(::webrtc::IceCandidate const* a1) = 0;

    virtual bool RemoveIceCandidates(::std::vector<::webrtc::Candidate> const& a1);

    virtual ::webrtc::RTCError SetBitrate(::webrtc::BitrateSettings const& a1) = 0;

    virtual void ReconfigureBandwidthEstimation(::webrtc::BandwidthEstimationSettings const& a1) = 0;

    virtual void SetAudioPlayout(bool a1) = 0;

    virtual void SetAudioRecording(bool a1) = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface>
    LookupDtlsTransportByMid(::std::string const& a1) = 0;

    virtual ::webrtc::scoped_refptr<::webrtc::SctpTransportInterface> GetSctpTransport() const = 0;

    virtual ::webrtc::PeerConnectionInterface::SignalingState signaling_state() = 0;

    virtual ::webrtc::PeerConnectionInterface::IceConnectionState ice_connection_state() = 0;

    virtual ::webrtc::PeerConnectionInterface::IceConnectionState standardized_ice_connection_state() = 0;

    virtual ::webrtc::PeerConnectionInterface::PeerConnectionState peer_connection_state() = 0;

    virtual ::webrtc::PeerConnectionInterface::IceGatheringState ice_gathering_state() = 0;

    virtual ::std::optional<bool> can_trickle_ice_candidates() = 0;

    virtual void AddAdaptationResource(::webrtc::scoped_refptr<::webrtc::Resource> a1) = 0;

    virtual bool StartRtcEventLog(::std::unique_ptr<::webrtc::RtcEventLogOutput> a1, int64 a2) = 0;

    virtual bool StartRtcEventLog(::std::unique_ptr<::webrtc::RtcEventLogOutput> a1) = 0;

    virtual void StopRtcEventLog() = 0;

    virtual void SetDataChannelEventObserver(::std::unique_ptr<::webrtc::DataChannelEventObserverInterface> a1) = 0;

    virtual void Close() = 0;

    virtual ::webrtc::Thread* signaling_thread() const = 0;

    virtual ::webrtc::NetworkControllerInterface* GetNetworkController() = 0;

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
