#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/AudioDeviceModule.h"
#include "mc/external/webrtc/Call.h"
#include "mc/external/webrtc/DataChannelInterface.h"
#include "mc/external/webrtc/IceConnectionState.h"
#include "mc/external/webrtc/JsepTransportController.h"
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/PeerConnectionFactoryInterface.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/PeerConnectionInternal.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/external/webrtc/SSLRole.h"
#include "mc/external/webrtc/UsageEvent.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Call; }
namespace webrtc { class Candidate; }
namespace webrtc { class CandidateStats; }
namespace webrtc { class ConnectionContext; }
namespace webrtc { class ContentGroup; }
namespace webrtc { class CreateSessionDescriptionObserver; }
namespace webrtc { class DataChannelController; }
namespace webrtc { class DataChannelEventObserverInterface; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class DataChannelTransportInterface; }
namespace webrtc { class DtlsTransport; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class Environment; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class IceCandidate; }
namespace webrtc { class JsepTransportController; }
namespace webrtc { class LegacyStatsCollector; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class NetworkControllerInterface; }
namespace webrtc { class PayloadTypePicker; }
namespace webrtc { class PeerConnectionMessageHandler; }
namespace webrtc { class PeerConnectionObserver; }
namespace webrtc { class PortAllocator; }
namespace webrtc { class RTCCertificate; }
namespace webrtc { class RTCError; }
namespace webrtc { class RTCStatsCollectorCallback; }
namespace webrtc { class Resource; }
namespace webrtc { class RtcEventLogOutput; }
namespace webrtc { class RtpReceiverInterface; }
namespace webrtc { class RtpSenderInterface; }
namespace webrtc { class RtpTransceiver; }
namespace webrtc { class RtpTransceiverInterface; }
namespace webrtc { class RtpTransmissionManager; }
namespace webrtc { class RtpTransportInternal; }
namespace webrtc { class SSLCertChain; }
namespace webrtc { class SctpTransportInterface; }
namespace webrtc { class SessionDescription; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class SetLocalDescriptionObserverInterface; }
namespace webrtc { class SetRemoteDescriptionObserverInterface; }
namespace webrtc { class SetSessionDescriptionObserver; }
namespace webrtc { class SocketAddress; }
namespace webrtc { class StaticStunServer; }
namespace webrtc { class StatsObserver; }
namespace webrtc { class StreamCollectionInterface; }
namespace webrtc { class Thread; }
namespace webrtc { struct BandwidthEstimationSettings; }
namespace webrtc { struct BitrateSettings; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct DataChannelInit; }
namespace webrtc { struct DataChannelStats; }
namespace webrtc { struct PeerConnectionDependencies; }
namespace webrtc { struct RelayServerConfig; }
namespace webrtc { struct RtpEncodingParameters; }
namespace webrtc { struct RtpTransceiverInit; }
namespace webrtc { struct SctpOptions; }
namespace webrtc { struct TransportStats; }
// clang-format on

namespace webrtc {

class PeerConnection : public ::webrtc::PeerConnectionInternal, public ::webrtc::JsepTransportController::Observer {
public:
    // PeerConnection inner types declare
    // clang-format off
    struct InitializePortAllocatorResult;
    // clang-format on

    // PeerConnection inner types define
    struct InitializePortAllocatorResult {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk9e7821;
        // NOLINTEND

