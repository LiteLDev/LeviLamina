#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/DtlsTransportState.h"
#include "mc/deps/webrtc/IceCandidatePairConfigType.h"
#include "mc/deps/webrtc/IceCandidatePairEventType.h"
#include "mc/deps/webrtc/IceTransportState.h"
#include "mc/deps/webrtc/PortPrunePolicy.h"
#include "mc/deps/webrtc/RtpTransceiverDirection.h"
#include "mc/deps/webrtc/SdpType.h"
#include "mc/deps/webrtc/VpnPreference.h"
#include "mc/deps/webrtc/absl/AnyInvocable.h"
#include "mc/deps/webrtc/cricket/BasicPortAllocatorSession.h"
#include "mc/deps/webrtc/cricket/Connection.h"
#include "mc/deps/webrtc/cricket/ConnectionRole.h"
#include "mc/deps/webrtc/cricket/ContentSource.h"
#include "mc/deps/webrtc/cricket/ContinualGatheringPolicy.h"
#include "mc/deps/webrtc/cricket/IceCandidatePairState.h"
#include "mc/deps/webrtc/cricket/IceControllerInterface.h"
#include "mc/deps/webrtc/cricket/IceGatheringState.h"
#include "mc/deps/webrtc/cricket/IceMode.h"
#include "mc/deps/webrtc/cricket/IceProtocolType.h"
#include "mc/deps/webrtc/cricket/IceRegatheringReason.h"
#include "mc/deps/webrtc/cricket/IceRole.h"
#include "mc/deps/webrtc/cricket/IceSwitchReason.h"
#include "mc/deps/webrtc/cricket/IceTransportState.h"
#include "mc/deps/webrtc/cricket/MediaChannelNetworkInterface.h"
#include "mc/deps/webrtc/cricket/MediaProtocolType.h"
#include "mc/deps/webrtc/cricket/MediaSessionDescriptionFactory.h"
#include "mc/deps/webrtc/cricket/MediaType.h"
#include "mc/deps/webrtc/cricket/NominationMode.h"
#include "mc/deps/webrtc/cricket/PortInterface.h"
#include "mc/deps/webrtc/cricket/ProtocolType.h"
#include "mc/deps/webrtc/cricket/RidDirection.h"
#include "mc/deps/webrtc/cricket/RtpPacketType.h"
#include "mc/deps/webrtc/cricket/StunAttributeValueType.h"
#include "mc/deps/webrtc/cricket/StunMessage.h"
#include "mc/deps/webrtc/cricket/TlsCertPolicy.h"
#include "mc/deps/webrtc/cricket/VideoCodec.h"
#include "mc/deps/webrtc/cricket/description/MediaContentDescription.h"
#include "mc/deps/webrtc/rtc/AdapterType.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"
#include "mc/deps/webrtc/rtc/AsyncPacketSocket.h"
#include "mc/deps/webrtc/rtc/DiffServCodePoint.h"
#include "mc/deps/webrtc/rtc/SSLHandshakeError.h"
#include "mc/deps/webrtc/rtc/SSLProtocolVersion.h"
#include "mc/deps/webrtc/rtc/SSLRole.h"
#include "mc/deps/webrtc/rtc/Socket.h"
#include "mc/deps/webrtc/rtc/StreamResult.h"
#include "mc/deps/webrtc/rtc/StreamState.h"
#include "mc/deps/webrtc/rtc/VideoSinkInterface.h"
#include "mc/deps/webrtc/rtc/VideoSourceInterface.h"
#include "mc/deps/webrtc/rtc/WeakPtr.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class ActiveIceControllerFactoryInterface; }
namespace cricket { class AllocationSequence; }
namespace cricket { class AudioContentDescription; }
namespace cricket { class AudioSource; }
namespace cricket { class BaseChannel; }
namespace cricket { class BasicPortAllocator; }
namespace cricket { class BasicPortAllocatorSession; }
namespace cricket { class Candidate; }
namespace cricket { class CandidatePairInterface; }
namespace cricket { class CandidateStats; }
namespace cricket { class Connection; }
namespace cricket { class ContentGroup; }
namespace cricket { class ContentInfo; }
namespace cricket { class DtlsTransportInternal; }
namespace cricket { class FeedbackParam; }
namespace cricket { class FeedbackParams; }
namespace cricket { class IceAgentInterface; }
namespace cricket { class IceControllerFactoryInterface; }
namespace cricket { class IceControllerInterface; }
namespace cricket { class IceCredentialsIterator; }
namespace cricket { class IceMessage; }
namespace cricket { class IceTransportInternal; }
namespace cricket { class MediaChannel; }
namespace cricket { class MediaContentDescription; }
namespace cricket { class MediaEngineInterface; }
namespace cricket { class P2PTransportChannel; }
namespace cricket { class Port; }
namespace cricket { class PortAllocator; }
namespace cricket { class PortAllocatorSession; }
namespace cricket { class PortInterface; }
namespace cricket { class RelayPortFactoryInterface; }
namespace cricket { class RtpHeaderExtensionQueryInterface; }
namespace cricket { class SctpDataContentDescription; }
namespace cricket { class SctpTransportInternal; }
namespace cricket { class SessionDescription; }
namespace cricket { class SimulcastDescription; }
namespace cricket { class SimulcastLayerList; }
namespace cricket { class StunAddressAttribute; }
namespace cricket { class StunAttribute; }
namespace cricket { class StunByteStringAttribute; }
namespace cricket { class StunErrorCodeAttribute; }
namespace cricket { class StunMessage; }
namespace cricket { class StunPort; }
namespace cricket { class StunRequest; }
namespace cricket { class StunRequestManager; }
namespace cricket { class StunStats; }
namespace cricket { class StunUInt16ListAttribute; }
namespace cricket { class StunUInt32Attribute; }
namespace cricket { class StunUInt64Attribute; }
namespace cricket { class TransportDescriptionFactory; }
namespace cricket { class TurnEntry; }
namespace cricket { class TurnPort; }
namespace cricket { class UDPPort; }
namespace cricket { class UnsupportedContentDescription; }
namespace cricket { class UsedPayloadTypes; }
namespace cricket { class VideoChannel; }
namespace cricket { class VideoContentDescription; }
namespace cricket { class VideoMediaChannel; }
namespace cricket { class VideoMediaReceiveChannelInterface; }
namespace cricket { class VideoMediaSendChannelInterface; }
namespace cricket { class VoiceChannel; }
namespace cricket { class VoiceMediaChannel; }
namespace cricket { class VoiceMediaReceiveChannelInterface; }
namespace cricket { class VoiceMediaSendChannelInterface; }
namespace cricket { struct AudioCodec; }
namespace cricket { struct AudioOptions; }
namespace cricket { struct AudioRecvParameters; }
namespace cricket { struct AudioSendParameters; }
namespace cricket { struct BandwidthEstimationInfo; }
namespace cricket { struct CandidatePair; }
namespace cricket { struct Codec; }
namespace cricket { struct ConnectionInfo; }
namespace cricket { struct CreateRelayPortArgs; }
namespace cricket { struct CryptoParams; }
namespace cricket { struct IceCandidateErrorEvent; }
namespace cricket { struct IceConfig; }
namespace cricket { struct IceControllerFactoryArgs; }
namespace cricket { struct IceFieldTrials; }
namespace cricket { struct IceParameters; }
namespace cricket { struct IceTransportStats; }
namespace cricket { struct JsepTransportDescription; }
namespace cricket { struct MediaDescriptionOptions; }
namespace cricket { struct MediaReceiverInfo; }
namespace cricket { struct MediaSenderInfo; }
namespace cricket { struct MediaSessionOptions; }
namespace cricket { struct PortConfiguration; }
namespace cricket { struct ProtocolAddress; }
namespace cricket { struct RelayCredentials; }
namespace cricket { struct RelayServerConfig; }
namespace cricket { struct RidDescription; }
namespace cricket { struct SenderOptions; }
namespace cricket { struct SimulcastLayer; }
namespace cricket { struct SsrcGroup; }
namespace cricket { struct StreamParams; }
namespace cricket { struct TransportChannelStats; }
namespace cricket { struct TransportDescription; }
namespace cricket { struct TransportInfo; }
namespace cricket { struct TransportOptions; }
namespace cricket { struct TransportStats; }
namespace cricket { struct VideoCodec; }
namespace cricket { struct VideoMediaInfo; }
namespace cricket { struct VideoMediaReceiveInfo; }
namespace cricket { struct VideoMediaSendInfo; }
namespace cricket { struct VideoOptions; }
namespace cricket { struct VideoRecvParameters; }
namespace cricket { struct VideoSendParameters; }
namespace cricket { struct VoiceMediaInfo; }
namespace cricket { struct VoiceMediaReceiveInfo; }
namespace cricket { struct VoiceMediaSendInfo; }
namespace rtc { class AsyncListenSocket; }
namespace rtc { class AsyncPacketSocket; }
namespace rtc { class AsyncTCPSocketBase; }
namespace rtc { class ByteBufferReader; }
namespace rtc { class ByteBufferWriter; }
namespace rtc { class CopyOnWriteBuffer; }
namespace rtc { class IPAddress; }
namespace rtc { class Network; }
namespace rtc { class NetworkManager; }
namespace rtc { class NetworkMask; }
namespace rtc { class PacketSocketFactory; }
namespace rtc { class PacketTransportInternal; }
namespace rtc { class RTCCertificate; }
namespace rtc { class SSLCertChain; }
namespace rtc { class SSLCertificateVerifier; }
namespace rtc { class Socket; }
namespace rtc { class SocketAddress; }
namespace rtc { class StreamInterface; }
namespace rtc { class Thread; }
namespace rtc { class UniqueRandomIdGenerator; }
namespace rtc { struct NetworkRoute; }
namespace rtc { struct PacketInfo; }
namespace rtc { struct PacketOptions; }
namespace rtc { struct ProxyInfo; }
namespace rtc { struct SSLFingerprint; }
namespace rtc { struct SentPacket; }
namespace webrtc { class AsyncDnsResolverFactoryInterface; }
namespace webrtc { class AsyncDnsResolverInterface; }
namespace webrtc { class AsyncDnsResolverResult; }
namespace webrtc { class AudioSinkInterface; }
namespace webrtc { class DtlsSrtpTransport; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class FrameDecryptorInterface; }
namespace webrtc { class FrameEncryptorInterface; }
namespace webrtc { class FrameTransformerInterface; }
namespace webrtc { class IceCandidatePairDescription; }
namespace webrtc { class IceEventLog; }
namespace webrtc { class IceTransportInterface; }
namespace webrtc { class PendingTaskSafetyFlag; }
namespace webrtc { class RTCError; }
namespace webrtc { class RecordableEncodedFrame; }
namespace webrtc { class RtcEventLog; }
namespace webrtc { class RtpPacketReceived; }
namespace webrtc { class RtpSource; }
namespace webrtc { class RtpTransport; }
namespace webrtc { class RtpTransportInternal; }
namespace webrtc { class SrtpTransport; }
namespace webrtc { class TaskQueueBase; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class TurnCustomizer; }
namespace webrtc { class VideoFrame; }
namespace webrtc { struct CryptoOptions; }
namespace webrtc { struct IceTransportInit; }
namespace webrtc { struct RtpCodecCapability; }
namespace webrtc { struct RtpCodecParameters; }
namespace webrtc { struct RtpExtension; }
namespace webrtc { struct RtpParameters; }
namespace webrtc::VideoEncoderFactory { class EncoderSelectorInterface; }
// clang-format on

