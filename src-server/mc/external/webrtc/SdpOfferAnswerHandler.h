#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ContentSource.h"
#include "mc/external/cricket/MediaType.h"
#include "mc/external/rtc/SSLRole.h"
#include "mc/external/webrtc/AddIceCandidateResult.h"
#include "mc/external/webrtc/CreateSessionDescriptionObserver.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/RTCErrorOr.h"
#include "mc/external/webrtc/RTCErrorType.h"
#include "mc/external/webrtc/RtpTransceiverDirection.h"
#include "mc/external/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/external/webrtc/SdpStateProvider.h"
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/SetLocalDescriptionObserverInterface.h"
#include "mc/external/webrtc/SetRemoteDescriptionObserverInterface.h"
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
namespace webrtc { class SetSessionDescriptionObserver; }
namespace webrtc { class StreamCollection; }
namespace webrtc { class StreamCollectionInterface; }
namespace webrtc { class TransceiverList; }
namespace webrtc { class VideoTrackInterface; }
namespace webrtc { struct PeerConnectionDependencies; }
// clang-format on

namespace webrtc {

class SdpOfferAnswerHandler : public ::webrtc::SdpStateProvider {
public:
    // SdpOfferAnswerHandler inner types declare
    // clang-format off
    class ImplicitCreateSessionDescriptionObserver;
    class LocalIceCredentialsToReplace;
    class RemoteDescriptionOperation;
    class SetSessionDescriptionObserverAdapter;
    // clang-format on
    
    // SdpOfferAnswerHandler inner types define
    class RemoteDescriptionOperation {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk38d8f1;
        ::ll::UntypedStorage<8, 8> mUnk4053c6;
        ::ll::UntypedStorage<8, 8> mUnk9a7b42;
        ::ll::UntypedStorage<8, 8> mUnk86d150;
        ::ll::UntypedStorage<8, 64> mUnk938da2;
        ::ll::UntypedStorage<8, 48> mUnk557ac8;
        ::ll::UntypedStorage<8, 16> mUnkdd5c30;
        ::ll::UntypedStorage<4, 4> mUnkc659ff;
        ::ll::UntypedStorage<1, 1> mUnkbd8877;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        RemoteDescriptionOperation& operator=(RemoteDescriptionOperation const&);
        RemoteDescriptionOperation(RemoteDescriptionOperation const&);
        RemoteDescriptionOperation();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI bool HaveSessionError();
    
        MCNAPI void InvalidParam(::std::string message);
    
        MCNAPI bool MaybeRollback();
    
        MCNAPI RemoteDescriptionOperation(::webrtc::SdpOfferAnswerHandler* handler, ::std::unique_ptr<::webrtc::SessionDescriptionInterface> desc, ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface> observer, ::std::function<void()> operations_chain_callback);
    
        MCNAPI void SetAsSessionError();
    
        MCNAPI void SetError(::webrtc::RTCErrorType type, ::std::string message);
    
        MCNAPI void SignalCompletion();
    
        MCNAPI bool UpdateChannels();
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::SdpOfferAnswerHandler* handler, ::std::unique_ptr<::webrtc::SessionDescriptionInterface> desc, ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface> observer, ::std::function<void()> operations_chain_callback);
        // NOLINTEND
    
    };
    
    class ImplicitCreateSessionDescriptionObserver : public ::webrtc::CreateSessionDescriptionObserver {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk1972e1;
        ::ll::UntypedStorage<8, 16> mUnkb3ce39;
        ::ll::UntypedStorage<8, 8> mUnkcb15ee;
        ::ll::UntypedStorage<8, 64> mUnk801993;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        ImplicitCreateSessionDescriptionObserver& operator=(ImplicitCreateSessionDescriptionObserver const&);
        ImplicitCreateSessionDescriptionObserver(ImplicitCreateSessionDescriptionObserver const&);
        ImplicitCreateSessionDescriptionObserver();
    
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 2
        virtual ~ImplicitCreateSessionDescriptionObserver() /*override*/;
    