    public:
        // prevent constructor by default
        InitializePortAllocatorResult& operator=(InitializePortAllocatorResult const&);
        InitializePortAllocatorResult(InitializePortAllocatorResult const&);
        InitializePortAllocatorResult();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40>  mUnka7df9e;
    ::ll::UntypedStorage<8, 8>   mUnk754baf;
    ::ll::UntypedStorage<4, 12>  mUnkeeb554;
    ::ll::UntypedStorage<8, 8>   mUnkdc5ffe;
    ::ll::UntypedStorage<1, 1>   mUnk990d1e;
    ::ll::UntypedStorage<1, 1>   mUnk3ef1df;
    ::ll::UntypedStorage<1, 1>   mUnk43996c;
    ::ll::UntypedStorage<1, 1>   mUnk438159;
    ::ll::UntypedStorage<4, 4>   mUnkc0221b;
    ::ll::UntypedStorage<4, 4>   mUnkc7cd9b;
    ::ll::UntypedStorage<4, 4>   mUnkee6753;
    ::ll::UntypedStorage<4, 4>   mUnka964f1;
    ::ll::UntypedStorage<8, 416> mUnk8b7b48;
    ::ll::UntypedStorage<8, 8>   mUnk396ba3;
    ::ll::UntypedStorage<8, 8>   mUnk471b7f;
    ::ll::UntypedStorage<8, 8>   mUnk33a97a;
    ::ll::UntypedStorage<8, 8>   mUnkbc5968;
    ::ll::UntypedStorage<8, 8>   mUnk71e5e5;
    ::ll::UntypedStorage<8, 8>   mUnkdd75c7;
    ::ll::UntypedStorage<8, 8>   mUnke7c5b7;
    ::ll::UntypedStorage<8, 8>   mUnk74e9a5;
    ::ll::UntypedStorage<8, 8>   mUnk8c02af;
    ::ll::UntypedStorage<8, 8>   mUnka29f89;
    ::ll::UntypedStorage<8, 8>   mUnkbb5b66;
    ::ll::UntypedStorage<8, 8>   mUnk93e1d2;
    ::ll::UntypedStorage<8, 32>  mUnk187900;
    ::ll::UntypedStorage<8, 40>  mUnke39a9c;
    ::ll::UntypedStorage<8, 40>  mUnk4bedc5;
    ::ll::UntypedStorage<8, 32>  mUnk9fe4a4;
    ::ll::UntypedStorage<4, 4>   mUnk46d428;
    ::ll::UntypedStorage<8, 136> mUnk5eba9b;
    ::ll::UntypedStorage<8, 16>  mUnkaa09b8;
    ::ll::UntypedStorage<8, 40>  mUnkda7b0f;
    ::ll::UntypedStorage<8, 8>   mUnkee79f3;
    ::ll::UntypedStorage<8, 8>   mUnk7682e5;
    ::ll::UntypedStorage<8, 8>   mUnkb0461d;
    ::ll::UntypedStorage<8, 8>   mUnk351554;
    ::ll::UntypedStorage<8, 8>   mUnk33130d;
    ::ll::UntypedStorage<8, 16>  mUnk5a676c;
    // NOLINTEND

public:
    // prevent constructor by default
    PeerConnection& operator=(PeerConnection const&);
    PeerConnection(PeerConnection const&);
    PeerConnection();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::webrtc::scoped_refptr<::webrtc::StreamCollectionInterface> local_streams() /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::StreamCollectionInterface> remote_streams() /*override*/;

    virtual bool AddStream(::webrtc::MediaStreamInterface* local_stream) /*override*/;

    virtual void RemoveStream(::webrtc::MediaStreamInterface* local_stream) /*override*/;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> AddTrack(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track,
        ::std::vector<::std::string> const&                          stream_ids,
        ::std::vector<::webrtc::RtpEncodingParameters> const&        init_send_encodings
    ) /*override*/;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> AddTrack(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track,
        ::std::vector<::std::string> const&                          stream_ids
    ) /*override*/;

    virtual ::webrtc::RTCError
    RemoveTrackOrError(::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> sender) /*override*/;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> AddTransceiver(
        ::webrtc::MediaType                                          media_type,
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track,
        ::webrtc::RtpTransceiverInit const&                          init,
        bool                                                         update_negotiation_needed
    ) /*override*/;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>>
    AddTransceiver(::webrtc::MediaType media_type, ::webrtc::RtpTransceiverInit const& init) /*override*/;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>>
    AddTransceiver(::webrtc::MediaType media_type) /*override*/;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> AddTransceiver(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track,
        ::webrtc::RtpTransceiverInit const&                          init
    ) /*override*/;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>>
    AddTransceiver(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track) /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>
    CreateSender(::std::string const& kind, ::std::string const& stream_id) /*override*/;

    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> GetSenders() const /*override*/;

    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>> GetReceivers() const /*override*/;

    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> GetTransceivers() const
        /*override*/;

    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::DataChannelInterface>>
    CreateDataChannelOrError(::std::string const& label, ::webrtc::DataChannelInit const* config) /*override*/;