namespace cricket {
// NOLINTBEGIN
// symbol:
// ?AddMediaCryptos@cricket@@YAXAEBV?$vector@UCryptoParams@cricket@@V?$allocator@UCryptoParams@cricket@@@std@@@std@@PEAVMediaContentDescription@1@@Z
MCAPI void AddMediaCryptos(std::vector<struct cricket::CryptoParams> const&, class cricket::MediaContentDescription*);

// symbol: ?BACKUP_CONNECTION_PING_INTERVAL@cricket@@3HB
MCAPI extern int const BACKUP_CONNECTION_PING_INTERVAL;

// symbol: ?CN_AUDIO@cricket@@3QBDB
MCAPI extern char const CN_AUDIO[];

// symbol: ?CN_DATA@cricket@@3QBDB
MCAPI extern char const CN_DATA[];

// symbol: ?CN_OTHER@cricket@@3QBDB
MCAPI extern char const CN_OTHER[];

// symbol: ?CN_VIDEO@cricket@@3QBDB
MCAPI extern char const CN_VIDEO[];

// symbol: ?CONNECTIONROLE_ACTIVE_STR@cricket@@3QBDB
MCAPI extern char const CONNECTIONROLE_ACTIVE_STR[];

// symbol: ?CONNECTIONROLE_ACTPASS_STR@cricket@@3QBDB
MCAPI extern char const CONNECTIONROLE_ACTPASS_STR[];

// symbol: ?CONNECTIONROLE_HOLDCONN_STR@cricket@@3QBDB
MCAPI extern char const CONNECTIONROLE_HOLDCONN_STR[];

// symbol: ?CONNECTIONROLE_PASSIVE_STR@cricket@@3QBDB
MCAPI extern char const CONNECTIONROLE_PASSIVE_STR[];

// symbol: ?CONNECTION_RESPONSE_TIMEOUT@cricket@@3HB
MCAPI extern int const CONNECTION_RESPONSE_TIMEOUT;

// symbol: ?CONNECTION_WRITE_CONNECT_FAILURES@cricket@@3IB
MCAPI extern uint const CONNECTION_WRITE_CONNECT_FAILURES;

// symbol: ?CONNECTION_WRITE_CONNECT_TIMEOUT@cricket@@3HB
MCAPI extern int const CONNECTION_WRITE_CONNECT_TIMEOUT;

// symbol: ?CONNECTION_WRITE_TIMEOUT@cricket@@3HB
MCAPI extern int const CONNECTION_WRITE_TIMEOUT;

// symbol: ?CheckRtpParametersInvalidModificationAndValues@cricket@@YA?AVRTCError@webrtc@@AEBURtpParameters@3@0@Z
MCAPI class webrtc::RTCError
CheckRtpParametersInvalidModificationAndValues(struct webrtc::RtpParameters const&, struct webrtc::RtpParameters const&);

// symbol:
// ?CheckRtpParametersInvalidModificationAndValues@cricket@@YA?AVRTCError@webrtc@@AEBURtpParameters@3@0V?$ArrayView@UVideoCodec@cricket@@$0?BCGH@@rtc@@@Z
MCAPI class webrtc::RTCError
CheckRtpParametersInvalidModificationAndValues(struct webrtc::RtpParameters const&, struct webrtc::RtpParameters const&, class rtc::ArrayView<struct cricket::VideoCodec, -4711>);

// symbol:
// ?CheckRtpParametersValues@cricket@@YA?AVRTCError@webrtc@@AEBURtpParameters@3@V?$ArrayView@UVideoCodec@cricket@@$0?BCGH@@rtc@@@Z
MCAPI class webrtc::RTCError
CheckRtpParametersValues(struct webrtc::RtpParameters const&, class rtc::ArrayView<struct cricket::VideoCodec, -4711>);

// symbol:
// ?CheckScalabilityModeValues@cricket@@YA?AVRTCError@webrtc@@AEBURtpParameters@3@V?$ArrayView@UVideoCodec@cricket@@$0?BCGH@@rtc@@@Z
MCAPI class webrtc::RTCError
CheckScalabilityModeValues(struct webrtc::RtpParameters const&, class rtc::ArrayView<struct cricket::VideoCodec, -4711>);

// symbol:
// ?ComputeStunCredentialHash@cricket@@YA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@00PEAV23@@Z
MCAPI bool ComputeStunCredentialHash(std::string const&, std::string const&, std::string const&, std::string*);

// symbol:
// ?ConnectionRoleToString@cricket@@YA_NAEBW4ConnectionRole@1@PEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
MCAPI bool ConnectionRoleToString(::cricket::ConnectionRole const&, std::string*);

// symbol:
// ?CreateMediaCryptos@cricket@@YA_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PEAVMediaContentDescription@1@@Z
MCAPI bool CreateMediaCryptos(std::vector<std::string> const&, class cricket::MediaContentDescription*);

// symbol: ?DEAD_CONNECTION_RECEIVE_TIMEOUT@cricket@@3HB
MCAPI extern int const DEAD_CONNECTION_RECEIVE_TIMEOUT;

// symbol: ?DISCARD_PORT@cricket@@3HB
MCAPI extern int const DISCARD_PORT;

// symbol:
// ?FindContentInfoByName@cricket@@YAPEBVContentInfo@1@AEBV?$vector@VContentInfo@cricket@@V?$allocator@VContentInfo@cricket@@@std@@@std@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@4@@Z
MCAPI class cricket::ContentInfo const*
FindContentInfoByName(std::vector<class cricket::ContentInfo> const&, std::string const&);

// symbol:
// ?FindMatchingCodec@cricket@@YAPEBUVideoCodec@1@AEBV?$vector@UVideoCodec@cricket@@V?$allocator@UVideoCodec@cricket@@@std@@@std@@AEBU21@@Z
MCAPI struct cricket::VideoCodec const*
FindMatchingCodec(std::vector<struct cricket::VideoCodec> const&, struct cricket::VideoCodec const&);

// symbol:
// ?FindMatchingCrypto@cricket@@YA_NAEBV?$vector@UCryptoParams@cricket@@V?$allocator@UCryptoParams@cricket@@@std@@@std@@AEBUCryptoParams@1@PEAU41@@Z
MCAPI bool
FindMatchingCrypto(std::vector<struct cricket::CryptoParams> const&, struct cricket::CryptoParams const&, struct cricket::CryptoParams*);

// symbol: ?GROUP_TYPE_BUNDLE@cricket@@3QBDB
MCAPI extern char const GROUP_TYPE_BUNDLE[];

// symbol:
// ?GetCryptos@cricket@@YAPEBV?$vector@UCryptoParams@cricket@@V?$allocator@UCryptoParams@cricket@@@std@@@std@@PEBVContentInfo@1@@Z
MCAPI std::vector<struct cricket::CryptoParams> const* GetCryptos(class cricket::ContentInfo const*);

// symbol:
// ?GetDefaultEnabledRtpHeaderExtensions@cricket@@YA?AV?$vector@URtpExtension@webrtc@@V?$allocator@URtpExtension@webrtc@@@std@@@std@@AEBVRtpHeaderExtensionQueryInterface@1@@Z
MCAPI std::vector<struct webrtc::RtpExtension>
      GetDefaultEnabledRtpHeaderExtensions(class cricket::RtpHeaderExtensionQueryInterface const&);

// symbol: ?GetFirstAudioContent@cricket@@YAPEBVContentInfo@1@PEBVSessionDescription@1@@Z
MCAPI class cricket::ContentInfo const* GetFirstAudioContent(class cricket::SessionDescription const*);

// symbol: ?GetFirstAudioContentDescription@cricket@@YAPEBVAudioContentDescription@1@PEBVSessionDescription@1@@Z
MCAPI class cricket::AudioContentDescription const*
GetFirstAudioContentDescription(class cricket::SessionDescription const*);

// symbol: ?GetFirstDataContent@cricket@@YAPEBVContentInfo@1@PEBVSessionDescription@1@@Z
MCAPI class cricket::ContentInfo const* GetFirstDataContent(class cricket::SessionDescription const*);

// symbol:
// ?GetFirstDataContent@cricket@@YAPEBVContentInfo@1@AEBV?$vector@VContentInfo@cricket@@V?$allocator@VContentInfo@cricket@@@std@@@std@@@Z
MCAPI class cricket::ContentInfo const* GetFirstDataContent(std::vector<class cricket::ContentInfo> const&);

// symbol: ?GetFirstMediaContent@cricket@@YAPEBVContentInfo@1@PEBVSessionDescription@1@W4MediaType@1@@Z
MCAPI class cricket::ContentInfo const*
GetFirstMediaContent(class cricket::SessionDescription const*, ::cricket::MediaType);

// symbol:
// ?GetFirstMediaContent@cricket@@YAPEBVContentInfo@1@AEBV?$vector@VContentInfo@cricket@@V?$allocator@VContentInfo@cricket@@@std@@@std@@W4MediaType@1@@Z
MCAPI class cricket::ContentInfo const*
GetFirstMediaContent(std::vector<class cricket::ContentInfo> const&, ::cricket::MediaType);

// symbol:
// ?GetFirstMediaContentDescription@cricket@@YAPEBVMediaContentDescription@1@PEBVSessionDescription@1@W4MediaType@1@@Z
MCAPI class cricket::MediaContentDescription const*
GetFirstMediaContentDescription(class cricket::SessionDescription const*, ::cricket::MediaType);

// symbol: ?GetFirstSctpDataContentDescription@cricket@@YAPEBVSctpDataContentDescription@1@PEBVSessionDescription@1@@Z
MCAPI class cricket::SctpDataContentDescription const*
GetFirstSctpDataContentDescription(class cricket::SessionDescription const*);

// symbol: ?GetFirstVideoContent@cricket@@YAPEBVContentInfo@1@PEBVSessionDescription@1@@Z
MCAPI class cricket::ContentInfo const* GetFirstVideoContent(class cricket::SessionDescription const*);

// symbol: ?GetFirstVideoContentDescription@cricket@@YAPEBVVideoContentDescription@1@PEBVSessionDescription@1@@Z
MCAPI class cricket::VideoContentDescription const*
GetFirstVideoContentDescription(class cricket::SessionDescription const*);

// symbol: ?GetProtocolOverhead@cricket@@YAHV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI int GetProtocolOverhead(std::string_view);

// symbol: ?GetRtcpType@cricket@@YA_NPEBX_KPEAH@Z
MCAPI bool GetRtcpType(void const*, uint64, int*);

// symbol: ?GetStunErrorResponseType@cricket@@YAHH@Z
MCAPI int GetStunErrorResponseType(int);

// symbol: ?GetStunSuccessResponseType@cricket@@YAHH@Z
MCAPI int GetStunSuccessResponseType(int);

// symbol:
// ?GetSupportedAudioSdesCryptoSuiteNames@cricket@@YAXAEBUCryptoOptions@webrtc@@PEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
MCAPI void GetSupportedAudioSdesCryptoSuiteNames(struct webrtc::CryptoOptions const&, std::vector<std::string>*);

// symbol:
// ?GetSupportedAudioSdesCryptoSuites@cricket@@YAXAEBUCryptoOptions@webrtc@@PEAV?$vector@HV?$allocator@H@std@@@std@@@Z
MCAPI void GetSupportedAudioSdesCryptoSuites(struct webrtc::CryptoOptions const&, std::vector<int>*);

// symbol:
// ?GetSupportedVideoSdesCryptoSuiteNames@cricket@@YAXAEBUCryptoOptions@webrtc@@PEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
MCAPI void GetSupportedVideoSdesCryptoSuiteNames(struct webrtc::CryptoOptions const&, std::vector<std::string>*);

// symbol:
// ?GetSupportedVideoSdesCryptoSuites@cricket@@YAXAEBUCryptoOptions@webrtc@@PEAV?$vector@HV?$allocator@H@std@@@std@@@Z
MCAPI void GetSupportedVideoSdesCryptoSuites(struct webrtc::CryptoOptions const&, std::vector<int>*);

// symbol: ?GreatestCommonDivisor@cricket@@YAHHH@Z
MCAPI int GreatestCommonDivisor(int, int);

// symbol: ?ICE_CANDIDATE_COMPONENT_DEFAULT@cricket@@3HB
MCAPI extern int const ICE_CANDIDATE_COMPONENT_DEFAULT;

// symbol: ?ICE_CANDIDATE_COMPONENT_RTCP@cricket@@3HB
MCAPI extern int const ICE_CANDIDATE_COMPONENT_RTCP;

// symbol: ?ICE_CANDIDATE_COMPONENT_RTP@cricket@@3HB
MCAPI extern int const ICE_CANDIDATE_COMPONENT_RTP;

// symbol: ?ICE_PWD_LENGTH@cricket@@3HB
MCAPI extern int const ICE_PWD_LENGTH;

// symbol: ?ICE_PWD_MAX_LENGTH@cricket@@3_KB
MCAPI extern uint64 const ICE_PWD_MAX_LENGTH;

// symbol: ?ICE_PWD_MIN_LENGTH@cricket@@3_KB
MCAPI extern uint64 const ICE_PWD_MIN_LENGTH;

// symbol: ?ICE_UFRAG_LENGTH@cricket@@3HB
MCAPI extern int const ICE_UFRAG_LENGTH;

// symbol: ?ICE_UFRAG_MAX_LENGTH@cricket@@3_KB
MCAPI extern uint64 const ICE_UFRAG_MAX_LENGTH;

// symbol: ?ICE_UFRAG_MIN_LENGTH@cricket@@3_KB
MCAPI extern uint64 const ICE_UFRAG_MIN_LENGTH;

// symbol: ?IceCredentialsChanged@cricket@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@000@Z
MCAPI bool IceCredentialsChanged(std::string_view, std::string_view, std::string_view, std::string_view);

// symbol:
// ?IceSwitchReasonToString@cricket@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4IceSwitchReason@1@@Z
MCAPI std::string IceSwitchReasonToString(::cricket::IceSwitchReason);

// symbol: ?InferRtpPacketType@cricket@@YA?AW4RtpPacketType@1@V?$ArrayView@$$CBD$0?BCGH@@rtc@@@Z
MCAPI ::cricket::RtpPacketType InferRtpPacketType(class rtc::ArrayView<char const, -4711>);

// symbol: ?IsAudioContent@cricket@@YA_NPEBVContentInfo@1@@Z
MCAPI bool IsAudioContent(class cricket::ContentInfo const*);

// symbol: ?IsDtlsRtp@cricket@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI bool IsDtlsRtp(std::string_view);

// symbol: ?IsDtlsSctp@cricket@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI bool IsDtlsSctp(std::string_view);

// symbol: ?IsMediaContent@cricket@@YA_NPEBVContentInfo@1@@Z
MCAPI bool IsMediaContent(class cricket::ContentInfo const*);

// symbol: ?IsPlainRtp@cricket@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI bool IsPlainRtp(std::string_view);

// symbol: ?IsPlainSctp@cricket@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI bool IsPlainSctp(std::string_view);

// symbol: ?IsRtpProtocol@cricket@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI bool IsRtpProtocol(std::string_view);

// symbol: ?IsSctpProtocol@cricket@@YA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
MCAPI bool IsSctpProtocol(std::string_view);

// symbol: ?IsStunErrorResponseType@cricket@@YA_NH@Z
MCAPI bool IsStunErrorResponseType(int);

// symbol: ?IsStunIndicationType@cricket@@YA_NH@Z
MCAPI bool IsStunIndicationType(int);

// symbol: ?IsStunRequestType@cricket@@YA_NH@Z
MCAPI bool IsStunRequestType(int);

// symbol: ?IsStunSuccessResponseType@cricket@@YA_NH@Z
MCAPI bool IsStunSuccessResponseType(int);

// symbol: ?IsUnsupportedContent@cricket@@YA_NPEBVContentInfo@1@@Z
MCAPI bool IsUnsupportedContent(class cricket::ContentInfo const*);

// symbol: ?IsValidRtpPacketSize@cricket@@YA_NW4RtpPacketType@1@_K@Z
MCAPI bool IsValidRtpPacketSize(::cricket::RtpPacketType, uint64);

// symbol: ?IsValidRtpPayloadType@cricket@@YA_NH@Z
MCAPI bool IsValidRtpPayloadType(int);

// symbol: ?IsVideoContent@cricket@@YA_NPEBVContentInfo@1@@Z
MCAPI bool IsVideoContent(class cricket::ContentInfo const*);

// symbol: ?LOCAL_PORT_TYPE@cricket@@3QBDB
MCAPI extern char const LOCAL_PORT_TYPE[];

// symbol: ?LOCAL_TLD@cricket@@3QBDB
MCAPI extern char const LOCAL_TLD[];

// symbol: ?LeastCommonMultiple@cricket@@YAHHH@Z
MCAPI int LeastCommonMultiple(int, int);

// symbol: ?MIN_CHECK_RECEIVING_INTERVAL@cricket@@3HB
MCAPI extern int const MIN_CHECK_RECEIVING_INTERVAL;

// symbol: ?MIN_CONNECTION_LIFETIME@cricket@@3HB
MCAPI extern int const MIN_CONNECTION_LIFETIME;

// symbol:
// ?MediaTypeToString@cricket@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4MediaType@1@@Z
MCAPI std::string MediaTypeToString(::cricket::MediaType);

// symbol:
// ?MergeCodecsFromDescription@cricket@@YAXAEBV?$vector@PEBVContentInfo@cricket@@V?$allocator@PEBVContentInfo@cricket@@@std@@@std@@PEAV?$vector@UAudioCodec@cricket@@V?$allocator@UAudioCodec@cricket@@@std@@@3@PEAV?$vector@UVideoCodec@cricket@@V?$allocator@UVideoCodec@cricket@@@std@@@3@PEAVUsedPayloadTypes@1@PEBVFieldTrialsView@webrtc@@@Z
MCAPI void
MergeCodecsFromDescription(std::vector<class cricket::ContentInfo const*> const&, std::vector<struct cricket::AudioCodec>*, std::vector<struct cricket::VideoCodec>*, class cricket::UsedPayloadTypes*, class webrtc::FieldTrialsView const*);

// symbol: ?PRFLX_PORT_TYPE@cricket@@3QBDB
MCAPI extern char const PRFLX_PORT_TYPE[];

// symbol: ?ProtoToString@cricket@@YAPEBDW4ProtocolType@1@@Z
MCAPI char const* ProtoToString(::cricket::ProtocolType);

// symbol: ?RECEIVING_SWITCHING_DELAY@cricket@@3HB
MCAPI extern int const RECEIVING_SWITCHING_DELAY;

// symbol: ?RECEIVING_TIMEOUT@cricket@@3HB
MCAPI extern int const RECEIVING_TIMEOUT;

// symbol: ?REGATHER_ON_FAILED_NETWORKS_INTERVAL@cricket@@3HB
MCAPI extern int const REGATHER_ON_FAILED_NETWORKS_INTERVAL;

// symbol: ?RELAY_PORT_TYPE@cricket@@3QBDB
MCAPI extern char const RELAY_PORT_TYPE[];

// symbol: ?RtpPacketTypeToString@cricket@@YA?AV?$basic_string_view@DU?$char_traits@D@std@@@std@@W4RtpPacketType@1@@Z
MCAPI std::string_view RtpPacketTypeToString(::cricket::RtpPacketType);

// symbol: ?SERVER_NOT_REACHABLE_ERROR@cricket@@3HB
MCAPI extern int const SERVER_NOT_REACHABLE_ERROR;

// symbol: ?SSLTCP_PROTOCOL_NAME@cricket@@3QBDB
MCAPI extern char const SSLTCP_PROTOCOL_NAME[];

// symbol: ?STRONG_AND_STABLE_WRITABLE_CONNECTION_PING_INTERVAL@cricket@@3HB
MCAPI extern int const STRONG_AND_STABLE_WRITABLE_CONNECTION_PING_INTERVAL;

// symbol: ?STRONG_PING_INTERVAL@cricket@@3HB
MCAPI extern int const STRONG_PING_INTERVAL;

// symbol: ?STUN_ATTR_TURN_LOGGING_ID@cricket@@3HB
MCAPI extern int const STUN_ATTR_TURN_LOGGING_ID;

// symbol: ?STUN_ERROR_REASON_ALLOCATION_MISMATCH@cricket@@3QBDB
MCAPI extern char const STUN_ERROR_REASON_ALLOCATION_MISMATCH[];

// symbol: ?STUN_ERROR_REASON_BAD_REQUEST@cricket@@3QBDB
MCAPI extern char const STUN_ERROR_REASON_BAD_REQUEST[];

// symbol: ?STUN_ERROR_REASON_FORBIDDEN@cricket@@3QBDB
MCAPI extern char const STUN_ERROR_REASON_FORBIDDEN[];

// symbol: ?STUN_ERROR_REASON_ROLE_CONFLICT@cricket@@3QBDB
MCAPI extern char const STUN_ERROR_REASON_ROLE_CONFLICT[];

// symbol: ?STUN_ERROR_REASON_SERVER_ERROR@cricket@@3QBDB
MCAPI extern char const STUN_ERROR_REASON_SERVER_ERROR[];

// symbol: ?STUN_ERROR_REASON_STALE_NONCE@cricket@@3QBDB
MCAPI extern char const STUN_ERROR_REASON_STALE_NONCE[];

// symbol: ?STUN_ERROR_REASON_TRY_ALTERNATE_SERVER@cricket@@3QBDB
MCAPI extern char const STUN_ERROR_REASON_TRY_ALTERNATE_SERVER[];

// symbol: ?STUN_ERROR_REASON_UNAUTHORIZED@cricket@@3QBDB
MCAPI extern char const STUN_ERROR_REASON_UNAUTHORIZED[];

// symbol: ?STUN_ERROR_REASON_UNKNOWN_ATTRIBUTE@cricket@@3QBDB
MCAPI extern char const STUN_ERROR_REASON_UNKNOWN_ATTRIBUTE[];

// symbol: ?STUN_ERROR_REASON_UNSUPPORTED_PROTOCOL@cricket@@3QBDB
MCAPI extern char const STUN_ERROR_REASON_UNSUPPORTED_PROTOCOL[];

// symbol: ?STUN_ERROR_REASON_WRONG_CREDENTIALS@cricket@@3QBDB
MCAPI extern char const STUN_ERROR_REASON_WRONG_CREDENTIALS[];

// symbol: ?STUN_KEEPALIVE_INTERVAL@cricket@@3HB
MCAPI extern int const STUN_KEEPALIVE_INTERVAL;

// symbol: ?STUN_PORT_TYPE@cricket@@3QBDB
MCAPI extern char const STUN_PORT_TYPE[];

// symbol:
// ?StringToConnectionRole@cricket@@YA?AV?$optional@W4ConnectionRole@cricket@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
MCAPI std::optional<::cricket::ConnectionRole> StringToConnectionRole(std::string_view);

// symbol:
// ?StringToProto@cricket@@YA?AV?$optional@W4ProtocolType@cricket@@@std@@V?$basic_string_view@DU?$char_traits@D@std@@@3@@Z
MCAPI std::optional<::cricket::ProtocolType> StringToProto(std::string_view);

// symbol: ?StunMethodToString@cricket@@YA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
MCAPI std::string StunMethodToString(int);

// symbol: ?TCPTYPE_ACTIVE_STR@cricket@@3QBDB
MCAPI extern char const TCPTYPE_ACTIVE_STR[];

// symbol: ?TCPTYPE_PASSIVE_STR@cricket@@3QBDB
MCAPI extern char const TCPTYPE_PASSIVE_STR[];

// symbol: ?TCPTYPE_SIMOPEN_STR@cricket@@3QBDB
MCAPI extern char const TCPTYPE_SIMOPEN_STR[];

// symbol: ?TCP_PROTOCOL_NAME@cricket@@3QBDB
MCAPI extern char const TCP_PROTOCOL_NAME[];

// symbol: ?TLS_PROTOCOL_NAME@cricket@@3QBDB
MCAPI extern char const TLS_PROTOCOL_NAME[];

// symbol: ?TURN_MAGIC_COOKIE_VALUE@cricket@@3QBDB
MCAPI extern char const TURN_MAGIC_COOKIE_VALUE[];

// symbol: ?UDP_PROTOCOL_NAME@cricket@@3QBDB
MCAPI extern char const UDP_PROTOCOL_NAME[];

// symbol: ?VerifyCandidate@cricket@@YA?AVRTCError@webrtc@@AEBVCandidate@1@@Z
MCAPI class webrtc::RTCError VerifyCandidate(class cricket::Candidate const&);

// symbol:
// ?VerifyCandidates@cricket@@YA?AVRTCError@webrtc@@AEBV?$vector@VCandidate@cricket@@V?$allocator@VCandidate@cricket@@@std@@@std@@@Z
MCAPI class webrtc::RTCError VerifyCandidates(std::vector<class cricket::Candidate> const&);

// symbol: ?WEAK_CONNECTION_RECEIVE_TIMEOUT@cricket@@3HB
MCAPI extern int const WEAK_CONNECTION_RECEIVE_TIMEOUT;

// symbol: ?WEAK_OR_STABILIZING_WRITABLE_CONNECTION_PING_INTERVAL@cricket@@3HB
MCAPI extern int const WEAK_OR_STABILIZING_WRITABLE_CONNECTION_PING_INTERVAL;

// symbol: ?WEAK_PING_INTERVAL@cricket@@3HB
MCAPI extern int const WEAK_PING_INTERVAL;

// symbol: ?kApplicationSpecificBandwidth@cricket@@3QBDB
MCAPI extern char const kApplicationSpecificBandwidth[];

// symbol: ?kAv1CodecName@cricket@@3QBDB
MCAPI extern char const kAv1CodecName[];

// symbol: ?kCnCodecName@cricket@@3QBDB
MCAPI extern char const kCnCodecName[];

// symbol: ?kCodecParamAssociatedCodecName@cricket@@3QBDB
MCAPI extern char const kCodecParamAssociatedCodecName[];

// symbol: ?kCodecParamAssociatedPayloadType@cricket@@3QBDB
MCAPI extern char const kCodecParamAssociatedPayloadType[];

// symbol: ?kCodecParamMaxAverageBitrate@cricket@@3QBDB
MCAPI extern char const kCodecParamMaxAverageBitrate[];

// symbol: ?kCodecParamMaxBitrate@cricket@@3QBDB
MCAPI extern char const kCodecParamMaxBitrate[];

// symbol: ?kCodecParamMaxPTime@cricket@@3QBDB
MCAPI extern char const kCodecParamMaxPTime[];

// symbol: ?kCodecParamMaxPlaybackRate@cricket@@3QBDB
MCAPI extern char const kCodecParamMaxPlaybackRate[];

// symbol: ?kCodecParamMaxQuantization@cricket@@3QBDB
MCAPI extern char const kCodecParamMaxQuantization[];

// symbol: ?kCodecParamMinBitrate@cricket@@3QBDB
MCAPI extern char const kCodecParamMinBitrate[];

// symbol: ?kCodecParamMinPTime@cricket@@3QBDB
MCAPI extern char const kCodecParamMinPTime[];

// symbol: ?kCodecParamNotInNameValueFormat@cricket@@3QBDB
MCAPI extern char const kCodecParamNotInNameValueFormat[];

// symbol: ?kCodecParamPTime@cricket@@3QBDB
MCAPI extern char const kCodecParamPTime[];

// symbol: ?kCodecParamRtxTime@cricket@@3QBDB
MCAPI extern char const kCodecParamRtxTime[];

// symbol: ?kCodecParamSPropStereo@cricket@@3QBDB
MCAPI extern char const kCodecParamSPropStereo[];

// symbol: ?kCodecParamStartBitrate@cricket@@3QBDB
MCAPI extern char const kCodecParamStartBitrate[];

// symbol: ?kCodecParamStereo@cricket@@3QBDB
MCAPI extern char const kCodecParamStereo[];

// symbol: ?kCodecParamUseDtx@cricket@@3QBDB
MCAPI extern char const kCodecParamUseDtx[];

// symbol: ?kCodecParamUseInbandFec@cricket@@3QBDB
MCAPI extern char const kCodecParamUseInbandFec[];

// symbol: ?kComfortNoiseCodecName@cricket@@3QBDB
MCAPI extern char const kComfortNoiseCodecName[];

// symbol: ?kConferenceDefaultNumTemporalLayers@cricket@@3_KB
MCAPI extern uint64 const kConferenceDefaultNumTemporalLayers;

// symbol: ?kConferenceMaxNumSpatialLayers@cricket@@3_KB
MCAPI extern uint64 const kConferenceMaxNumSpatialLayers;

// symbol: ?kConferenceMaxNumTemporalLayers@cricket@@3_KB
MCAPI extern uint64 const kConferenceMaxNumTemporalLayers;

// symbol: ?kDefaultVideoMaxFramerate@cricket@@3HB
MCAPI extern int const kDefaultVideoMaxFramerate;

// symbol: ?kDtmfCodecName@cricket@@3QBDB
MCAPI extern char const kDtmfCodecName[];

// symbol: ?kFecFrSsrcGroupSemantics@cricket@@3QBDB
MCAPI extern char const kFecFrSsrcGroupSemantics[];

// symbol: ?kFecSsrcGroupSemantics@cricket@@3QBDB
MCAPI extern char const kFecSsrcGroupSemantics[];

// symbol: ?kFidSsrcGroupSemantics@cricket@@3QBDB
MCAPI extern char const kFidSsrcGroupSemantics[];

// symbol: ?kFlexfecCodecName@cricket@@3QBDB
MCAPI extern char const kFlexfecCodecName[];

// symbol: ?kFlexfecFmtpRepairWindow@cricket@@3QBDB
MCAPI extern char const kFlexfecFmtpRepairWindow[];

// symbol: ?kG722CodecName@cricket@@3QBDB
MCAPI extern char const kG722CodecName[];

// symbol: ?kH264CodecName@cricket@@3QBDB
MCAPI extern char const kH264CodecName[];

// symbol: ?kH264FmtpLevelAsymmetryAllowed@cricket@@3QBDB
MCAPI extern char const kH264FmtpLevelAsymmetryAllowed[];

// symbol: ?kH264FmtpPacketizationMode@cricket@@3QBDB
MCAPI extern char const kH264FmtpPacketizationMode[];

// symbol: ?kH264FmtpProfileLevelId@cricket@@3QBDB
MCAPI extern char const kH264FmtpProfileLevelId[];

// symbol: ?kH264FmtpSpropParameterSets@cricket@@3QBDB
MCAPI extern char const kH264FmtpSpropParameterSets[];

// symbol: ?kH264FmtpSpsPpsIdrInKeyframe@cricket@@3QBDB
MCAPI extern char const kH264FmtpSpsPpsIdrInKeyframe[];

// symbol: ?kH264ProfileLevelConstrainedBaseline@cricket@@3QBDB
MCAPI extern char const kH264ProfileLevelConstrainedBaseline[];

// symbol: ?kH264ProfileLevelConstrainedHigh@cricket@@3QBDB
MCAPI extern char const kH264ProfileLevelConstrainedHigh[];

// symbol: ?kHighSystemCpuThreshold@cricket@@3MB
MCAPI extern float const kHighSystemCpuThreshold;

// symbol: ?kIlbcCodecName@cricket@@3QBDB
MCAPI extern char const kIlbcCodecName[];

// symbol: ?kIsacCodecName@cricket@@3QBDB
MCAPI extern char const kIsacCodecName[];

// symbol: ?kL16CodecName@cricket@@3QBDB
MCAPI extern char const kL16CodecName[];

// symbol: ?kLowSystemCpuThreshold@cricket@@3MB
MCAPI extern float const kLowSystemCpuThreshold;

// symbol: ?kMediaProtocolAvpf@cricket@@3QBDB
MCAPI extern char const kMediaProtocolAvpf[];

// symbol: ?kMediaProtocolDtlsSavpf@cricket@@3QBDB
MCAPI extern char const kMediaProtocolDtlsSavpf[];

// symbol: ?kMediaProtocolDtlsSctp@cricket@@3QBDB
MCAPI extern char const kMediaProtocolDtlsSctp[];

// symbol: ?kMediaProtocolSavpf@cricket@@3QBDB
MCAPI extern char const kMediaProtocolSavpf[];

// symbol: ?kMediaProtocolSctp@cricket@@3QBDB
MCAPI extern char const kMediaProtocolSctp[];

// symbol: ?kMediaProtocolTcpDtlsSctp@cricket@@3QBDB
MCAPI extern char const kMediaProtocolTcpDtlsSctp[];

// symbol: ?kMediaProtocolUdpDtlsSctp@cricket@@3QBDB
MCAPI extern char const kMediaProtocolUdpDtlsSctp[];

// symbol: ?kMediaTypeAudio@cricket@@3QBDB
MCAPI extern char const kMediaTypeAudio[];

// symbol: ?kMediaTypeData@cricket@@3QBDB
MCAPI extern char const kMediaTypeData[];

// symbol: ?kMediaTypeVideo@cricket@@3QBDB
MCAPI extern char const kMediaTypeVideo[];

// symbol: ?kMultiplexCodecName@cricket@@3QBDB
MCAPI extern char const kMultiplexCodecName[];

// symbol: ?kOpusCodecName@cricket@@3QBDB
MCAPI extern char const kOpusCodecName[];

// symbol: ?kOpusDefaultMaxPTime@cricket@@3HB
MCAPI extern int const kOpusDefaultMaxPTime;

// symbol: ?kOpusDefaultMaxPlaybackRate@cricket@@3HB
MCAPI extern int const kOpusDefaultMaxPlaybackRate;

// symbol: ?kOpusDefaultMinPTime@cricket@@3HB
MCAPI extern int const kOpusDefaultMinPTime;

// symbol: ?kOpusDefaultPTime@cricket@@3HB
MCAPI extern int const kOpusDefaultPTime;

// symbol: ?kOpusDefaultSPropStereo@cricket@@3HB
MCAPI extern int const kOpusDefaultSPropStereo;

// symbol: ?kOpusDefaultStereo@cricket@@3HB
MCAPI extern int const kOpusDefaultStereo;

// symbol: ?kOpusDefaultUseDtx@cricket@@3HB
MCAPI extern int const kOpusDefaultUseDtx;

// symbol: ?kOpusDefaultUseInbandFec@cricket@@3HB
MCAPI extern int const kOpusDefaultUseInbandFec;

// symbol: ?kPacketizationParamRaw@cricket@@3QBDB
MCAPI extern char const kPacketizationParamRaw[];

// symbol: ?kParamValueEmpty@cricket@@3QBDB
MCAPI extern char const kParamValueEmpty[];

// symbol: ?kParamValueTrue@cricket@@3QBDB
MCAPI extern char const kParamValueTrue[];

// symbol: ?kPcmaCodecName@cricket@@3QBDB
MCAPI extern char const kPcmaCodecName[];

// symbol: ?kPcmuCodecName@cricket@@3QBDB
MCAPI extern char const kPcmuCodecName[];

// symbol: ?kPreferredMaxPTime@cricket@@3HB
MCAPI extern int const kPreferredMaxPTime;

// symbol: ?kPreferredMinPTime@cricket@@3HB
MCAPI extern int const kPreferredMinPTime;

// symbol: ?kPreferredSPropStereo@cricket@@3HB
MCAPI extern int const kPreferredSPropStereo;

// symbol: ?kPreferredStereo@cricket@@3HB
MCAPI extern int const kPreferredStereo;

// symbol: ?kPreferredUseInbandFec@cricket@@3HB
MCAPI extern int const kPreferredUseInbandFec;

// symbol: ?kProcessCpuThreshold@cricket@@3MB
MCAPI extern float const kProcessCpuThreshold;

// symbol: ?kRedCodecName@cricket@@3QBDB
MCAPI extern char const kRedCodecName[];

// symbol: ?kRtcpFbCcmParamFir@cricket@@3QBDB
MCAPI extern char const kRtcpFbCcmParamFir[];

// symbol: ?kRtcpFbNackParamPli@cricket@@3QBDB
MCAPI extern char const kRtcpFbNackParamPli[];

// symbol: ?kRtcpFbParamCcm@cricket@@3QBDB
MCAPI extern char const kRtcpFbParamCcm[];

// symbol: ?kRtcpFbParamLntf@cricket@@3QBDB
MCAPI extern char const kRtcpFbParamLntf[];

// symbol: ?kRtcpFbParamNack@cricket@@3QBDB
MCAPI extern char const kRtcpFbParamNack[];

// symbol: ?kRtcpFbParamRemb@cricket@@3QBDB
MCAPI extern char const kRtcpFbParamRemb[];

// symbol: ?kRtcpFbParamRrtr@cricket@@3QBDB
MCAPI extern char const kRtcpFbParamRrtr[];

// symbol: ?kRtcpFbParamTransportCc@cricket@@3QBDB
MCAPI extern char const kRtcpFbParamTransportCc[];

// symbol: ?kRtxCodecName@cricket@@3QBDB
MCAPI extern char const kRtxCodecName[];

// symbol: ?kSimSsrcGroupSemantics@cricket@@3QBDB
MCAPI extern char const kSimSsrcGroupSemantics[];

// symbol: ?kTransportSpecificBandwidth@cricket@@3QBDB
MCAPI extern char const kTransportSpecificBandwidth[];

// symbol: ?kUlpfecCodecName@cricket@@3QBDB
MCAPI extern char const kUlpfecCodecName[];

// symbol: ?kVP9ProfileId@cricket@@3QBDB
MCAPI extern char const kVP9ProfileId[];

// symbol: ?kVideoCodecClockrate@cricket@@3HB
MCAPI extern int const kVideoCodecClockrate;

// symbol: ?kVideoMtu@cricket@@3HB
MCAPI extern int const kVideoMtu;

// symbol: ?kVideoRtpRecvBufferSize@cricket@@3HB
MCAPI extern int const kVideoRtpRecvBufferSize;

// symbol: ?kVideoRtpSendBufferSize@cricket@@3HB
MCAPI extern int const kVideoRtpSendBufferSize;

// symbol: ?kVp8CodecName@cricket@@3QBDB
MCAPI extern char const kVp8CodecName[];

// symbol: ?kVp9CodecName@cricket@@3QBDB
MCAPI extern char const kVp9CodecName[];
// NOLINTEND

}; // namespace cricket