        // vIndex: 3
        virtual void OnSuccess(::webrtc::SessionDescriptionInterface* desc_ptr) /*override*/;
    
        // vIndex: 4
        virtual void OnFailure(::webrtc::RTCError error) /*override*/;
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $OnSuccess(::webrtc::SessionDescriptionInterface* desc_ptr);
    
        MCNAPI void $OnFailure(::webrtc::RTCError error);
        // NOLINTEND
    
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    
    };
    
    class SetSessionDescriptionObserverAdapter : public ::webrtc::SetLocalDescriptionObserverInterface, public ::webrtc::SetRemoteDescriptionObserverInterface {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk14d45d;
        ::ll::UntypedStorage<8, 8> mUnkd32ec5;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        SetSessionDescriptionObserverAdapter& operator=(SetSessionDescriptionObserverAdapter const&);
        SetSessionDescriptionObserverAdapter(SetSessionDescriptionObserverAdapter const&);
        SetSessionDescriptionObserverAdapter();
    
    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 3
        virtual void OnSetLocalDescriptionComplete(::webrtc::RTCError error) /*override*/;
    
        // vIndex: 3
        virtual void OnSetRemoteDescriptionComplete(::webrtc::RTCError error) /*override*/;
    
        // vIndex: 2
        virtual ~SetSessionDescriptionObserverAdapter() /*override*/ = default;
        // NOLINTEND
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void OnSetDescriptionComplete(::webrtc::RTCError error);
        // NOLINTEND
    
    public:
        // virtual function thunks
        // NOLINTBEGIN
        MCNAPI void $OnSetLocalDescriptionComplete(::webrtc::RTCError error);
    
        MCNAPI void $OnSetRemoteDescriptionComplete(::webrtc::RTCError error);
        // NOLINTEND
    
    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftableForSetLocalDescriptionObserverInterface();
    
        MCNAPI static void** $vftableForSetRemoteDescriptionObserverInterface();
        // NOLINTEND
    
    };
    
    enum class SessionError : int {
        KNone = 0,
        KContent = 1,
        KTransport = 2,
    };
    
    class LocalIceCredentialsToReplace {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk44201b;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        LocalIceCredentialsToReplace& operator=(LocalIceCredentialsToReplace const&);
        LocalIceCredentialsToReplace(LocalIceCredentialsToReplace const&);
        LocalIceCredentialsToReplace();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI void AppendIceCredentialsFromSessionDescription(::webrtc::SessionDescriptionInterface const& desc);
    
        MCNAPI void ClearIceCredentials();
    
        MCNAPI bool SatisfiesIceRestart(::webrtc::SessionDescriptionInterface const& local_description) const;
        // NOLINTEND
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk6fb1a0;
    ::ll::UntypedStorage<8, 8> mUnk83b177;
    ::ll::UntypedStorage<8, 8> mUnkf18b9b;
    ::ll::UntypedStorage<8, 8> mUnk370f83;
    ::ll::UntypedStorage<8, 8> mUnka66c5f;
    ::ll::UntypedStorage<8, 8> mUnk8a6263;
    ::ll::UntypedStorage<8, 8> mUnkbf2ff7;
    ::ll::UntypedStorage<4, 4> mUnk2e91d1;
    ::ll::UntypedStorage<1, 2> mUnk9c155c;
    ::ll::UntypedStorage<8, 8> mUnk4b7776;
    ::ll::UntypedStorage<8, 8> mUnk5ebabb;
    ::ll::UntypedStorage<8, 24> mUnk4b7303;
    ::ll::UntypedStorage<8, 8> mUnk644da3;
    ::ll::UntypedStorage<8, 32> mUnkafa2ee;
    ::ll::UntypedStorage<8, 24> mUnk2a319b;
    ::ll::UntypedStorage<8, 16> mUnk2a3910;
    ::ll::UntypedStorage<8, 8> mUnk9f72d7;
    ::ll::UntypedStorage<1, 1> mUnkfcbc5f;
    ::ll::UntypedStorage<1, 1> mUnk80521a;
    ::ll::UntypedStorage<4, 4> mUnk59d611;
    ::ll::UntypedStorage<1, 1> mUnk778248;
    ::ll::UntypedStorage<1, 1> mUnkc0d07e;
    ::ll::UntypedStorage<1, 1> mUnk4415fe;
    ::ll::UntypedStorage<8, 8> mUnk5dcc6c;
    ::ll::UntypedStorage<4, 4> mUnk8004ed;
    ::ll::UntypedStorage<8, 32> mUnk2ed360;
    ::ll::UntypedStorage<8, 88> mUnkad58ba;
    ::ll::UntypedStorage<4, 20> mUnkb32f83;
    ::ll::UntypedStorage<8, 8> mUnk1692f7;
    ::ll::UntypedStorage<1, 2> mUnkba7369;
    ::ll::UntypedStorage<8, 16> mUnkf74f36;
    // NOLINTEND

public:
    // prevent constructor by default
    SdpOfferAnswerHandler& operator=(SdpOfferAnswerHandler const&);
    SdpOfferAnswerHandler(SdpOfferAnswerHandler const&);
    SdpOfferAnswerHandler();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SdpOfferAnswerHandler() /*override*/;