    virtual void GetStats(
        ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>      selector,
        ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback
    ) /*override*/;

    virtual void GetStats(
        ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>        selector,
        ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback
    ) /*override*/;

    virtual void GetStats(::webrtc::RTCStatsCollectorCallback* callback) /*override*/;

    virtual bool GetStats(
        ::webrtc::StatsObserver*                            observer,
        ::webrtc::MediaStreamTrackInterface*                track,
        ::webrtc::PeerConnectionInterface::StatsOutputLevel level
    ) /*override*/;

    virtual void ClearStatsCache() /*override*/;

    virtual ::webrtc::PeerConnectionInterface::SignalingState signaling_state() /*override*/;

    virtual ::webrtc::PeerConnectionInterface::IceConnectionState ice_connection_state() /*override*/;

    virtual ::webrtc::PeerConnectionInterface::IceConnectionState ice_connection_state_internal() /*override*/;

    virtual ::webrtc::PeerConnectionInterface::IceConnectionState standardized_ice_connection_state() /*override*/;

    virtual ::webrtc::PeerConnectionInterface::PeerConnectionState peer_connection_state() /*override*/;

    virtual ::webrtc::PeerConnectionInterface::IceGatheringState ice_gathering_state() /*override*/;

    virtual ::std::optional<bool> can_trickle_ice_candidates() /*override*/;

    virtual ::webrtc::SessionDescriptionInterface const* local_description() const /*override*/;

    virtual ::webrtc::SessionDescriptionInterface const* remote_description() const /*override*/;

    virtual ::webrtc::SessionDescriptionInterface const* current_local_description() const /*override*/;

    virtual ::webrtc::SessionDescriptionInterface const* current_remote_description() const /*override*/;

    virtual ::webrtc::SessionDescriptionInterface const* pending_local_description() const /*override*/;

    virtual ::webrtc::SessionDescriptionInterface const* pending_remote_description() const /*override*/;

    virtual void RestartIce() /*override*/;

    virtual void CreateOffer(
        ::webrtc::CreateSessionDescriptionObserver*                     observer,
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options
    ) /*override*/;

    virtual void CreateAnswer(
        ::webrtc::CreateSessionDescriptionObserver*                     observer,
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options
    ) /*override*/;

    virtual void SetLocalDescription(::webrtc::SetSessionDescriptionObserver* observer) /*override*/;

    virtual void SetLocalDescription(
        ::webrtc::SetSessionDescriptionObserver* observer,
        ::webrtc::SessionDescriptionInterface*   desc_ptr
    ) /*override*/;

    virtual void
    SetLocalDescription(::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface> observer) /*override*/;

    virtual void SetLocalDescription(
        ::std::unique_ptr<::webrtc::SessionDescriptionInterface>                desc,
        ::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface> observer
    ) /*override*/;

    virtual void SetRemoteDescription(
        ::webrtc::SetSessionDescriptionObserver* observer,
        ::webrtc::SessionDescriptionInterface*   desc_ptr
    ) /*override*/;

    virtual void SetRemoteDescription(
        ::std::unique_ptr<::webrtc::SessionDescriptionInterface>                 desc,
        ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface> observer
    ) /*override*/;

    virtual ::webrtc::PeerConnectionInterface::RTCConfiguration GetConfiguration() /*override*/;

    virtual ::webrtc::RTCError
    SetConfiguration(::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration) /*override*/;

    virtual void AddIceCandidate(
        ::std::unique_ptr<::webrtc::IceCandidate> candidate,
        ::std::function<void(::webrtc::RTCError)> callback
    ) /*override*/;

    virtual bool AddIceCandidate(::webrtc::IceCandidate const* ice_candidate) /*override*/;

    virtual bool RemoveIceCandidate(::webrtc::IceCandidate const* candidate) /*override*/;

    virtual bool RemoveIceCandidates(::std::vector<::webrtc::Candidate> const& candidates) /*override*/;

    virtual ::webrtc::RTCError SetBitrate(::webrtc::BitrateSettings const& bitrate) /*override*/;

    virtual void ReconfigureBandwidthEstimation(::webrtc::BandwidthEstimationSettings const& settings) /*override*/;

    virtual void SetAudioPlayout(bool playout) /*override*/;

