#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/IceConnectionState.h"
#include "mc/external/cricket/IceGatheringState.h"
#include "mc/external/cricket/MediaType.h"
#include "mc/external/rtc/SSLHandshakeError.h"
#include "mc/external/rtc/SSLRole.h"
#include "mc/external/webrtc/AudioDeviceModule.h"
#include "mc/external/webrtc/Call.h"
#include "mc/external/webrtc/DataChannelInterface.h"
#include "mc/external/webrtc/JsepTransportController.h"
#include "mc/external/webrtc/PeerConnectionFactoryInterface.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/PeerConnectionInternal.h"
#include "mc/external/webrtc/PortPrunePolicy.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/external/webrtc/UsageEvent.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class Candidate; }
namespace cricket { class CandidateStats; }
namespace cricket { class ContentGroup; }
namespace cricket { class PortAllocator; }
namespace cricket { class SessionDescription; }
namespace cricket { struct CandidatePairChangeEvent; }
namespace cricket { struct IceCandidateErrorEvent; }
namespace cricket { struct RelayServerConfig; }
namespace cricket { struct TransportStats; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class RTCCertificate; }
namespace rtc { class SSLCertChain; }
namespace rtc { class SocketAddress; }
namespace rtc { class Thread; }
namespace webrtc { class Call; }
namespace webrtc { class ConnectionContext; }
namespace webrtc { class CreateSessionDescriptionObserver; }
namespace webrtc { class DataChannelController; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class DataChannelTransportInterface; }
namespace webrtc { class DtlsTransport; }
namespace webrtc { class DtlsTransportInterface; }
namespace webrtc { class Environment; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class JsepTransportController; }
namespace webrtc { class LegacyStatsCollector; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class PeerConnectionMessageHandler; }
namespace webrtc { class PeerConnectionObserver; }
namespace webrtc { class RTCError; }
namespace webrtc { class RTCStatsCollectorCallback; }
namespace webrtc { class Resource; }
namespace webrtc { class RtcEventLogOutput; }
namespace webrtc { class RtpPacketReceived; }
namespace webrtc { class RtpReceiverInterface; }
namespace webrtc { class RtpSenderInterface; }
namespace webrtc { class RtpTransceiver; }
namespace webrtc { class RtpTransceiverInterface; }
namespace webrtc { class RtpTransmissionManager; }
namespace webrtc { class RtpTransportInternal; }
namespace webrtc { class SctpTransportInterface; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class SetLocalDescriptionObserverInterface; }
namespace webrtc { class SetRemoteDescriptionObserverInterface; }
namespace webrtc { class SetSessionDescriptionObserver; }
namespace webrtc { class StatsObserver; }
namespace webrtc { class StreamCollectionInterface; }
namespace webrtc { class TurnCustomizer; }
namespace webrtc { struct BandwidthEstimationSettings; }
namespace webrtc { struct BitrateSettings; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct DataChannelInit; }
namespace webrtc { struct DataChannelStats; }
namespace webrtc { struct PeerConnectionDependencies; }
namespace webrtc { struct RtpEncodingParameters; }
namespace webrtc { struct RtpTransceiverInit; }
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
    ::ll::UntypedStorage<8, 40> mUnka7df9e;
    ::ll::UntypedStorage<8, 8> mUnk754baf;
    ::ll::UntypedStorage<4, 20> mUnkeeb554;
    ::ll::UntypedStorage<8, 8> mUnkdc5ffe;
    ::ll::UntypedStorage<1, 1> mUnk990d1e;
    ::ll::UntypedStorage<4, 4> mUnkc0221b;
    ::ll::UntypedStorage<4, 4> mUnkc7cd9b;
    ::ll::UntypedStorage<4, 4> mUnkee6753;
    ::ll::UntypedStorage<4, 4> mUnka964f1;
    ::ll::UntypedStorage<8, 384> mUnk8b7b48;
    ::ll::UntypedStorage<8, 8> mUnkc3e686;
    ::ll::UntypedStorage<8, 8> mUnk33a05e;
    ::ll::UntypedStorage<8, 8> mUnkbcb4dc;
    ::ll::UntypedStorage<8, 8> mUnk1f4add;
    ::ll::UntypedStorage<8, 8> mUnk91caae;
    ::ll::UntypedStorage<8, 8> mUnke7c5b7;
    ::ll::UntypedStorage<8, 8> mUnk74e9a5;
    ::ll::UntypedStorage<8, 8> mUnk8c02af;
    ::ll::UntypedStorage<8, 8> mUnka29f89;
    ::ll::UntypedStorage<8, 8> mUnk96653c;
    ::ll::UntypedStorage<8, 8> mUnk93e1d2;
    ::ll::UntypedStorage<8, 32> mUnk7b1d8e;
    ::ll::UntypedStorage<8, 8> mUnk6406aa;
    ::ll::UntypedStorage<8, 8> mUnk7682e5;
    ::ll::UntypedStorage<8, 40> mUnkf7188d;
    ::ll::UntypedStorage<8, 40> mUnk4e4f8a;
    ::ll::UntypedStorage<8, 32> mUnk92c889;
    ::ll::UntypedStorage<8, 8> mUnk5edebd;
    ::ll::UntypedStorage<1, 1> mUnk3ef1df;
    ::ll::UntypedStorage<4, 4> mUnk46d428;
    ::ll::UntypedStorage<1, 1> mUnk43996c;
    ::ll::UntypedStorage<8, 128> mUnk5eba9b;
    ::ll::UntypedStorage<8, 16> mUnkaa09b8;
    ::ll::UntypedStorage<8, 8> mUnka67d78;
    ::ll::UntypedStorage<1, 1> mUnk438159;
    ::ll::UntypedStorage<8, 16> mUnk8fb0ae;
    // NOLINTEND