    // vIndex: 1
    virtual ::webrtc::PeerConnectionInterface::SignalingState signaling_state() const /*override*/;

    // vIndex: 2
    virtual ::webrtc::SessionDescriptionInterface const* local_description() const /*override*/;

    // vIndex: 3
    virtual ::webrtc::SessionDescriptionInterface const* remote_description() const /*override*/;

    // vIndex: 4
    virtual ::webrtc::SessionDescriptionInterface const* current_local_description() const /*override*/;

    // vIndex: 5
    virtual ::webrtc::SessionDescriptionInterface const* current_remote_description() const /*override*/;

    // vIndex: 6
    virtual ::webrtc::SessionDescriptionInterface const* pending_local_description() const /*override*/;

    // vIndex: 7
    virtual ::webrtc::SessionDescriptionInterface const* pending_remote_description() const /*override*/;

    // vIndex: 8
    virtual bool NeedsIceRestart(::std::string const& content_name) const /*override*/;

    // vIndex: 9
    virtual bool IceRestartPending(::std::string const& content_name) const /*override*/;

    // vIndex: 10
    virtual ::std::optional<::rtc::SSLRole> GetDtlsRole(::std::string const& mid) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool AddIceCandidate(::webrtc::IceCandidateInterface const* ice_candidate);

    MCNAPI void AddIceCandidate(::std::unique_ptr<::webrtc::IceCandidateInterface> candidate, ::std::function<void(::webrtc::RTCError)> callback);

    MCNAPI ::webrtc::AddIceCandidateResult AddIceCandidateInternal(::webrtc::IceCandidateInterface const* ice_candidate);

    MCNAPI void AddLocalIceCandidate(::webrtc::JsepIceCandidate const* candidate);

    MCNAPI bool AddStream(::webrtc::MediaStreamInterface* local_stream);

    MCNAPI void AddUpToOneReceivingTransceiverOfType(::cricket::MediaType media_type);

    MCNAPI void AllocateSctpSids();

    MCNAPI ::webrtc::RTCError ApplyLocalDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface> desc, ::std::map<::std::string, ::cricket::ContentGroup const*> const& bundle_groups_by_mid);

    MCNAPI void ApplyRemoteDescription(::std::unique_ptr<::webrtc::SdpOfferAnswerHandler::RemoteDescriptionOperation> operation);

    MCNAPI void ApplyRemoteDescriptionUpdateTransceiverState(::webrtc::SdpType sdp_type);

    MCNAPI ::webrtc::RTCErrorOr<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>> AssociateTransceiver(::cricket::ContentSource source, ::webrtc::SdpType type, uint64 mline_index, ::cricket::ContentInfo const& content, ::cricket::ContentInfo const* old_local_content, ::cricket::ContentInfo const* old_remote_content);

    MCNAPI void ChangeSignalingState(::webrtc::PeerConnectionInterface::SignalingState signaling_state);