    virtual void SetAudioRecording(bool recording) /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface>
    LookupDtlsTransportByMid(::std::string const& mid) /*override*/;

    virtual ::webrtc::scoped_refptr<::webrtc::SctpTransportInterface> GetSctpTransport() const /*override*/;

    virtual void AddAdaptationResource(::webrtc::scoped_refptr<::webrtc::Resource> resource) /*override*/;

    virtual bool StartRtcEventLog(::std::unique_ptr<::webrtc::RtcEventLogOutput> output) /*override*/;

    virtual bool
    StartRtcEventLog(::std::unique_ptr<::webrtc::RtcEventLogOutput> output, int64 output_period_ms) /*override*/;

    virtual void StopRtcEventLog() /*override*/;

    virtual void
    SetDataChannelEventObserver(::std::unique_ptr<::webrtc::DataChannelEventObserverInterface> observer) /*override*/;

    virtual void Close() /*override*/;

    virtual ::webrtc::Thread* signaling_thread() const /*override*/;

    virtual ::webrtc::Thread* network_thread() const /*override*/;

    virtual ::webrtc::Thread* worker_thread() const /*override*/;

    virtual ::std::string session_id() const /*override*/;

    virtual bool initial_offerer() const /*override*/;

    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>>
    GetTransceiversInternal() const /*override*/;

    virtual ::std::vector<::webrtc::DataChannelStats> GetDataChannelStats() const /*override*/;

    virtual ::std::optional<::std::string> sctp_transport_name() const /*override*/;

    virtual ::std::optional<::std::string> sctp_mid() const /*override*/;

    virtual ::std::vector<::webrtc::CandidateStats> GetPooledCandidateStats() const /*override*/;

    virtual ::std::map<::std::string, ::webrtc::TransportStats>
    GetTransportStatsByNames(::std::set<::std::string> const& transport_names) /*override*/;

    virtual ::webrtc::Call::Stats GetCallStats() /*override*/;

    virtual ::std::optional<::webrtc::AudioDeviceModule::Stats> GetAudioDeviceStats() /*override*/;

    virtual bool GetLocalCertificate(
        ::std::string const&                               transport_name,
        ::webrtc::scoped_refptr<::webrtc::RTCCertificate>* certificate
    ) /*override*/;

    virtual ::std::unique_ptr<::webrtc::SSLCertChain>
    GetRemoteSSLCertChain(::std::string const& transport_name) /*override*/;

    virtual bool IceRestartPending(::std::string const& content_name) const /*override*/;

    virtual bool NeedsIceRestart(::std::string const& content_name) const /*override*/;

    virtual bool GetSslRole(::std::string const& content_name, ::webrtc::SSLRole* role) /*override*/;

    virtual void NoteDataAddedEvent() /*override*/;

    virtual void RunWithObserver(::absl::AnyInvocable<void(::webrtc::PeerConnectionObserver*) &&> task) /*override*/;

    virtual bool IsClosed() const /*override*/;

    virtual ::std::optional<::webrtc::SSLRole> GetSctpSslRole_n() /*override*/;

    virtual void
    OnSctpDataChannelStateChanged(int channel_id, ::webrtc::DataChannelInterface::DataState state) /*override*/;

    virtual bool ShouldFireNegotiationNeededEvent(uint event_id) /*override*/;

    virtual ::webrtc::LegacyStatsCollector* legacy_stats() /*override*/;

    virtual ::webrtc::DataChannelController* data_channel_controller() /*override*/;

    virtual bool dtls_enabled() const /*override*/;

    virtual ::webrtc::PeerConnectionInterface::RTCConfiguration const* configuration() const /*override*/;

    virtual ::webrtc::PeerConnectionMessageHandler* message_handler() /*override*/;

    virtual ::webrtc::RtpTransmissionManager const* rtp_manager() const /*override*/;

    virtual ::webrtc::RtpTransmissionManager* rtp_manager() /*override*/;

    virtual ::webrtc::JsepTransportController* transport_controller_s() /*override*/;

    virtual ::webrtc::JsepTransportController* transport_controller_n() /*override*/;

    virtual ::webrtc::PortAllocator* port_allocator() /*override*/;

    virtual ::webrtc::Call* call_ptr() /*override*/;