public:
    // prevent constructor by default
    PeerConnection& operator=(PeerConnection const&);
    PeerConnection(PeerConnection const&);
    PeerConnection();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::webrtc::scoped_refptr<::webrtc::StreamCollectionInterface> local_streams() /*override*/;

    // vIndex: 4
    virtual ::webrtc::scoped_refptr<::webrtc::StreamCollectionInterface> remote_streams() /*override*/;

    // vIndex: 5
    virtual bool AddStream(::webrtc::MediaStreamInterface* local_stream) /*override*/;

    // vIndex: 6
    virtual void RemoveStream(::webrtc::MediaStreamInterface* remove_stream) /*override*/;

    // vIndex: 8
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> AddTrack(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track, ::std::vector<::std::string> const& stream_ids) /*override*/;

    // vIndex: 7
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> AddTrack(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track, ::std::vector<::std::string> const& stream_ids, ::std::vector<::webrtc::RtpEncodingParameters> const& init_send_encodings) /*override*/;

    // vIndex: 9
    virtual ::webrtc::RTCError RemoveTrackOrError(::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> sender) /*override*/;

    // vIndex: 13
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> AddTransceiver(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track) /*override*/;

    // vIndex: 12
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> AddTransceiver(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track, ::webrtc::RtpTransceiverInit const& init) /*override*/;

    // vIndex: 11
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> AddTransceiver(::cricket::MediaType media_type) /*override*/;

    // vIndex: 10
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> AddTransceiver(::cricket::MediaType media_type, ::webrtc::RtpTransceiverInit const& init) /*override*/;

    // vIndex: 25
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> AddTransceiver(::cricket::MediaType media_type, ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track, ::webrtc::RtpTransceiverInit const& init, bool update_negotiation_needed) /*override*/;

    // vIndex: 14
    virtual ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> CreateSender(::std::string const& kind, ::std::string const& stream_id) /*override*/;

    // vIndex: 15
    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> GetSenders() const /*override*/;

    // vIndex: 16
    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>> GetReceivers() const /*override*/;

    // vIndex: 17
    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> GetTransceivers() const /*override*/;

    // vIndex: 23
    virtual ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::DataChannelInterface>> CreateDataChannelOrError(::std::string const& label, ::webrtc::DataChannelInit const* config) /*override*/;

    // vIndex: 21
    virtual bool GetStats(::webrtc::StatsObserver* observer, ::webrtc::MediaStreamTrackInterface* track, ::webrtc::PeerConnectionInterface::StatsOutputLevel level) /*override*/;

    // vIndex: 20
    virtual void GetStats(::webrtc::RTCStatsCollectorCallback* callback) /*override*/;

    // vIndex: 19
    virtual void GetStats(::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> selector, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback) /*override*/;

    // vIndex: 18
    virtual void GetStats(::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface> selector, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback) /*override*/;

    // vIndex: 22
    virtual void ClearStatsCache() /*override*/;

    // vIndex: 52
    virtual ::webrtc::PeerConnectionInterface::SignalingState signaling_state() /*override*/;

    // vIndex: 53
    virtual ::webrtc::PeerConnectionInterface::IceConnectionState ice_connection_state() /*override*/;

    // vIndex: 19
    virtual ::webrtc::PeerConnectionInterface::IceConnectionState ice_connection_state_internal() /*override*/;

    // vIndex: 54
    virtual ::webrtc::PeerConnectionInterface::IceConnectionState standardized_ice_connection_state() /*override*/;

    // vIndex: 55
    virtual ::webrtc::PeerConnectionInterface::PeerConnectionState peer_connection_state() /*override*/;

    // vIndex: 56
    virtual ::webrtc::PeerConnectionInterface::IceGatheringState ice_gathering_state() /*override*/;

    // vIndex: 57
    virtual ::std::optional<bool> can_trickle_ice_candidates() /*override*/;

    // vIndex: 25
    virtual ::webrtc::SessionDescriptionInterface const* local_description() const /*override*/;

    // vIndex: 26
    virtual ::webrtc::SessionDescriptionInterface const* remote_description() const /*override*/;

    // vIndex: 27
    virtual ::webrtc::SessionDescriptionInterface const* current_local_description() const /*override*/;

    // vIndex: 28
    virtual ::webrtc::SessionDescriptionInterface const* current_remote_description() const /*override*/;

    // vIndex: 29
    virtual ::webrtc::SessionDescriptionInterface const* pending_local_description() const /*override*/;

    // vIndex: 30
    virtual ::webrtc::SessionDescriptionInterface const* pending_remote_description() const /*override*/;

    // vIndex: 31
    virtual void RestartIce() /*override*/;

    // vIndex: 32
    virtual void CreateOffer(::webrtc::CreateSessionDescriptionObserver* observer, ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options) /*override*/;

    // vIndex: 33
    virtual void CreateAnswer(::webrtc::CreateSessionDescriptionObserver* observer, ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options) /*override*/;

    // vIndex: 37
    virtual void SetLocalDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface> desc, ::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface> observer) /*override*/;

    // vIndex: 36
    virtual void SetLocalDescription(::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface> observer) /*override*/;

    // vIndex: 35
    virtual void SetLocalDescription(::webrtc::SetSessionDescriptionObserver* observer, ::webrtc::SessionDescriptionInterface* desc_ptr) /*override*/;

    // vIndex: 34
    virtual void SetLocalDescription(::webrtc::SetSessionDescriptionObserver* observer) /*override*/;

    // vIndex: 39
    virtual void SetRemoteDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface> desc, ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface> observer) /*override*/;

    // vIndex: 38
    virtual void SetRemoteDescription(::webrtc::SetSessionDescriptionObserver* observer, ::webrtc::SessionDescriptionInterface* desc_ptr) /*override*/;

    // vIndex: 41
    virtual ::webrtc::PeerConnectionInterface::RTCConfiguration GetConfiguration() /*override*/;

    // vIndex: 42
    virtual ::webrtc::RTCError SetConfiguration(::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration) /*override*/;

    // vIndex: 44
    virtual bool AddIceCandidate(::webrtc::IceCandidateInterface const* ice_candidate) /*override*/;

    // vIndex: 43
    virtual void AddIceCandidate(::std::unique_ptr<::webrtc::IceCandidateInterface> candidate, ::std::function<void(::webrtc::RTCError)> callback) /*override*/;

    // vIndex: 45
    virtual bool RemoveIceCandidates(::std::vector<::cricket::Candidate> const& candidates) /*override*/;

    // vIndex: 46
    virtual ::webrtc::RTCError SetBitrate(::webrtc::BitrateSettings const& bitrate) /*override*/;

    // vIndex: 47
    virtual void ReconfigureBandwidthEstimation(::webrtc::BandwidthEstimationSettings const& settings) /*override*/;

    // vIndex: 48
    virtual void SetAudioPlayout(bool playout) /*override*/;

    // vIndex: 49
    virtual void SetAudioRecording(bool recording) /*override*/;

    // vIndex: 50
    virtual ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> LookupDtlsTransportByMid(::std::string const& mid) /*override*/;

    // vIndex: 51
    virtual ::webrtc::scoped_refptr<::webrtc::SctpTransportInterface> GetSctpTransport() const /*override*/;

    // vIndex: 58
    virtual void AddAdaptationResource(::webrtc::scoped_refptr<::webrtc::Resource> resource) /*override*/;

    // vIndex: 60
    virtual bool StartRtcEventLog(::std::unique_ptr<::webrtc::RtcEventLogOutput> output, int64 output_period_ms) /*override*/;

    // vIndex: 59
    virtual bool StartRtcEventLog(::std::unique_ptr<::webrtc::RtcEventLogOutput> output) /*override*/;

    // vIndex: 61
    virtual void StopRtcEventLog() /*override*/;

    // vIndex: 62
    virtual void Close() /*override*/;

    // vIndex: 63
    virtual ::rtc::Thread* signaling_thread() const /*override*/;

    // vIndex: 64
    virtual ::rtc::Thread* network_thread() const /*override*/;

    // vIndex: 65
    virtual ::rtc::Thread* worker_thread() const /*override*/;

    // vIndex: 1
    virtual ::std::string session_id() const /*override*/;

    // vIndex: 66
    virtual bool initial_offerer() const /*override*/;

    // vIndex: 67
    virtual ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>> GetTransceiversInternal() const /*override*/;

    // vIndex: 68
    virtual ::std::vector<::webrtc::DataChannelStats> GetDataChannelStats() const /*override*/;

    // vIndex: 69
    virtual ::std::optional<::std::string> sctp_transport_name() const /*override*/;

    // vIndex: 3
    virtual ::std::optional<::std::string> sctp_mid() const /*override*/;

    // vIndex: 70
    virtual ::std::vector<::cricket::CandidateStats> GetPooledCandidateStats() const /*override*/;

    // vIndex: 71
    virtual ::std::map<::std::string, ::cricket::TransportStats> GetTransportStatsByNames(::std::set<::std::string> const& transport_names) /*override*/;

    // vIndex: 72
    virtual ::webrtc::Call::Stats GetCallStats() /*override*/;

    // vIndex: 73
    virtual ::std::optional<::webrtc::AudioDeviceModule::Stats> GetAudioDeviceStats() /*override*/;

    // vIndex: 74
    virtual bool GetLocalCertificate(::std::string const& transport_name, ::webrtc::scoped_refptr<::rtc::RTCCertificate>* certificate) /*override*/;

    // vIndex: 75
    virtual ::std::unique_ptr<::rtc::SSLCertChain> GetRemoteSSLCertChain(::std::string const& transport_name) /*override*/;

    // vIndex: 76
    virtual bool IceRestartPending(::std::string const& content_name) const /*override*/;

    // vIndex: 2
    virtual bool NeedsIceRestart(::std::string const& content_name) const /*override*/;

    // vIndex: 77
    virtual bool GetSslRole(::std::string const& content_name, ::rtc::SSLRole* role) /*override*/;

    // vIndex: 78
    virtual void NoteDataAddedEvent() /*override*/;

    // vIndex: 17
    virtual ::webrtc::PeerConnectionObserver* Observer() const /*override*/;

    // vIndex: 22
    virtual bool IsClosed() const /*override*/;

    // vIndex: 18
    virtual ::std::optional<::rtc::SSLRole> GetSctpSslRole_n() /*override*/;

    // vIndex: 79
    virtual void OnSctpDataChannelStateChanged(int channel_id, ::webrtc::DataChannelInterface::DataState state) /*override*/;

    // vIndex: 40
    virtual bool ShouldFireNegotiationNeededEvent(uint event_id) /*override*/;

    // vIndex: 16
    virtual ::webrtc::LegacyStatsCollector* legacy_stats() /*override*/;

    // vIndex: 14
    virtual ::webrtc::DataChannelController* data_channel_controller() /*override*/;

    // vIndex: 9
    virtual bool dtls_enabled() const /*override*/;

    // vIndex: 4
    virtual ::webrtc::PeerConnectionInterface::RTCConfiguration const* configuration() const /*override*/;

    // vIndex: 6
    virtual ::webrtc::PeerConnectionMessageHandler* message_handler() /*override*/;

    // vIndex: 8
    virtual ::webrtc::RtpTransmissionManager* rtp_manager() /*override*/;

    // vIndex: 7
    virtual ::webrtc::RtpTransmissionManager const* rtp_manager() const /*override*/;

    // vIndex: 12
    virtual ::webrtc::JsepTransportController* transport_controller_s() /*override*/;

    // vIndex: 13
    virtual ::webrtc::JsepTransportController* transport_controller_n() /*override*/;

    // vIndex: 15
    virtual ::cricket::PortAllocator* port_allocator() /*override*/;

    // vIndex: 28
    virtual ::webrtc::Call* call_ptr() /*override*/;

    // vIndex: 10
    virtual ::webrtc::PeerConnectionFactoryInterface::Options const* options() const /*override*/;

    // vIndex: 20
    virtual void SetIceConnectionState(::webrtc::PeerConnectionInterface::IceConnectionState new_state) /*override*/;

    // vIndex: 21
    virtual void NoteUsageEvent(::webrtc::UsageEvent event) /*override*/;

    // vIndex: 27
    virtual void AddRemoteCandidate(::std::string const& mid, ::cricket::Candidate const& candidate) /*override*/;

    // vIndex: 5
    virtual void ReportSdpBundleUsage(::webrtc::SessionDescriptionInterface const& remote_description) /*override*/;

    // vIndex: 23
    virtual bool IsUnifiedPlan() const /*override*/;

    // vIndex: 24
    virtual bool ValidateBundleSettings(::cricket::SessionDescription const* desc, ::std::map<::std::string, ::cricket::ContentGroup const*> const& bundle_groups_by_mid) /*override*/;

    // vIndex: 30
    virtual bool CreateDataChannelTransport(::std::string_view mid) /*override*/;

    // vIndex: 31
    virtual void DestroyDataChannelTransport(::webrtc::RTCError error) /*override*/;

    // vIndex: 26
    virtual void StartSctpTransport(int local_port, int remote_port, int max_message_size) /*override*/;

    // vIndex: 11
    virtual ::webrtc::CryptoOptions GetCryptoOptions() /*override*/;

    // vIndex: 29
    virtual bool SrtpRequired() const /*override*/;

    // vIndex: 32
    virtual ::webrtc::FieldTrialsView const& trials() const /*override*/;

    // vIndex: 0
    virtual ~PeerConnection() /*override*/;

    // vIndex: 1
    virtual bool OnTransportChanged(::std::string const& mid, ::webrtc::RtpTransportInternal* rtp_transport, ::webrtc::scoped_refptr<::webrtc::DtlsTransport> dtls_transport, ::webrtc::DataChannelTransportInterface* data_channel_transport) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> AddTrack(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track, ::std::vector<::std::string> const& stream_ids, ::std::vector<::webrtc::RtpEncodingParameters> const* init_send_encodings);

    MCNAPI bool ConfiguredForMedia() const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> FindTransceiverBySender(::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> sender);

    MCNAPI bool GetLocalCandidateMediaIndex(::std::string const& content_name, int* sdp_mline_index);

    MCNAPI ::webrtc::RTCError Initialize(::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration, ::webrtc::PeerConnectionDependencies dependencies);

    MCNAPI ::webrtc::PeerConnection::InitializePortAllocatorResult InitializePortAllocator_n(::std::set<::rtc::SocketAddress> const& stun_servers, ::std::vector<::cricket::RelayServerConfig> const& turn_servers, ::std::vector<::std::pair<::rtc::SocketAddress, ::rtc::SocketAddress>> const& mapped_ports, ::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration);

    MCNAPI ::std::function<void(::rtc::CopyOnWriteBuffer const&, int64)> InitializeRtcpCallback();

    MCNAPI ::webrtc::JsepTransportController* InitializeTransportController_n(::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration, ::webrtc::PeerConnectionDependencies const& dependencies);

    MCNAPI ::std::function<void(::webrtc::RtpPacketReceived const&)> InitializeUnDemuxablePacketHandler();

    MCNAPI void OnIceCandidate(::std::unique_ptr<::webrtc::IceCandidateInterface> candidate);

    MCNAPI void OnIceCandidateError(::std::string const& address, int port, ::std::string const& url, int error_code, ::std::string const& error_text);

    MCNAPI void OnIceCandidatesRemoved(::std::vector<::cricket::Candidate> const& candidates);

    MCNAPI void OnIceGatheringChange(::webrtc::PeerConnectionInterface::IceGatheringState new_state);

    MCNAPI void OnSelectedCandidatePairChanged(::cricket::CandidatePairChangeEvent const& event);

    MCNAPI void OnTransportControllerCandidateChanged(::cricket::CandidatePairChangeEvent const& event);

    MCNAPI void OnTransportControllerCandidateError(::cricket::IceCandidateErrorEvent const& event);

    MCNAPI void OnTransportControllerCandidatesGathered(::std::string const& transport_name, ::std::vector<::cricket::Candidate> const& candidates);

    MCNAPI void OnTransportControllerCandidatesRemoved(::std::vector<::cricket::Candidate> const& candidates);

    MCNAPI void OnTransportControllerConnectionState(::cricket::IceConnectionState state);

    MCNAPI void OnTransportControllerDtlsHandshakeError(::rtc::SSLHandshakeError error);

    MCNAPI void OnTransportControllerGatheringState(::cricket::IceGatheringState state);

    MCNAPI PeerConnection(::webrtc::Environment const& env, ::webrtc::scoped_refptr<::webrtc::ConnectionContext> context, ::webrtc::PeerConnectionFactoryInterface::Options const& options, bool is_unified_plan, ::std::unique_ptr<::webrtc::Call> call, ::webrtc::PeerConnectionDependencies& dependencies, bool dtls_enabled);

    MCNAPI bool ReconfigurePortAllocator_n(::std::set<::rtc::SocketAddress> const& stun_servers, ::std::vector<::cricket::RelayServerConfig> const& turn_servers, ::std::vector<::std::pair<::rtc::SocketAddress, ::rtc::SocketAddress>> const& mapped_ports, ::webrtc::PeerConnectionInterface::IceTransportsType type, int candidate_pool_size, ::webrtc::PortPrunePolicy turn_port_prune_policy, ::webrtc::TurnCustomizer* turn_customizer, ::std::optional<int> stun_candidate_keepalive_interval, bool have_local_description);

    MCNAPI void ReportFirstConnectUsageMetrics();

    MCNAPI void ReportIceCandidateCollected(::cricket::Candidate const& candidate);

    MCNAPI void ReportRemoteIceCandidateAdded(::cricket::Candidate const& candidate);

    MCNAPI void ReportTransportStats(::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>> transceivers);

    MCNAPI void ReportUsagePattern() const;

    MCNAPI void SetConnectionState(::webrtc::PeerConnectionInterface::PeerConnectionState new_state);

    MCNAPI void SetSctpTransportName(::std::string sctp_transport_name);

    MCNAPI void SetStandardizedIceConnectionState(::webrtc::PeerConnectionInterface::IceConnectionState new_state);

    MCNAPI ::std::optional<::std::string> SetupDataChannelTransport_n(::std::string_view mid);

    MCNAPI bool StartRtcEventLog_w(::std::unique_ptr<::webrtc::RtcEventLogOutput> output, int64 output_period_ms);

    MCNAPI void StopRtcEventLog_w();

    MCNAPI void TeardownDataChannelTransport_n(::webrtc::RTCError error);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::PeerConnection>> Create(::webrtc::Environment const& env, ::webrtc::scoped_refptr<::webrtc::ConnectionContext> context, ::webrtc::PeerConnectionFactoryInterface::Options const& options, ::std::unique_ptr<::webrtc::Call> call, ::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration, ::webrtc::PeerConnectionDependencies dependencies);

    MCNAPI static void ReportBestConnectionState(::cricket::TransportStats const& stats);

    MCNAPI static void ReportNegotiatedCiphers(bool dtls_enabled, ::cricket::TransportStats const& stats, ::std::set<::cricket::MediaType> const& media_types);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::Environment const& env, ::webrtc::scoped_refptr<::webrtc::ConnectionContext> context, ::webrtc::PeerConnectionFactoryInterface::Options const& options, bool is_unified_plan, ::std::unique_ptr<::webrtc::Call> call, ::webrtc::PeerConnectionDependencies& dependencies, bool dtls_enabled);
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

    MCNAPI void $RemoveStream(::webrtc::MediaStreamInterface* remove_stream);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> $AddTrack(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track, ::std::vector<::std::string> const& stream_ids);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> $AddTrack(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track, ::std::vector<::std::string> const& stream_ids, ::std::vector<::webrtc::RtpEncodingParameters> const& init_send_encodings);

    MCNAPI ::webrtc::RTCError $RemoveTrackOrError(::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> sender);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> $AddTransceiver(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> $AddTransceiver(::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track, ::webrtc::RtpTransceiverInit const& init);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> $AddTransceiver(::cricket::MediaType media_type);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> $AddTransceiver(::cricket::MediaType media_type, ::webrtc::RtpTransceiverInit const& init);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> $AddTransceiver(::cricket::MediaType media_type, ::webrtc::scoped_refptr<::webrtc::MediaStreamTrackInterface> track, ::webrtc::RtpTransceiverInit const& init, bool update_negotiation_needed);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> $CreateSender(::std::string const& kind, ::std::string const& stream_id);

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpSenderInterface>> $GetSenders() const;

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface>> $GetReceivers() const;

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>> $GetTransceivers() const;

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::DataChannelInterface>> $CreateDataChannelOrError(::std::string const& label, ::webrtc::DataChannelInit const* config);

    MCNAPI bool $GetStats(::webrtc::StatsObserver* observer, ::webrtc::MediaStreamTrackInterface* track, ::webrtc::PeerConnectionInterface::StatsOutputLevel level);

    MCNAPI void $GetStats(::webrtc::RTCStatsCollectorCallback* callback);

    MCNAPI void $GetStats(::webrtc::scoped_refptr<::webrtc::RtpSenderInterface> selector, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback);

    MCNAPI void $GetStats(::webrtc::scoped_refptr<::webrtc::RtpReceiverInterface> selector, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback);

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

    MCNAPI void $CreateOffer(::webrtc::CreateSessionDescriptionObserver* observer, ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options);

    MCNAPI void $CreateAnswer(::webrtc::CreateSessionDescriptionObserver* observer, ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options);

    MCNAPI void $SetLocalDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface> desc, ::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface> observer);

    MCNAPI void $SetLocalDescription(::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface> observer);

    MCNAPI void $SetLocalDescription(::webrtc::SetSessionDescriptionObserver* observer, ::webrtc::SessionDescriptionInterface* desc_ptr);

    MCNAPI void $SetLocalDescription(::webrtc::SetSessionDescriptionObserver* observer);

    MCNAPI void $SetRemoteDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface> desc, ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface> observer);

    MCNAPI void $SetRemoteDescription(::webrtc::SetSessionDescriptionObserver* observer, ::webrtc::SessionDescriptionInterface* desc_ptr);

    MCNAPI ::webrtc::PeerConnectionInterface::RTCConfiguration $GetConfiguration();

    MCNAPI ::webrtc::RTCError $SetConfiguration(::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration);

    MCNAPI bool $AddIceCandidate(::webrtc::IceCandidateInterface const* ice_candidate);

    MCNAPI void $AddIceCandidate(::std::unique_ptr<::webrtc::IceCandidateInterface> candidate, ::std::function<void(::webrtc::RTCError)> callback);

    MCNAPI bool $RemoveIceCandidates(::std::vector<::cricket::Candidate> const& candidates);

    MCNAPI ::webrtc::RTCError $SetBitrate(::webrtc::BitrateSettings const& bitrate);

    MCNAPI void $ReconfigureBandwidthEstimation(::webrtc::BandwidthEstimationSettings const& settings);

    MCNAPI void $SetAudioPlayout(bool playout);

    MCNAPI void $SetAudioRecording(bool recording);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::DtlsTransportInterface> $LookupDtlsTransportByMid(::std::string const& mid);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::SctpTransportInterface> $GetSctpTransport() const;

    MCNAPI void $AddAdaptationResource(::webrtc::scoped_refptr<::webrtc::Resource> resource);

    MCNAPI bool $StartRtcEventLog(::std::unique_ptr<::webrtc::RtcEventLogOutput> output, int64 output_period_ms);

    MCNAPI bool $StartRtcEventLog(::std::unique_ptr<::webrtc::RtcEventLogOutput> output);

    MCNAPI void $StopRtcEventLog();

    MCNAPI void $Close();

    MCNAPI ::rtc::Thread* $signaling_thread() const;

    MCNAPI ::rtc::Thread* $network_thread() const;

    MCNAPI ::rtc::Thread* $worker_thread() const;

    MCNAPI ::std::string $session_id() const;

    MCNAPI bool $initial_offerer() const;

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>> $GetTransceiversInternal() const;

    MCNAPI ::std::vector<::webrtc::DataChannelStats> $GetDataChannelStats() const;

    MCNAPI ::std::optional<::std::string> $sctp_transport_name() const;

    MCNAPI ::std::optional<::std::string> $sctp_mid() const;

    MCNAPI ::std::vector<::cricket::CandidateStats> $GetPooledCandidateStats() const;

    MCNAPI ::std::map<::std::string, ::cricket::TransportStats> $GetTransportStatsByNames(::std::set<::std::string> const& transport_names);

    MCNAPI ::webrtc::Call::Stats $GetCallStats();

    MCNAPI ::std::optional<::webrtc::AudioDeviceModule::Stats> $GetAudioDeviceStats();

    MCNAPI bool $GetLocalCertificate(::std::string const& transport_name, ::webrtc::scoped_refptr<::rtc::RTCCertificate>* certificate);

    MCNAPI ::std::unique_ptr<::rtc::SSLCertChain> $GetRemoteSSLCertChain(::std::string const& transport_name);

    MCNAPI bool $IceRestartPending(::std::string const& content_name) const;

    MCNAPI bool $NeedsIceRestart(::std::string const& content_name) const;

    MCNAPI bool $GetSslRole(::std::string const& content_name, ::rtc::SSLRole* role);

    MCNAPI void $NoteDataAddedEvent();

    MCNAPI ::webrtc::PeerConnectionObserver* $Observer() const;

    MCNAPI bool $IsClosed() const;

    MCNAPI ::std::optional<::rtc::SSLRole> $GetSctpSslRole_n();

    MCNAPI void $OnSctpDataChannelStateChanged(int channel_id, ::webrtc::DataChannelInterface::DataState state);

    MCNAPI bool $ShouldFireNegotiationNeededEvent(uint event_id);

    MCNAPI ::webrtc::LegacyStatsCollector* $legacy_stats();

    MCNAPI ::webrtc::DataChannelController* $data_channel_controller();

    MCNAPI bool $dtls_enabled() const;

    MCNAPI ::webrtc::PeerConnectionInterface::RTCConfiguration const* $configuration() const;

    MCNAPI ::webrtc::PeerConnectionMessageHandler* $message_handler();

    MCNAPI ::webrtc::RtpTransmissionManager* $rtp_manager();

    MCNAPI ::webrtc::RtpTransmissionManager const* $rtp_manager() const;

    MCNAPI ::webrtc::JsepTransportController* $transport_controller_s();

    MCNAPI ::webrtc::JsepTransportController* $transport_controller_n();

    MCNAPI ::cricket::PortAllocator* $port_allocator();

    MCNAPI ::webrtc::Call* $call_ptr();

    MCNAPI ::webrtc::PeerConnectionFactoryInterface::Options const* $options() const;

    MCNAPI void $SetIceConnectionState(::webrtc::PeerConnectionInterface::IceConnectionState new_state);

    MCNAPI void $NoteUsageEvent(::webrtc::UsageEvent event);

    MCNAPI void $AddRemoteCandidate(::std::string const& mid, ::cricket::Candidate const& candidate);

    MCNAPI void $ReportSdpBundleUsage(::webrtc::SessionDescriptionInterface const& remote_description);

    MCNAPI bool $IsUnifiedPlan() const;

    MCNAPI bool $ValidateBundleSettings(::cricket::SessionDescription const* desc, ::std::map<::std::string, ::cricket::ContentGroup const*> const& bundle_groups_by_mid);

    MCNAPI bool $CreateDataChannelTransport(::std::string_view mid);

    MCNAPI void $DestroyDataChannelTransport(::webrtc::RTCError error);

    MCNAPI void $StartSctpTransport(int local_port, int remote_port, int max_message_size);

    MCNAPI ::webrtc::CryptoOptions $GetCryptoOptions();

    MCNAPI bool $SrtpRequired() const;

    MCNAPI ::webrtc::FieldTrialsView const& $trials() const;

    MCNAPI bool $OnTransportChanged(::std::string const& mid, ::webrtc::RtpTransportInternal* rtp_transport, ::webrtc::scoped_refptr<::webrtc::DtlsTransport> dtls_transport, ::webrtc::DataChannelTransportInterface* data_channel_transport);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();

    MCNAPI static void** $vftableForPeerConnectionInterface();

    MCNAPI static void** $vftableForPeerConnectionSdpMethods();
    // NOLINTEND

};

}
