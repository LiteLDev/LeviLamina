#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ContentSource.h"
#include "mc/external/cricket/MediaType.h"
#include "mc/external/rtc/SSLRole.h"
#include "mc/external/webrtc/AddIceCandidateResult.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/RTCErrorType.h"
#include "mc/external/webrtc/RtpTransceiverDirection.h"
#include "mc/external/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class AudioContentDescription; }
namespace cricket { class Candidate; }
namespace cricket { class ContentGroup; }
namespace cricket { class ContentInfo; }
namespace cricket { class MediaEngineInterface; }
namespace cricket { class PortAllocator; }
namespace cricket { class SessionDescription; }
namespace cricket { class VideoContentDescription; }
namespace cricket { struct MediaDescriptionOptions; }
namespace cricket { struct MediaSessionOptions; }
namespace cricket { struct StreamParams; }
namespace rtc { class Thread; }
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class ConnectionContext; }
namespace webrtc { class CreateSessionDescriptionObserver; }
namespace webrtc { class DataChannelController; }
namespace webrtc { class IceCandidateInterface; }
namespace webrtc { class JsepIceCandidate; }
namespace webrtc { class JsepTransportController; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class PeerConnectionSdpMethods; }
namespace webrtc { class RTCError; }
namespace webrtc { class RtpReceiverInternal; }
namespace webrtc { class RtpTransceiver; }
namespace webrtc { class RtpTransceiverInterface; }
namespace webrtc { class RtpTransmissionManager; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class SetLocalDescriptionObserverInterface; }
namespace webrtc { class SetRemoteDescriptionObserverInterface; }
namespace webrtc { class SetSessionDescriptionObserver; }
namespace webrtc { class StreamCollection; }
namespace webrtc { class StreamCollectionInterface; }
namespace webrtc { class TransceiverList; }
namespace webrtc { class VideoTrackInterface; }
namespace webrtc { struct PeerConnectionDependencies; }
// clang-format on

namespace webrtc {

class SdpOfferAnswerHandler {
public:
    // SdpOfferAnswerHandler inner types declare
    // clang-format off
    class LocalIceCredentialsToReplace;
    class RemoteDescriptionOperation;
    class SetSessionDescriptionObserverAdapter;
    // clang-format on

    // SdpOfferAnswerHandler inner types define
    enum class SessionError : uint {};

    class LocalIceCredentialsToReplace {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void AppendIceCredentialsFromSessionDescription(::webrtc::SessionDescriptionInterface const&);

        MCNAPI void ClearIceCredentials();

        MCNAPI bool SatisfiesIceRestart(::webrtc::SessionDescriptionInterface const&) const;
        // NOLINTEND
    };

    class RemoteDescriptionOperation {
    public:
        // prevent constructor by default
        RemoteDescriptionOperation();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool HaveSessionError();

        MCNAPI void InvalidParam(::std::string);

        MCNAPI bool MaybeRollback();

        MCNAPI
        RemoteDescriptionOperation(::webrtc::SdpOfferAnswerHandler*, ::std::unique_ptr<::webrtc::SessionDescriptionInterface>, ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface>, ::std::function<void()>);

        MCNAPI void SetAsSessionError();

        MCNAPI void SetError(::webrtc::RTCErrorType, ::std::string);

        MCNAPI void SignalCompletion();

        MCNAPI bool UpdateChannels();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void*
        $ctor(::webrtc::SdpOfferAnswerHandler*, ::std::unique_ptr<::webrtc::SessionDescriptionInterface>, ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface>, ::std::function<void()>);
        // NOLINTEND
    };

    class SetSessionDescriptionObserverAdapter {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void OnSetDescriptionComplete(::webrtc::RTCError);
        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftableForSetLocalDescriptionObserverInterface();

        MCNAPI static void** $vftableForSetRemoteDescriptionObserverInterface();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    SdpOfferAnswerHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AddIceCandidate(::webrtc::IceCandidateInterface const*);

    MCNAPI void
        AddIceCandidate(::std::unique_ptr<::webrtc::IceCandidateInterface>, ::std::function<void(::webrtc::RTCError)>);