    virtual ::webrtc::PeerConnectionFactoryInterface::Options const* options() const /*override*/;

    virtual void SetIceConnectionState(::webrtc::PeerConnectionInterface::IceConnectionState new_state) /*override*/;

    virtual void NoteUsageEvent(::webrtc::UsageEvent event) /*override*/;

    virtual void AddRemoteCandidate(::std::string_view mid, ::webrtc::Candidate const& candidate) /*override*/;

    virtual void ReportSdpBundleUsage(::webrtc::SessionDescriptionInterface const& remote_description) /*override*/;

    virtual bool IsUnifiedPlan() const /*override*/;

    virtual bool ValidateBundleSettings(
        ::webrtc::SessionDescription const*                             desc,
        ::std::map<::std::string, ::webrtc::ContentGroup const*> const& bundle_groups_by_mid
    ) /*override*/;

    virtual bool CreateDataChannelTransport(::std::string_view mid) /*override*/;

    virtual void DestroyDataChannelTransport(::webrtc::RTCError error) /*override*/;

    virtual ::webrtc::RTCError StartSctpTransport(::webrtc::SctpOptions const& options) /*override*/;

    virtual ::webrtc::CryptoOptions GetCryptoOptions() /*override*/;

    virtual bool SrtpRequired() const /*override*/;

    virtual ::webrtc::FieldTrialsView const& trials() const /*override*/;

    virtual ::webrtc::NetworkControllerInterface* GetNetworkController() /*override*/;

    virtual ::webrtc::PayloadTypePicker& payload_type_picker() /*override*/;

    virtual ~PeerConnection() /*override*/;

    virtual bool OnTransportChanged(
        ::std::string const&                             mid,
        ::webrtc::RtpTransportInternal*                  rtp_transport,
        ::webrtc::scoped_refptr<::webrtc::DtlsTransport> dtls_transport,
        ::webrtc::DataChannelTransportInterface*         data_channel_transport
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> AddTrack(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track,
        ::std::vector<::std::string> const&                          stream_ids,
        ::std::vector<::webrtc::RtpEncodingParameters> const*        init_send_encodings
    );

    MCNAPI bool CanAttemptDtlsStunPiggybacking();

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
    FindTransceiverBySender(::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> sender);

    MCNAPI ::webrtc::PeerConnection::InitializePortAllocatorResult InitializePortAllocator_n(
        ::std::set<::webrtc::SocketAddress> const&                                stun_servers,
        ::std::vector<::webrtc::RelayServerConfig> const&                         turn_servers,
        ::std::vector<::std::shared_ptr<::webrtc::StaticStunServer const>> const& static_stun_servers,
        ::webrtc::PeerConnectionInterface::RTCConfiguration const&                configuration
    );

    MCNAPI ::webrtc::JsepTransportController*
    InitializeTransportController_n(::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration);

    MCNAPI void OnIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState new_state);

    MCNAPI void OnTransportControllerCandidatesGathered(
        ::std::string const&                      transport_name,
        ::std::vector<::webrtc::Candidate> const& candidates
    );

    MCNAPI void OnTransportControllerConnectionState(::webrtc::IceConnectionState state);

    MCNAPI PeerConnection(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration,
        ::webrtc::Environment const&                               env,
        ::webrtc::scoped_refptr<::webrtc::ConnectionContext>       context,
        ::webrtc::PeerConnectionFactoryInterface::Options const&   options,
        bool                                                       is_unified_plan,
        ::std::unique_ptr<::webrtc::Call>                          call,
        ::webrtc::PeerConnectionDependencies&                      dependencies,
        ::std::set<::webrtc::SocketAddress> const&                 stun_servers,
        ::std::vector<::webrtc::RelayServerConfig> const&          turn_servers,
        bool                                                       dtls_enabled
    );

    MCNAPI void ReportFirstConnectUsageMetrics();

    MCNAPI void ReportTransportStats(
        ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>>
            transceivers
    );

    MCNAPI void SetSctpTransportName(::std::string sctp_transport_name);

    MCNAPI ::std::optional<::std::string> SetupDataChannelTransport_n(::std::string_view mid);