    MCNAPI bool CheckIfNegotiationIsNeeded();

    MCNAPI void Close();

    MCNAPI bool ConfiguredForMedia() const;

    MCNAPI void CreateAnswer(::webrtc::CreateSessionDescriptionObserver* observer, ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options);

    MCNAPI ::webrtc::RTCError CreateChannels(::cricket::SessionDescription const& desc);

    MCNAPI void CreateOffer(::webrtc::CreateSessionDescriptionObserver* observer, ::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options);

    MCNAPI void DestroyMediaChannels();

    MCNAPI void DoCreateAnswer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options, ::webrtc::scoped_refptr<::webrtc::CreateSessionDescriptionObserver> observer);

    MCNAPI void DoCreateOffer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options, ::webrtc::scoped_refptr<::webrtc::CreateSessionDescriptionObserver> observer);

    MCNAPI void DoSetLocalDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface> desc, ::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface> observer);

    MCNAPI void DoSetRemoteDescription(::std::unique_ptr<::webrtc::SdpOfferAnswerHandler::RemoteDescriptionOperation> operation);

    MCNAPI void EnableSending();

    MCNAPI bool ExpectSetLocalDescription(::webrtc::SdpType type);

    MCNAPI bool ExpectSetRemoteDescription(::webrtc::SdpType type);

    MCNAPI void FillInMissingRemoteMids(::cricket::SessionDescription* new_remote_description);

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> FindAvailableTransceiverToReceive(::cricket::MediaType media_type) const;

    MCNAPI ::webrtc::RTCErrorOr<::cricket::ContentInfo const*> FindContentInfo(::webrtc::SessionDescriptionInterface const* description, ::webrtc::IceCandidateInterface const* candidate);

    MCNAPI ::cricket::ContentInfo const* FindMediaSectionForTransceiver(::webrtc::RtpTransceiver const* transceiver, ::webrtc::SessionDescriptionInterface const* sdesc) const;

    MCNAPI void GenerateMediaDescriptionOptions(::webrtc::SessionDescriptionInterface const* session_desc, ::webrtc::RtpTransceiverDirection audio_direction, ::webrtc::RtpTransceiverDirection video_direction, ::std::optional<uint64>* audio_index, ::std::optional<uint64>* video_index, ::std::optional<uint64>* data_index, ::cricket::MediaSessionOptions* session_options);

    MCNAPI void GenerateNegotiationNeededEvent();

    MCNAPI ::cricket::MediaDescriptionOptions GetMediaDescriptionOptionsForActiveData(::std::string const& mid) const;

    MCNAPI ::cricket::MediaDescriptionOptions GetMediaDescriptionOptionsForRejectedData(::std::string const& mid) const;

    MCNAPI void GetOptionsForAnswer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& offer_answer_options, ::cricket::MediaSessionOptions* session_options);

    MCNAPI void GetOptionsForOffer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& offer_answer_options, ::cricket::MediaSessionOptions* session_options);

    MCNAPI void GetOptionsForPlanBAnswer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& offer_answer_options, ::cricket::MediaSessionOptions* session_options);

    MCNAPI void GetOptionsForPlanBOffer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& offer_answer_options, ::cricket::MediaSessionOptions* session_options);

    MCNAPI void GetOptionsForUnifiedPlanAnswer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& offer_answer_options, ::cricket::MediaSessionOptions* session_options);

    MCNAPI void GetOptionsForUnifiedPlanOffer(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& offer_answer_options, ::cricket::MediaSessionOptions* session_options);

    MCNAPI ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>>> GetReceivingTransceiversOfType(::cricket::MediaType media_type);

    MCNAPI ::std::string GetSessionErrorMsg();

    MCNAPI ::std::optional<::rtc::SSLRole> GuessSslRole() const;

    MCNAPI ::webrtc::RTCError HandleLegacyOfferOptions(::webrtc::PeerConnectionInterface::RTCOfferAnswerOptions const& options);

    MCNAPI bool HasNewIceCredentials();

    MCNAPI void Initialize(::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration, ::webrtc::PeerConnectionDependencies& dependencies, ::webrtc::ConnectionContext* context);

    MCNAPI bool IsUnifiedPlan() const;

    MCNAPI void OnAudioTrackAdded(::webrtc::AudioTrackInterface* track, ::webrtc::MediaStreamInterface* stream);

    MCNAPI void OnAudioTrackRemoved(::webrtc::AudioTrackInterface* track, ::webrtc::MediaStreamInterface* stream);

    MCNAPI void OnOperationsChainEmpty();

    MCNAPI void OnVideoTrackAdded(::webrtc::VideoTrackInterface* track, ::webrtc::MediaStreamInterface* stream);

    MCNAPI void OnVideoTrackRemoved(::webrtc::VideoTrackInterface* track, ::webrtc::MediaStreamInterface* stream);

    MCNAPI void PlanBUpdateSendersAndReceivers(::cricket::ContentInfo const* audio_content, ::cricket::AudioContentDescription const* audio_desc, ::cricket::ContentInfo const* video_content, ::cricket::VideoContentDescription const* video_desc);

    MCNAPI void PrepareForShutdown();

    MCNAPI void ProcessRemovalOfRemoteTrack(::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> transceiver, ::std::vector<::webrtc::scoped_refptr<::webrtc::RtpTransceiverInterface>>* remove_list, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>* removed_streams);

    MCNAPI ::webrtc::RTCError PushdownMediaDescription(::webrtc::SdpType type, ::cricket::ContentSource source, ::std::map<::std::string, ::cricket::ContentGroup const*> const& bundle_groups_by_mid);

    MCNAPI ::webrtc::RTCError PushdownTransportDescription(::cricket::ContentSource source, ::webrtc::SdpType type);

    MCNAPI bool ReadyToUseRemoteCandidate(::webrtc::IceCandidateInterface const* candidate, ::webrtc::SessionDescriptionInterface const* remote_desc, bool* valid);

    MCNAPI bool RemoveIceCandidates(::std::vector<::cricket::Candidate> const& candidates);

    MCNAPI void RemoveLocalIceCandidates(::std::vector<::cricket::Candidate> const& candidates);

    MCNAPI void RemoveRecvDirectionFromReceivingTransceiversOfType(::cricket::MediaType media_type);

    MCNAPI void RemoveRemoteStreamsIfEmpty(::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>> const& remote_streams, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>* removed_streams);

    MCNAPI void RemoveSenders(::cricket::MediaType media_type);

    MCNAPI void RemoveStoppedTransceivers();

    MCNAPI void RemoveStream(::webrtc::MediaStreamInterface* local_stream);

    MCNAPI void RemoveUnusedChannels(::cricket::SessionDescription const* desc);

    MCNAPI ::webrtc::RTCError ReplaceRemoteDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface> desc, ::webrtc::SdpType sdp_type, ::std::unique_ptr<::webrtc::SessionDescriptionInterface>* replaced_description);

    MCNAPI void RestartIce();

    MCNAPI ::webrtc::RTCError Rollback(::webrtc::SdpType desc_type);

    MCNAPI SdpOfferAnswerHandler(::webrtc::PeerConnectionSdpMethods* pc, ::webrtc::ConnectionContext* context);

    MCNAPI char const* SessionErrorToString(::webrtc::SdpOfferAnswerHandler::SessionError error) const;

    MCNAPI void SetAssociatedRemoteStreams(::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal> receiver, ::std::vector<::std::string> const& stream_ids, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>* added_streams, ::std::vector<::webrtc::scoped_refptr<::webrtc::MediaStreamInterface>>* removed_streams);

    MCNAPI void SetLocalDescription(::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface> observer);

    MCNAPI void SetLocalDescription(::webrtc::SetSessionDescriptionObserver* observer);

    MCNAPI void SetLocalDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface> desc, ::webrtc::scoped_refptr<::webrtc::SetLocalDescriptionObserverInterface> observer);

    MCNAPI void SetLocalDescription(::webrtc::SetSessionDescriptionObserver* observer, ::webrtc::SessionDescriptionInterface* desc_ptr);

    MCNAPI void SetRemoteDescription(::std::unique_ptr<::webrtc::SessionDescriptionInterface> desc, ::webrtc::scoped_refptr<::webrtc::SetRemoteDescriptionObserverInterface> observer);

    MCNAPI void SetRemoteDescription(::webrtc::SetSessionDescriptionObserver* observer, ::webrtc::SessionDescriptionInterface* desc_ptr);

    MCNAPI void SetRemoteDescriptionPostProcess(bool was_answer);

    MCNAPI void SetSessionError(::webrtc::SdpOfferAnswerHandler::SessionError error, ::std::string const& error_desc);

    MCNAPI bool ShouldFireNegotiationNeededEvent(uint event_id);

    MCNAPI ::webrtc::RTCError UpdateDataChannelTransport(::cricket::ContentSource source, ::cricket::ContentInfo const& content, ::cricket::ContentGroup const* bundle_group);

    MCNAPI void UpdateEndedRemoteMediaStreams();

    MCNAPI void UpdateLocalSenders(::std::vector<::cricket::StreamParams> const& streams, ::cricket::MediaType media_type);

    MCNAPI void UpdateNegotiationNeeded();

    MCNAPI bool UpdatePayloadTypeDemuxingState(::cricket::ContentSource source, ::std::map<::std::string, ::cricket::ContentGroup const*> const& bundle_groups_by_mid);

    MCNAPI void UpdateRemoteSendersList(::std::vector<::cricket::StreamParams> const& streams, bool default_sender_needed, ::cricket::MediaType media_type, ::webrtc::StreamCollection* new_streams);

    MCNAPI ::webrtc::RTCError UpdateSessionState(::webrtc::SdpType type, ::cricket::ContentSource source, ::cricket::SessionDescription const* description, ::std::map<::std::string, ::cricket::ContentGroup const*> const& bundle_groups_by_mid);

    MCNAPI ::webrtc::RTCError UpdateTransceiverChannel(::webrtc::scoped_refptr<::webrtc::RtpTransceiverProxyWithInternal<::webrtc::RtpTransceiver>> transceiver, ::cricket::ContentInfo const& content, ::cricket::ContentGroup const* bundle_group);

    MCNAPI ::webrtc::RTCError UpdateTransceiversAndDataChannels(::cricket::ContentSource source, ::webrtc::SessionDescriptionInterface const& new_session, ::webrtc::SessionDescriptionInterface const* old_local_description, ::webrtc::SessionDescriptionInterface const* old_remote_description, ::std::map<::std::string, ::cricket::ContentGroup const*> const& bundle_groups_by_mid);

    MCNAPI bool UseCandidate(::webrtc::IceCandidateInterface const* candidate);

    MCNAPI bool UseCandidatesInRemoteDescription();

    MCNAPI ::webrtc::RTCError ValidateSessionDescription(::webrtc::SessionDescriptionInterface const* sdesc, ::cricket::ContentSource source, ::std::map<::std::string, ::cricket::ContentGroup const*> const& bundle_groups_by_mid);

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
    MCNAPI static ::std::unique_ptr<::webrtc::SdpOfferAnswerHandler> Create(::webrtc::PeerConnectionSdpMethods* pc, ::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration, ::webrtc::PeerConnectionDependencies& dependencies, ::webrtc::ConnectionContext* context);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::PeerConnectionSdpMethods* pc, ::webrtc::ConnectionContext* context);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::webrtc::PeerConnectionInterface::SignalingState $signaling_state() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $local_description() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $remote_description() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $current_local_description() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $current_remote_description() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $pending_local_description() const;

    MCNAPI ::webrtc::SessionDescriptionInterface const* $pending_remote_description() const;

    MCNAPI bool $NeedsIceRestart(::std::string const& content_name) const;

    MCNAPI bool $IceRestartPending(::std::string const& content_name) const;

    MCNAPI ::std::optional<::rtc::SSLRole> $GetDtlsRole(::std::string const& mid) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