    MCNAPI ::webrtc::AddIceCandidateResult AddIceCandidateInternal(::webrtc::IceCandidateInterface const*);

    MCNAPI void AddLocalIceCandidate(::webrtc::JsepIceCandidate const*);

    MCNAPI bool AddStream(::webrtc::MediaStreamInterface*);

    MCNAPI void AddUpToOneReceivingTransceiverOfType(::cricket::MediaType);

    MCNAPI void AllocateSctpSids();

    MCNAPI ::webrtc::RTCError
    ApplyLocalDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface>, ::std::map<::std::string, ::cricket::ContentGroup const*> const&);

    MCNAPI void ApplyRemoteDescription(::std::unique_ptr<::webrtc::SdpOfferAnswerHandler::RemoteDescriptionOperation>);

    MCNAPI void ApplyRemoteDescriptionUpdateTransceiverState(::webrtc::SdpType);

    MCNAPI ::webrtc::RTCErrorOr<
        ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>>
    AssociateTransceiver(::cricket::ContentSource, ::webrtc::SdpType, uint64, ::cricket::ContentInfo const&, ::cricket::ContentInfo const*, ::cricket::ContentInfo const*);

    MCNAPI void ChangeSignalingState(::webrtc::PeerConnectionInterface::SignalingState);

    MCNAPI bool CheckIfNegotiationIsNeeded();

    MCNAPI void Close();

    MCNAPI bool ConfiguredForMedia() const;

    MCNAPI void
    CreateAnswer(::webrtc::CreateSessionDescriptionObserver*, ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&);

    MCNAPI ::webrtc::RTCError CreateChannels(::cricket::SessionDescription const&);

    MCNAPI void
    CreateOffer(::webrtc::CreateSessionDescriptionObserver*, ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&);

    MCNAPI void DestroyMediaChannels();

    MCNAPI void
    DoCreateAnswer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::webrtc::scoped_refptr<::webrtc::CreateSessionDescriptionObserver>);