    MCNAPI void TeardownDataChannelTransport_n(::webrtc::RTCError error);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::PeerConnection> Create(
        ::webrtc::Environment const&                               env,
        ::webrtc::scoped_refptr<::webrtc::ConnectionContext>       context,
        ::webrtc::PeerConnectionFactoryInterface::Options const&   options,
        ::std::unique_ptr<::webrtc::Call>                          call,
        ::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration,
        ::webrtc::PeerConnectionDependencies&                      dependencies,
        ::std::set<::webrtc::SocketAddress> const&                 stun_servers,
        ::std::vector<::webrtc::RelayServerConfig> const&          turn_servers
    );

    MCNAPI static void ReportNegotiatedCiphers(
        bool                                   dtls_enabled,
        ::webrtc::TransportStats const&        stats,
        ::std::set<::webrtc::MediaType> const& media_types
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration,
        ::webrtc::Environment const&                               env,
        ::webrtc::scoped_refptr<::webrtc::ConnectionContext>       context,
        ::webrtc::PeerConnectionFactoryInterface::Options const&   options,
        bool                                                       is_unified_plan,
        ::std::unique_ptr<::webrtc::Call>                          call,
        ::webrtc::PeerConnectionDependencies&                      dependencies,
        ::std::set<::webrtc::SocketAddress> const&                 stun_servers,
        ::std::vector<::webrtc::RelayServerConfig> const&          turn_servers,
        bool                                                       dtls_enabled
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::scoped_refptr<::webrtc::StreamCollectionInterface> $local_streams();

    MCNAPI ::webrtc::scoped_refptr<::webrtc::StreamCollectionInterface> $remote_streams();

    MCNAPI bool $AddStream(::webrtc::MediaStreamInterface* local_stream);

    MCNAPI void $RemoveStream(::webrtc::MediaStreamInterface* local_stream);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> $AddTrack(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track,
        ::std::vector<::std::string> const&                          stream_ids,
        ::std::vector<::webrtc::RtpEncodingParameters> const&        init_send_encodings
    );

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> $AddTrack(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track,
        ::std::vector<::std::string> const&                          stream_ids
    );

    MCNAPI ::webrtc::RTCError $RemoveTrackOrError(::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> sender);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> $AddTransceiver(
        ::webrtc::MediaType                                          media_type,
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track,
        ::webrtc::RtpTransceiverInit const&                          init,
        bool                                                         update_negotiation_needed
    );

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>>
    $AddTransceiver(::webrtc::MediaType media_type, ::webrtc::RtpTransceiverInit const& init);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>>
    $AddTransceiver(::webrtc::MediaType media_type);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> $AddTransceiver(
        ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track,
        ::webrtc::RtpTransceiverInit const&                          init
    );

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>>
    $AddTransceiver(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>
    $CreateSender(::std::string const& kind, ::std::string const& stream_id);

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> $GetSenders() const;

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>> $GetReceivers() const;

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> $GetTransceivers() const;

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::DataChannelInterface>>
    $CreateDataChannelOrError(::std::string const& label, ::webrtc::DataChannelInit const* config);

    MCNAPI void $GetStats(
        ::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>      selector,
        ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback
    );

    MCNAPI void $GetStats(
        ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>        selector,
        ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback
    );

    MCNAPI void $GetStats(::webrtc::RTCStatsCollectorCallback* callback);

    MCNAPI bool $GetStats(
        ::webrtc::StatsObserver*                            observer,
        ::webrtc::MediaStreamTrackInterface*                track,
        ::webrtc::PeerConnectionInterface::StatsOutputLevel level
    );

    MCNAPI void $ClearStatsCache();

    MCNAPI ::webrtc::PeerConnectionInterface::SignalingState $signaling_state();

    MCNAPI ::webrtc::PeerConnectionInterface::IceConnectionState $ice_connection_state();

    MCNAPI ::webrtc::PeerConnectionInterface::IceConnectionState $ice_connection_state_internal();

    MCNAPI ::webrtc::PeerConnectionInterface::IceConnectionState $standardized_ice_connection_state();

    MCNAPI ::webrtc::PeerConnectionInterface::PeerConnectionState $peer_connection_state();

    MCNAPI ::webrtc::PeerConnectionInterface::IceGatheringState $ice_gathering_state();

    MCNAPI ::std::optional<bool> $can_trickle_ice_candidates();

    MCNAPI ::webrtc::SessionDescriptionInterface const* $local_description() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $remote_description() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $current_local_description() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $current_remote_description() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $pending_local_description() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $pending_remote_description() const;

    MCNAPI void $RestartIce();

    MCNAPI void $CreateOffer(
        ::webrtc::CreateSessionDescriptionObserver*                     observer,
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options
    );

    MCNAPI void $CreateAnswer(
        ::webrtc::CreateSessionDescriptionObserver*                     observer,
        ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options
    );

    MCNAPI void $SetLocalDescription(::webrtc::SetSessionDescriptionObserver* observer);

    MCNAPI void $SetLocalDescription(
        ::webrtc::SetSessionDescriptionObserver* observer,
        ::webrtc::SessionDescriptionInterface*   desc_ptr
    );

    MCNAPI void $SetLocalDescription(::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface> observer);

    MCNAPI void $SetLocalDescription(
        ::std::unique_ptr<::webrtc::SessionDescriptionInterface>                desc,
        ::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface> observer
    );

    MCNAPI void $SetRemoteDescription(
        ::webrtc::SetSessionDescriptionObserver* observer,
        ::webrtc::SessionDescriptionInterface*   desc_ptr
    );

    MCNAPI void $SetRemoteDescription(
        ::std::unique_ptr<::webrtc::SessionDescriptionInterface>                 desc,
        ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface> observer
    );

    MCNAPI ::webrtc::PeerConnectionInterface::RTCConfiguration $GetConfiguration();

    MCNAPI ::webrtc::RTCError
    $SetConfiguration(::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration);

    MCNAPI void $AddIceCandidate(
        ::std::unique_ptr<::webrtc::IceCandidate> candidate,
        ::std::function<void(::webrtc::RTCError)> callback
    );

    MCNAPI bool $AddIceCandidate(::webrtc::IceCandidate const* ice_candidate);

    MCNAPI bool $RemoveIceCandidate(::webrtc::IceCandidate const* candidate);

    MCNAPI bool $RemoveIceCandidates(::std::vector<::webrtc::Candidate> const& candidates);

    MCNAPI ::webrtc::RTCError $SetBitrate(::webrtc::BitrateSettings const& bitrate);

    MCNAPI void $ReconfigureBandwidthEstimation(::webrtc::BandwidthEstimationSettings const& settings);

    MCNAPI void $SetAudioPlayout(bool playout);

    MCNAPI void $SetAudioRecording(bool recording);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface>
    $LookupDtlsTransportByMid(::std::string const& mid);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::SctpTransportInterface> $GetSctpTransport() const;

    MCNAPI void $AddAdaptationResource(::webrtc::scoped_refptr<::webrtc::Resource> resource);

    MCNAPI bool $StartRtcEventLog(::std::unique_ptr<::webrtc::RtcEventLogOutput> output);

    MCNAPI bool $StartRtcEventLog(::std::unique_ptr<::webrtc::RtcEventLogOutput> output, int64 output_period_ms);

    MCNAPI void $StopRtcEventLog();

    MCNAPI void $SetDataChannelEventObserver(::std::unique_ptr<::webrtc::DataChannelEventObserverInterface> observer);

    MCNAPI void $Close();

    MCNAPI ::webrtc::Thread* $signaling_thread() const;

    MCNAPI ::webrtc::Thread* $network_thread() const;

    MCNAPI ::webrtc::Thread* $worker_thread() const;

    MCNAPI ::std::string $session_id() const;

    MCNAPI bool $initial_offerer() const;

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>>
    $GetTransceiversInternal() const;

    MCNAPI ::std::vector<::webrtc::DataChannelStats> $GetDataChannelStats() const;

    MCNAPI ::std::optional<::std::string> $sctp_transport_name() const;

    MCNAPI ::std::optional<::std::string> $sctp_mid() const;

    MCNAPI ::std::vector<::webrtc::CandidateStats> $GetPooledCandidateStats() const;

    MCNAPI ::std::map<::std::string, ::webrtc::TransportStats>
    $GetTransportStatsByNames(::std::set<::std::string> const& transport_names);

    MCNAPI ::webrtc::Call::Stats $GetCallStats();

    MCNAPI ::std::optional<::webrtc::AudioDeviceModule::Stats> $GetAudioDeviceStats();

    MCNAPI bool $GetLocalCertificate(
        ::std::string const&                               transport_name,
        ::webrtc::scoped_refptr<::webrtc::RTCCertificate>* certificate
    );

    MCNAPI ::std::unique_ptr<::webrtc::SSLCertChain> $GetRemoteSSLCertChain(::std::string const& transport_name);

    MCNAPI bool $IceRestartPending(::std::string const& content_name) const;

    MCNAPI bool $NeedsIceRestart(::std::string const& content_name) const;

    MCNAPI bool $GetSslRole(::std::string const& content_name, ::webrtc::SSLRole* role);

    MCNAPI void $NoteDataAddedEvent();

    MCNAPI void $RunWithObserver(::absl::AnyInvocable<void(::webrtc::PeerConnectionObserver*) &&> task);

    MCNAPI bool $IsClosed() const;

    MCNAPI ::std::optional<::webrtc::SSLRole> $GetSctpSslRole_n();

    MCNAPI void $OnSctpDataChannelStateChanged(int channel_id, ::webrtc::DataChannelInterface::DataState state);

    MCNAPI bool $ShouldFireNegotiationNeededEvent(uint event_id);

    MCNAPI ::webrtc::LegacyStatsCollector* $legacy_stats();

    MCNAPI ::webrtc::DataChannelController* $data_channel_controller();

    MCNAPI bool $dtls_enabled() const;

    MCNAPI ::webrtc::PeerConnectionInterface::RTCConfiguration const* $configuration() const;

    MCNAPI ::webrtc::PeerConnectionMessageHandler* $message_handler();

    MCNAPI ::webrtc::RtpTransmissionManager const* $rtp_manager() const;

    MCNAPI ::webrtc::RtpTransmissionManager* $rtp_manager();

    MCNAPI ::webrtc::JsepTransportController* $transport_controller_s();

    MCNAPI ::webrtc::JsepTransportController* $transport_controller_n();

    MCNAPI ::webrtc::PortAllocator* $port_allocator();

    MCNAPI ::webrtc::Call* $call_ptr();

    MCNAPI ::webrtc::PeerConnectionFactoryInterface::Options const* $options() const;

    MCNAPI void $SetIceConnectionState(::webrtc::PeerConnectionInterface::IceConnectionState new_state);

    MCNAPI void $NoteUsageEvent(::webrtc::UsageEvent event);

    MCNAPI void $AddRemoteCandidate(::std::string_view mid, ::webrtc::Candidate const& candidate);

    MCNAPI void $ReportSdpBundleUsage(::webrtc::SessionDescriptionInterface const& remote_description);

    MCNAPI bool $IsUnifiedPlan() const;

    MCNAPI bool $ValidateBundleSettings(
        ::webrtc::SessionDescription const*                             desc,
        ::std::map<::std::string, ::webrtc::ContentGroup const*> const& bundle_groups_by_mid
    );

    MCNAPI bool $CreateDataChannelTransport(::std::string_view mid);

    MCNAPI void $DestroyDataChannelTransport(::webrtc::RTCError error);

    MCNAPI ::webrtc::RTCError $StartSctpTransport(::webrtc::SctpOptions const& options);

    MCNAPI ::webrtc::CryptoOptions $GetCryptoOptions();

    MCNAPI bool $SrtpRequired() const;

    MCNAPI ::webrtc::FieldTrialsView const& $trials() const;

    MCNAPI ::webrtc::NetworkControllerInterface* $GetNetworkController();

    MCNAPI ::webrtc::PayloadTypePicker& $payload_type_picker();

    MCNAPI bool $OnTransportChanged(
        ::std::string const&                             mid,
        ::webrtc::RtpTransportInternal*                  rtp_transport,
        ::webrtc::scoped_refptr<::webrtc::DtlsTransport> dtls_transport,
        ::webrtc::DataChannelTransportInterface*         data_channel_transport
    );


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForPeerConnectionInterface();

    MCNAPI static void** $vftableForPeerConnectionSdpMethods();
    // NOLINTEND
};

} // namespace webrtc