    MCNAPI void
    DoCreateOffer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::webrtc::scoped_refptr<::webrtc::CreateSessionDescriptionObserver>);

    MCNAPI void
        DoSetLocalDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface>, ::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface>);

    MCNAPI void DoSetRemoteDescription(::std::unique_ptr<::webrtc::SdpOfferAnswerHandler::RemoteDescriptionOperation>);

    MCNAPI void EnableSending();

    MCNAPI bool ExpectSetLocalDescription(::webrtc::SdpType);

    MCNAPI bool ExpectSetRemoteDescription(::webrtc::SdpType);

    MCNAPI void FillInMissingRemoteMids(::cricket::SessionDescription*);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>
        FindAvailableTransceiverToReceive(::cricket::MediaType) const;

    MCNAPI ::webrtc::RTCErrorOr<::cricket::ContentInfo const*>
    FindContentInfo(::webrtc::SessionDescriptionInterface const*, ::webrtc::IceCandidateInterface const*);

    MCNAPI ::cricket::ContentInfo const*
    FindMediaSectionForTransceiver(::webrtc::RtpTransceiver const*, ::webrtc::SessionDescriptionInterface const*) const;

    MCNAPI void
    GenerateMediaDescriptionOptions(::webrtc::SessionDescriptionInterface const*, ::webrtc::RtpTransceiverDirection, ::webrtc::RtpTransceiverDirection, ::std::optional<uint64>*, ::std::optional<uint64>*, ::std::optional<uint64>*, ::cricket::MediaSessionOptions*);

    MCNAPI void GenerateNegotiationNeededEvent();

    MCNAPI ::cricket::MediaDescriptionOptions GetMediaDescriptionOptionsForActiveData(::std::string const&) const;

    MCNAPI ::cricket::MediaDescriptionOptions GetMediaDescriptionOptionsForRejectedData(::std::string const&) const;

    MCNAPI void
    GetOptionsForAnswer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::cricket::MediaSessionOptions*);

    MCNAPI void
    GetOptionsForOffer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::cricket::MediaSessionOptions*);

    MCNAPI void
    GetOptionsForPlanBAnswer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::cricket::MediaSessionOptions*);

    MCNAPI void
    GetOptionsForPlanBOffer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::cricket::MediaSessionOptions*);

    MCNAPI void
    GetOptionsForUnifiedPlanAnswer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::cricket::MediaSessionOptions*);

    MCNAPI void
    GetOptionsForUnifiedPlanOffer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&, ::cricket::MediaSessionOptions*);

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>>
        GetReceivingTransceiversOfType(::cricket::MediaType);

    MCNAPI ::std::string GetSessionErrorMsg();

    MCNAPI ::std::optional<::rtc::SSLRole> GuessSslRole() const;

    MCNAPI ::webrtc::RTCError HandleLegacyOfferOptions(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const&);

    MCNAPI bool HasNewIceCredentials();

    MCNAPI void
    Initialize(::webrtc::PeerConnectionInterface::RTCConfiguration const&, ::webrtc::PeerConnectionDependencies&, ::webrtc::ConnectionContext*);

    MCNAPI bool IsUnifiedPlan() const;

    MCNAPI void OnAudioTrackAdded(::webrtc::AudioTrackInterface*, ::webrtc::MediaStreamInterface*);

    MCNAPI void OnAudioTrackRemoved(::webrtc::AudioTrackInterface*, ::webrtc::MediaStreamInterface*);

    MCNAPI void OnOperationsChainEmpty();

    MCNAPI void OnVideoTrackAdded(::webrtc::VideoTrackInterface*, ::webrtc::MediaStreamInterface*);

    MCNAPI void OnVideoTrackRemoved(::webrtc::VideoTrackInterface*, ::webrtc::MediaStreamInterface*);

    MCNAPI void
    PlanBUpdateSendersAndReceivers(::cricket::ContentInfo const*, ::cricket::AudioContentDescription const*, ::cricket::ContentInfo const*, ::cricket::VideoContentDescription const*);

    MCNAPI void PrepareForShutdown();

    MCNAPI void
    ProcessRemovalOfRemoteTrack(::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>, ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>>*, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>*);

    MCNAPI ::webrtc::RTCError
    PushdownMediaDescription(::webrtc::SdpType, ::cricket::ContentSource, ::std::map<::std::string, ::cricket::ContentGroup const*> const&);

    MCNAPI ::webrtc::RTCError PushdownTransportDescription(::cricket::ContentSource, ::webrtc::SdpType);

    MCNAPI bool
    ReadyToUseRemoteCandidate(::webrtc::IceCandidateInterface const*, ::webrtc::SessionDescriptionInterface const*, bool*);

    MCNAPI bool RemoveIceCandidates(::std::vector<::cricket::Candidate> const&);

    MCNAPI void RemoveLocalIceCandidates(::std::vector<::cricket::Candidate> const&);

    MCNAPI void RemoveRecvDirectionFromReceivingTransceiversOfType(::cricket::MediaType);

    MCNAPI void
    RemoveRemoteStreamsIfEmpty(::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const&, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>*);

    MCNAPI void RemoveSenders(::cricket::MediaType);

    MCNAPI void RemoveStoppedTransceivers();

    MCNAPI void RemoveStream(::webrtc::MediaStreamInterface*);

    MCNAPI void RemoveUnusedChannels(::cricket::SessionDescription const*);

    MCNAPI ::webrtc::RTCError
    ReplaceRemoteDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface>, ::webrtc::SdpType, ::std::unique_ptr<::webrtc::SessionDescriptionInterface>*);

    MCNAPI void RestartIce();

    MCNAPI ::webrtc::RTCError Rollback(::webrtc::SdpType);

    MCNAPI SdpOfferAnswerHandler(::webrtc::PeerConnectionSdpMethods*, ::webrtc::ConnectionContext*);

    MCNAPI char const* SessionErrorToString(::webrtc::SdpOfferAnswerHandler::SessionError) const;

    MCNAPI void
    SetAssociatedRemoteStreams(::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>, ::std::vector<::std::string> const&, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>*, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>*);

    MCNAPI void SetLocalDescription(::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface>);

    MCNAPI void SetLocalDescription(::webrtc::SetSessionDescriptionObserver*);

    MCNAPI void SetLocalDescription(::webrtc::SetSessionDescriptionObserver*, ::webrtc::SessionDescriptionInterface*);

    MCNAPI void
        SetLocalDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface>, ::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface>);

    MCNAPI void
        SetRemoteDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface>, ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface>);

    MCNAPI void SetRemoteDescription(::webrtc::SetSessionDescriptionObserver*, ::webrtc::SessionDescriptionInterface*);

    MCNAPI void SetRemoteDescriptionPostProcess(bool);

    MCNAPI void SetSessionError(::webrtc::SdpOfferAnswerHandler::SessionError, ::std::string const&);

    MCNAPI bool ShouldFireNegotiationNeededEvent(uint);

    MCNAPI ::webrtc::RTCError
    UpdateDataChannelTransport(::cricket::ContentSource, ::cricket::ContentInfo const&, ::cricket::ContentGroup const*);

    MCNAPI void UpdateEndedRemoteMediaStreams();

    MCNAPI void UpdateLocalSenders(::std::vector<::cricket::StreamParams> const&, ::cricket::MediaType);

    MCNAPI void UpdateNegotiationNeeded();

    MCNAPI bool
    UpdatePayloadTypeDemuxingState(::cricket::ContentSource, ::std::map<::std::string, ::cricket::ContentGroup const*> const&);

    MCNAPI void
    UpdateRemoteSendersList(::std::vector<::cricket::StreamParams> const&, bool, ::cricket::MediaType, ::webrtc::StreamCollection*);

    MCNAPI ::webrtc::RTCError
    UpdateSessionState(::webrtc::SdpType, ::cricket::ContentSource, ::cricket::SessionDescription const*, ::std::map<::std::string, ::cricket::ContentGroup const*> const&);

    MCNAPI ::webrtc::RTCError
    UpdateTransceiverChannel(::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>, ::cricket::ContentInfo const&, ::cricket::ContentGroup const*);

    MCNAPI ::webrtc::RTCError
    UpdateTransceiversAndDataChannels(::cricket::ContentSource, ::webrtc::SessionDescriptionInterface const&, ::webrtc::SessionDescriptionInterface const*, ::webrtc::SessionDescriptionInterface const*, ::std::map<::std::string, ::cricket::ContentGroup const*> const&);

    MCNAPI bool UseCandidate(::webrtc::IceCandidateInterface const*);

    MCNAPI bool UseCandidatesInRemoteDescription();

    MCNAPI ::webrtc::RTCError
    ValidateSessionDescription(::webrtc::SessionDescriptionInterface const*, ::cricket::ContentSource, ::std::map<::std::string, ::cricket::ContentGroup const*> const&);

    MCNAPI ::webrtc::DataChannelController* data_channel_controller();

    MCNAPI ::std::optional<bool> is_caller() const;

    MCNAPI ::webrtc::scoped_refptr<::webrtc::StreamCollectionInterface> local_streams();

    MCNAPI ::cricket::MediaEngineInterface* media_engine() const;

    MCNAPI ::rtc::Thread* network_thread() const;

    MCNAPI ::cricket::PortAllocator* port_allocator();

    MCNAPI ::webrtc::scoped_refptr<::webrtc::StreamCollectionInterface> remote_streams();

    MCNAPI ::webrtc::RtpTransmissionManager* rtp_manager();

    MCNAPI ::webrtc::TransceiverList const* transceivers() const;

    MCNAPI ::webrtc::TransceiverList* transceivers();

    MCNAPI ::webrtc::JsepTransportController* transport_controller_n();

    MCNAPI ::webrtc::JsepTransportController const* transport_controller_s() const;

    MCNAPI ::webrtc::JsepTransportController* transport_controller_s();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::unique_ptr<::webrtc::SdpOfferAnswerHandler>
    Create(::webrtc::PeerConnectionSdpMethods*, ::webrtc::PeerConnectionInterface::RTCConfiguration const&, ::webrtc::PeerConnectionDependencies&, ::webrtc::ConnectionContext*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::PeerConnectionSdpMethods*, ::webrtc::ConnectionContext*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
