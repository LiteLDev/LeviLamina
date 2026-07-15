#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/absl/AnyInvocable.h"
#include "mc/external/webrtc/AV1Profile.h"
#include "mc/external/webrtc/AdapterType.h"
#include "mc/external/webrtc/ArrayView.h"
#include "mc/external/webrtc/Base64DecodeOptions.h"
#include "mc/external/webrtc/ConnectionRole.h"
#include "mc/external/webrtc/IceCandidateType.h"
#include "mc/external/webrtc/IceSwitchReason.h"
#include "mc/external/webrtc/MediaType.h"
#include "mc/external/webrtc/PeerConnectionInterface.h"
#include "mc/external/webrtc/ProtocolType.h"
#include "mc/external/webrtc/RTCErrorDetailType.h"
#include "mc/external/webrtc/RTCErrorType.h"
#include "mc/external/webrtc/RtpPacketType.h"
#include "mc/external/webrtc/RtpTransceiverDirection.h"
#include "mc/external/webrtc/ScalabilityMode.h"
#include "mc/external/webrtc/SdpMungingType.h"
#include "mc/external/webrtc/SdpType.h"
#include "mc/external/webrtc/VP9Profile.h"
#include "mc/external/webrtc/VideoCodecType.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class AsyncPacketSocket; }
namespace webrtc { class AudioContentDescription; }
namespace webrtc { class Candidate; }
namespace webrtc { class ClockInterface; }
namespace webrtc { class ContentInfo; }
namespace webrtc { class CopyOnWriteBuffer; }
namespace webrtc { class DataRate; }
namespace webrtc { class DataSize; }
namespace webrtc { class FeedbackParam; }
namespace webrtc { class FieldTrialParameterInterface; }
namespace webrtc { class FieldTrialsView; }
namespace webrtc { class IPAddress; }
namespace webrtc { class IceCandidate; }
namespace webrtc { class JsepSessionDescription; }
namespace webrtc { class MessageDigest; }
namespace webrtc { class PendingTaskSafetyFlag; }
namespace webrtc { class PriorityValue; }
namespace webrtc { class RTCError; }
namespace webrtc { class RTCStats; }
namespace webrtc { class RTCStatsReport; }
namespace webrtc { class RtpHeaderExtensionMap; }
namespace webrtc { class RtpHeaderExtensionQueryInterface; }
namespace webrtc { class SctpDataContentDescription; }
namespace webrtc { class SessionDescription; }
namespace webrtc { class SessionDescriptionInterface; }
namespace webrtc { class SocketAddress; }
namespace webrtc { class SocketServer; }
namespace webrtc { class StringBuilder; }
namespace webrtc { class TaskQueueFactory; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc { class TransceiverList; }
namespace webrtc { class VideoContentDescription; }
namespace webrtc { struct Codec; }
namespace webrtc { struct DataChannelInit; }
namespace webrtc { struct FrameDependencyStructure; }
namespace webrtc { struct H264ProfileLevelId; }
namespace webrtc { struct PacketInfo; }
namespace webrtc { struct RTPVideoHeader; }
namespace webrtc { struct RelayServerConfig; }
namespace webrtc { struct RtcpFeedback; }
namespace webrtc { struct RtpCapabilities; }
namespace webrtc { struct RtpCodec; }
namespace webrtc { struct RtpCodecCapability; }
namespace webrtc { struct RtpExtension; }
namespace webrtc { struct RtpExtensionSize; }
namespace webrtc { struct RtpParameters; }
namespace webrtc { struct SdpAudioFormat; }
namespace webrtc { struct SdpParseError; }
// clang-format on

namespace webrtc {
// inner types
enum : uint {
    None      = 0,
    Host      = 1,
    Reflexive = 2,
    Relay     = 4,
    All       = 7,
};

enum : int {
    // bitfield representation
    DisableUdp                    = 1 << 0,
    DisableStun                   = 1 << 1,
    DisableRelay                  = 1 << 2,
    DisableTcp                    = 1 << 3,
    EnableIpv6                    = 1 << 6,
    EnableSharedSocket            = 1 << 8,
    EnableStunRetransmitAttribute = 1 << 9,
    DisableAdapterEnumeration     = 1 << 10,
    DisableDefaultLocalCandidate  = 1 << 11,
    DisableUdpRelay               = 1 << 12,
    DisableCostlyNetworks         = 1 << 13,
    EnableIpv6OnWifi              = 1 << 14,
    EnableAnyAddressPorts         = 1 << 15,
    DisableLinkLocalNetworks      = 1 << 16,
    EnableGlobalSharedSocket      = 1 << 17,
};

enum : int {
    Trunc = 16711681,
};

enum : int {
    KMaxEncoderBuffers = 8,
};

enum : int {
    KMaxPreferredPixelFormats = 5,
};

enum : int {
    KMaxSimulcastStreams = 3,
};

enum : int {
    KMaxSpatialLayers = 5,
};

enum : int {
    KMaxTemporalStreams = 4,
};

enum : int {
    KRtpCsrcSize = 15,
};

// functions
// NOLINTBEGIN
MCNAPI int64 ASN1TimeToSec(uchar const* s, uint64 length, bool long_format);

MCNAPI bool AV1IsSameProfile(
    ::std::map<::std::string, ::std::string> const& params1,
    ::std::map<::std::string, ::std::string> const& params2
);

MCNAPI ::std::string_view AV1ProfileToString(::webrtc::AV1Profile profile);

MCNAPI ::std::string AdapterTypeToString(::webrtc::AdapterType type);

MCNAPI void AlignedFree(void* mem_block);

MCNAPI void* AlignedMalloc(uint64 size, uint64 alignment);

MCNAPI ::std::optional<::std::string> Base64Decode(::std::string_view data, ::webrtc::Base64DecodeOptions options);

MCNAPI ::std::string Base64Encode(::std::string_view data);

MCNAPI ::webrtc::RTCError CheckRtpParametersInvalidModificationAndValues(
    ::webrtc::RtpParameters const&   old_rtp_parameters,
    ::webrtc::RtpParameters const&   rtp_parameters,
    ::webrtc::FieldTrialsView const& field_trials
);

MCNAPI ::webrtc::RTCError CheckRtpParametersInvalidModificationAndValues(
    ::webrtc::RtpParameters const&                             old_rtp_parameters,
    ::webrtc::RtpParameters const&                             rtp_parameters,
    ::webrtc::ArrayView<::webrtc::Codec, 18446744073709546905> send_codecs,
    ::std::optional<::webrtc::Codec>                           send_codec,
    ::webrtc::FieldTrialsView const&                           field_trials
);

MCNAPI ::webrtc::RTCError CheckRtpParametersValues(
    ::webrtc::RtpParameters const&                             rtp_parameters,
    ::webrtc::ArrayView<::webrtc::Codec, 18446744073709546905> send_codecs,
    ::std::optional<::webrtc::Codec>                           send_codec,
    ::webrtc::FieldTrialsView const&                           field_trials
);

MCNAPI ::webrtc::RTCError CheckScalabilityModeValues(
    ::webrtc::RtpParameters const&                             rtp_parameters,
    ::webrtc::ArrayView<::webrtc::Codec, 18446744073709546905> send_codecs,
    ::std::optional<::webrtc::Codec>                           send_codec
);

MCNAPI void CheckValidDimensions(int width, int height, int stride_y, int stride_u, int stride_v);

MCNAPI char const* CodecTypeToPayloadString(::webrtc::VideoCodecType type);

MCNAPI ::webrtc::TimeDelta CompactNtpIntervalToTimeDelta(uint compact_ntp_interval);

MCNAPI ::webrtc::TimeDelta CompactNtpRttToTimeDelta(uint compact_ntp_interval);

MCNAPI uint64 ComputeDigest(::std::string_view alg, void const* input, uint64 in_len, void* output, uint64 out_len);

MCNAPI uint ComputeDtlsPacketHash(::webrtc::ArrayView<uchar const, 18446744073709546905> dtls_packet);

MCNAPI uint64 ComputeHmac(
    ::std::string_view alg,
    void const*        key,
    uint64             key_len,
    void const*        input,
    uint64             in_len,
    void*              output,
    uint64             out_len
);

MCNAPI uint64 ComputeHmac(
    ::webrtc::MessageDigest* digest,
    void const*              key,
    uint64                   key_len,
    void const*              input,
    uint64                   in_len,
    void*                    output,
    uint64                   out_len
);

MCNAPI bool ComputeStunCredentialHash(
    ::std::string const& username,
    ::std::string const& realm,
    ::std::string const& password,
    ::std::string*       hash
);

MCNAPI bool ConnectionRoleToString(::webrtc::ConnectionRole const& role, ::std::string* role_str);

MCNAPI void CopySocketInformationToPacketInfo(
    uint64                             packet_size_bytes,
    ::webrtc::AsyncPacketSocket const& socket_from,
    ::webrtc::PacketInfo*              info
);

MCNAPI ::webrtc::Codec CreateAudioCodec(::webrtc::SdpAudioFormat const& c);

MCNAPI ::webrtc::Codec CreateAudioCodec(int id, ::std::string const& name, int clockrate, uint64 channels);

MCNAPI ::std::unique_ptr<::webrtc::SocketServer> CreateDefaultSocketServer();

MCNAPI ::std::unique_ptr<::webrtc::TaskQueueFactory>
CreateDefaultTaskQueueFactory(::webrtc::FieldTrialsView const* field_trials);

MCNAPI ::webrtc::IceCandidate* CreateIceCandidate(
    ::std::string const&     sdp_mid,
    int                      sdp_mline_index,
    ::std::string const&     sdp,
    ::webrtc::SdpParseError* error
);

MCNAPI uint CreateRandomId();

MCNAPI uint64 CreateRandomId64();

MCNAPI uint CreateRandomNonZeroId();

MCNAPI bool CreateRandomString(uint64 len, ::std::string* str);

MCNAPI ::std::string CreateRandomString(uint64 len);

MCNAPI ::std::string CreateRandomUuid();

MCNAPI ::std::unique_ptr<::webrtc::SessionDescriptionInterface>
CreateSessionDescription(::webrtc::SdpType type, ::std::string const& sdp);

MCNAPI ::std::unique_ptr<::webrtc::SessionDescriptionInterface>
CreateSessionDescription(::webrtc::SdpType type, ::std::string const& sdp, ::webrtc::SdpParseError* error_out);

MCNAPI ::std::unique_ptr<::webrtc::TaskQueueFactory> CreateTaskQueueStdlibFactory();

MCNAPI ::webrtc::Codec CreateVideoCodec(int id, ::std::string const& name);

MCNAPI ulong CurrentThreadId();

MCNAPI ulong CurrentThreadRef();

MCNAPI ::webrtc::SdpMungingType DetermineSdpMungingType(
    ::webrtc::SessionDescriptionInterface const* sdesc,
    ::webrtc::SessionDescriptionInterface const* last_created_desc
);

MCNAPI ::webrtc::SocketAddress EmptySocketAddressWithFamily(int family);

MCNAPI void ExplicitZeroMemory(void* ptr, uint64 len);

MCNAPI ::std::vector<::webrtc::Codec const*>
FindAllMatchingCodecs(::std::vector<::webrtc::Codec> const& supported_codecs, ::webrtc::Codec const& codec);

MCNAPI ::webrtc::Codec const* FindCodecById(::std::vector<::webrtc::Codec> const& codecs, int payload_type);

MCNAPI ::std::optional<::webrtc::Codec> FindMatchingCodec(
    ::std::vector<::webrtc::Codec> const& codecs1,
    ::std::vector<::webrtc::Codec> const& codecs2,
    ::webrtc::Codec const&                codec_to_match
);

MCNAPI ::webrtc::IPAddress GetAnyIP(int family);

MCNAPI ::std::vector<::webrtc::RtpExtension>
GetDefaultEnabledRtpHeaderExtensions(::webrtc::RtpHeaderExtensionQueryInterface const& query_interface);

MCNAPI ::webrtc::ContentInfo const* GetFirstAudioContent(::webrtc::SessionDescription const* sdesc);

MCNAPI ::webrtc::AudioContentDescription const*
GetFirstAudioContentDescription(::webrtc::SessionDescription const* sdesc);

MCNAPI ::webrtc::ContentInfo const* GetFirstDataContent(::std::vector<::webrtc::ContentInfo> const& contents);

MCNAPI ::webrtc::ContentInfo const* GetFirstDataContent(::webrtc::SessionDescription const* sdesc);

MCNAPI ::webrtc::ContentInfo const*
GetFirstMediaContent(::std::vector<::webrtc::ContentInfo> const& contents, ::webrtc::MediaType media_type);

MCNAPI ::webrtc::SctpDataContentDescription const*
GetFirstSctpDataContentDescription(::webrtc::SessionDescription const* sdesc);

MCNAPI ::webrtc::ContentInfo const* GetFirstVideoContent(::webrtc::SessionDescription const* sdesc);

MCNAPI ::webrtc::VideoContentDescription const*
GetFirstVideoContentDescription(::webrtc::SessionDescription const* sdesc);

MCNAPI int GetProtocolOverhead(::std::string_view protocol);

MCNAPI bool GetRtcpType(void const* data, uint64 len, int* value);

MCNAPI bool GetSrtpKeyAndSaltLengths(int crypto_suite, int* key_length, int* salt_length);

MCNAPI ::std::vector<::std::string const*> GetStatsReferencedIds(::webrtc::RTCStats const& stats);

MCNAPI int GetStunErrorResponseType(int req_type);

MCNAPI int GetStunSuccessResponseType(int req_type);

MCNAPI void H264GenerateProfileLevelIdForAnswer(
    ::std::map<::std::string, ::std::string> const& local_supported_params,
    ::std::map<::std::string, ::std::string> const& remote_offered_params,
    ::std::map<::std::string, ::std::string>*       answer_params
);

MCNAPI bool H264IsSameProfile(
    ::std::map<::std::string, ::std::string> const& params1,
    ::std::map<::std::string, ::std::string> const& params2
);

MCNAPI ::std::optional<::std::string> H264ProfileLevelIdToString(::webrtc::H264ProfileLevelId const& profile_level_id);

MCNAPI bool HasUfragSdpMunging(
    ::webrtc::SessionDescriptionInterface const* sdesc,
    ::webrtc::SessionDescriptionInterface const* last_created_desc
);

MCNAPI int IPAddressPrecedence(::webrtc::IPAddress const& ip);

MCNAPI bool IPFromAddrInfo(::addrinfo* info, ::webrtc::IPAddress* out);

MCNAPI bool IPFromString(::std::string_view str, ::webrtc::IPAddress* out);

MCNAPI bool IPIsAny(::webrtc::IPAddress const& ip);

MCNAPI bool IPIsLinkLocal(::webrtc::IPAddress const& ip);

MCNAPI bool IPIsLoopback(::webrtc::IPAddress const& ip);

MCNAPI bool IPIsMacBased(::webrtc::IPAddress const& ip);

MCNAPI bool IPIsPrivate(::webrtc::IPAddress const& ip);

MCNAPI bool IPIsULA(::webrtc::IPAddress const& ip);

MCNAPI bool IPIsUnspec(::webrtc::IPAddress const& ip);

MCNAPI ::std::string_view IceCandidateTypeToString(::webrtc::IceCandidateType type);

MCNAPI bool IceCredentialsChanged(
    ::std::string_view old_ufrag,
    ::std::string_view old_pwd,
    ::std::string_view new_ufrag,
    ::std::string_view new_pwd
);

MCNAPI ::std::string IceSwitchReasonToString(::webrtc::IceSwitchReason reason);

MCNAPI ::webrtc::RtpPacketType InferRtpPacketType(::webrtc::ArrayView<uchar const, 18446744073709546905> packet);

MCNAPI bool InitializeSSL();

MCNAPI ::webrtc::RTCError
InvokeSetParametersCallback(::absl::AnyInvocable<void(::webrtc::RTCError) &&>& callback, ::webrtc::RTCError error);

MCNAPI bool IsAudioContent(::webrtc::ContentInfo const* content);

MCNAPI bool IsDtlsClientHelloPacket(::webrtc::ArrayView<uchar const, 18446744073709546905> payload);

MCNAPI bool IsDtlsPacket(::webrtc::ArrayView<uchar const, 18446744073709546905> payload);

MCNAPI bool IsDtlsRtp(::std::string_view protocol);

MCNAPI bool IsDtlsSctp(::std::string_view protocol);

MCNAPI bool IsFips180DigestAlgorithm(::std::string_view alg);

MCNAPI bool IsGcmCryptoSuite(int crypto_suite);

MCNAPI bool IsLegalRsidName(::std::string_view name);

MCNAPI bool IsNewerSequenceNumber(ushort sequence_number, ushort prev_sequence_number);

MCNAPI bool IsOpenMessage(::webrtc::CopyOnWriteBuffer const& payload);

MCNAPI bool IsPlainRtp(::std::string_view protocol);

MCNAPI bool IsPlainSctp(::std::string_view protocol);

MCNAPI bool IsRtcpPacket(::webrtc::ArrayView<uchar const, 18446744073709546905> packet);

MCNAPI bool IsRtpPacket(::webrtc::ArrayView<uchar const, 18446744073709546905> packet);

MCNAPI bool IsRtpProtocol(::std::string_view protocol);

MCNAPI bool IsSameRtpCodec(::webrtc::Codec const& codec, ::webrtc::RtpCodec const& rtp_codec);

MCNAPI bool IsSameRtpCodecIgnoringLevel(::webrtc::Codec const& codec, ::webrtc::RtpCodec const& rtp_codec);

MCNAPI bool IsSctpProtocol(::std::string_view protocol);

MCNAPI bool IsSdpMungingAllowed(::webrtc::SdpMungingType sdp_munging_type, ::webrtc::FieldTrialsView const& trials);

MCNAPI bool IsStunErrorResponseType(int msg_type);

MCNAPI bool IsStunRequestType(int msg_type);

MCNAPI bool IsStunSuccessResponseType(int msg_type);

MCNAPI bool IsThreadRefEqual(ulong const& a, ulong const& b);

MCNAPI bool IsUnsupportedContent(::webrtc::ContentInfo const* content);

MCNAPI bool IsValidRtpPacketSize(::webrtc::RtpPacketType packet_type, uint64 size);

MCNAPI bool IsValidRtpPayloadType(int payload_type);

MCNAPI bool IsVideoContent(::webrtc::ContentInfo const* content);

MCNAPI int Leb128Size(uint64 value);

MCNAPI ::std::string MakeNetworkKey(::std::string_view name, ::webrtc::IPAddress const& prefix, int prefix_length);

MCNAPI bool MatchesWithCodecRules(::webrtc::Codec const& left_codec, ::webrtc::Codec const& right_codec);

MCNAPI bool MatchesWithReferenceAttributes(::webrtc::Codec const& codec1, ::webrtc::Codec const& codec2);

MCNAPI ::std::string MediaTypeToString(::webrtc::MediaType type);

MCNAPI ::webrtc::RTCError ParseAndValidateIceServersFromConfiguration(
    ::webrtc::PeerConnectionInterface::RTCConfiguration const& configuration,
    ::std::set<::webrtc::SocketAddress>&                       stun_servers,
    ::std::vector<::webrtc::RelayServerConfig>&                turn_servers
);

MCNAPI bool
ParseCandidate(::std::string_view message, ::webrtc::Candidate* candidate, ::webrtc::SdpParseError* error, bool is_raw);

MCNAPI bool ParseDataChannelOpenAckMessage(::webrtc::CopyOnWriteBuffer const& payload);

MCNAPI bool ParseDataChannelOpenMessage(
    ::webrtc::CopyOnWriteBuffer const& payload,
    ::std::string*                     label,
    ::webrtc::DataChannelInit*         config
);

MCNAPI void ParseFieldTrial(
    ::std::initializer_list<::webrtc::FieldTrialParameterInterface*> fields,
    ::std::string_view                                               trial_string
);

MCNAPI bool ParseFmtpParameterSet(
    ::std::string_view                        line_params,
    ::std::map<::std::string, ::std::string>& codec_params,
    ::webrtc::SdpParseError*                  error
);

MCNAPI ::webrtc::RTCError ParseIceServersOrError(
    ::std::vector<::webrtc::PeerConnectionInterface::IceServer> const& servers,
    ::std::set<::webrtc::SocketAddress>*                               stun_servers,
    ::std::vector<::webrtc::RelayServerConfig>*                        turn_servers
);

MCNAPI ushort ParseRtpSequenceNumber(::webrtc::ArrayView<uchar const, 18446744073709546905> rtp_packet);

MCNAPI uint ParseRtpSsrc(::webrtc::ArrayView<uchar const, 18446744073709546905> rtp_packet);

MCNAPI ::std::optional<::webrtc::AV1Profile>
ParseSdpForAV1Profile(::std::map<::std::string, ::std::string> const& params);

MCNAPI ::std::optional<::webrtc::H264ProfileLevelId>
ParseSdpForH264ProfileLevelId(::std::map<::std::string, ::std::string> const& params);

MCNAPI ::std::optional<::webrtc::VP9Profile>
ParseSdpForVP9Profile(::std::map<::std::string, ::std::string> const& params);

MCNAPI ::webrtc::VideoCodecType PayloadStringToCodecType(::std::string const& name);

MCNAPI char const* ProtoToString(::webrtc::ProtocolType proto);

MCNAPI int ResolveHostname(::std::string_view hostname, int family, ::std::vector<::webrtc::IPAddress>& addresses);

MCNAPI ::std::vector<uchar> RtpDescriptorAuthentication(::webrtc::RTPVideoHeader const& rtp_video_header);

MCNAPI int RtpHeaderExtensionSize(
    ::webrtc::ArrayView<::webrtc::RtpExtensionSize const, 18446744073709546905> extensions,
    ::webrtc::RtpHeaderExtensionMap const&                                      registered_extensions
);

MCNAPI ::std::string_view RtpPacketTypeToString(::webrtc::RtpPacketType packet_type);

MCNAPI ::webrtc::RtpTransceiverDirection RtpTransceiverDirectionFromSendRecv(bool send, bool recv);

MCNAPI bool RtpTransceiverDirectionHasRecv(::webrtc::RtpTransceiverDirection direction);

MCNAPI bool RtpTransceiverDirectionHasSend(::webrtc::RtpTransceiverDirection direction);

MCNAPI ::webrtc::RtpTransceiverDirection
RtpTransceiverDirectionIntersection(::webrtc::RtpTransceiverDirection lhs, ::webrtc::RtpTransceiverDirection rhs);

MCNAPI ::webrtc::RtpTransceiverDirection RtpTransceiverDirectionReversed(::webrtc::RtpTransceiverDirection direction);

MCNAPI char const* RtpTransceiverDirectionToString(::webrtc::RtpTransceiverDirection direction);

MCNAPI ::webrtc::RtpTransceiverDirection
RtpTransceiverDirectionWithRecvSet(::webrtc::RtpTransceiverDirection direction, bool recv);

MCNAPI ::absl::AnyInvocable<void()>
SafeInvocable(::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> flag, ::absl::AnyInvocable<void()> task);

MCNAPI ::absl::AnyInvocable<void() &&>
SafeTask(::webrtc::scoped_refptr<::webrtc::PendingTaskSafetyFlag> flag, ::absl::AnyInvocable<void() &&> task);

MCNAPI ::std::string_view ScalabilityModeToString(::webrtc::ScalabilityMode scalability_mode);

MCNAPI bool
SdpDeserialize(::std::string_view message, ::webrtc::JsepSessionDescription* jdesc, ::webrtc::SdpParseError* error);

MCNAPI ::std::string SdpSerialize(::webrtc::JsepSessionDescription const& jdesc);

MCNAPI ::std::string SdpSerializeCandidate(::webrtc::Candidate const& candidate);

MCNAPI ::std::string SdpSerializeCandidate(::webrtc::IceCandidate const& candidate);

MCNAPI ::std::optional<::webrtc::SdpType> SdpTypeFromString(::std::string const& type_str);

MCNAPI char const* SdpTypeToString(::webrtc::SdpType type);

MCNAPI void SetCurrentThreadName(char const* name);

MCNAPI bool SocketAddressFromSockAddrStorage(::sockaddr_storage const& addr, ::webrtc::SocketAddress* out);

MCNAPI ::std::string SrtpCryptoSuiteToName(int crypto_suite);

MCNAPI ::std::string StringFormat(char const*, ...);

MCNAPI ::std::optional<::webrtc::ConnectionRole> StringToConnectionRole(::std::string_view role_str);

MCNAPI ::std::optional<::webrtc::ProtocolType> StringToProto(::std::string_view proto_name);

MCNAPI ::std::string StunMethodToString(int msg_type);

MCNAPI int64 SystemTimeMillis();

MCNAPI int64 SystemTimeNanos();

MCNAPI ::webrtc::scoped_refptr<::webrtc::RTCStatsReport>
TakeReferencedStats(::webrtc::scoped_refptr<::webrtc::RTCStatsReport> report, ::std::vector<::std::string> const& ids);

MCNAPI int64 TimeAfter(int64 elapsed);

MCNAPI int64 TimeDiff(int64 later, int64 earlier);

MCNAPI int64 TimeMicros();

MCNAPI int64 TimeMillis();

MCNAPI int64 TimeUTCMicros();

MCNAPI int64 TimeUTCMillis();

MCNAPI int64 TmToSeconds(::tm const& tm);

MCNAPI ::std::string ToHex(int i);

MCNAPI ::std::optional<::webrtc::RtcpFeedback> ToRtcpFeedback(::webrtc::FeedbackParam const& cricket_feedback);

MCNAPI ::webrtc::RtpCapabilities ToRtpCapabilities(
    ::std::vector<::webrtc::Codec> const&        cricket_codecs,
    ::std::vector<::webrtc::RtpExtension> const& cricket_extensions
);

MCNAPI ::webrtc::RtpCodecCapability ToRtpCodecCapability(::webrtc::Codec const& cricket_codec);

MCNAPI ::std::string ToString(::webrtc::DataRate value);

MCNAPI ::std::string ToString(::webrtc::DataSize value);

MCNAPI ::std::string ToString(::webrtc::TimeDelta value);

MCNAPI ::std::string ToString(::webrtc::Timestamp value);

MCNAPI ::std::string_view ToString(::webrtc::RTCErrorDetailType error);

MCNAPI ::std::string_view ToString(::webrtc::RTCErrorType error);

MCNAPI ::std::string TransformAlpnProtocols(::std::vector<::std::string> const& alpn_protocols);

MCNAPI ::webrtc::IPAddress TruncateIP(::webrtc::IPAddress const& ip, int length);

MCNAPI bool UnimplementedRtpParameterHasValue(::webrtc::RtpParameters const& parameters);

MCNAPI uint UpdateCrc32(uint start, void const* buf, uint64 len);

MCNAPI void UpdateRtpHeaderExtensionPreferencesFromSdpMunging(
    ::webrtc::SessionDescription const* description,
    ::webrtc::TransceiverList*          transceivers
);

MCNAPI bool VP9IsSameProfile(
    ::std::map<::std::string, ::std::string> const& params1,
    ::std::map<::std::string, ::std::string> const& params2
);

MCNAPI ::std::string VP9ProfileToString(::webrtc::VP9Profile profile);

MCNAPI ::webrtc::RTCError VerifyCandidate(::webrtc::Candidate const& cand);

MCNAPI int64 WinUwpSystemTimeNanos();

MCNAPI void WriteDataChannelOpenAckMessage(::webrtc::CopyOnWriteBuffer* payload);

MCNAPI bool WriteDataChannelOpenMessage(
    ::std::string const&                     label,
    ::std::string const&                     protocol,
    ::std::optional<::webrtc::PriorityValue> opt_priority,
    bool                                     ordered,
    ::std::optional<int>                     max_retransmits,
    ::std::optional<int>                     max_retransmit_time,
    ::webrtc::CopyOnWriteBuffer*             payload
);

MCNAPI bool
WriteFmtpParameters(::std::map<::std::string, ::std::string> const& parameters, ::webrtc::StringBuilder* os);

MCNAPI int WriteLeb128(uint64 value, uchar* buffer);

MCNAPI uint64 hex_decode_with_delimiter(
    ::webrtc::ArrayView<char, 18446744073709546905> cbuffer,
    ::std::string_view                              source,
    char                                            delimiter
);

MCNAPI ::std::string hex_encode(::std::string_view str);

MCNAPI ::std::string hex_encode_with_delimiter(::std::string_view source, char delimiter);

MCNAPI char const* inet_ntop(int af, void const* src, char* dst, int size);

MCNAPI int inet_pton(int af, ::std::string_view src, void* dst);

MCNAPI bool operator==(::webrtc::FrameDependencyStructure const& lhs, ::webrtc::FrameDependencyStructure const& rhs);

MCNAPI ::std::vector<::std::string_view> split(::std::string_view source, char delimiter);

MCNAPI uint64 tokenize(::std::string_view source, char delimiter, ::std::vector<::std::string>* fields);

MCNAPI bool tokenize_first(::std::string_view source, char delimiter, ::std::string* token, ::std::string* rest);

MCNAPI char const* win32_inet_ntop(int af, void const* src, char* dst, int size);

MCNAPI int win32_inet_pton(int af, char const* src, void* dst);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI int const& BACKUP_CONNECTION_PING_INTERVAL();

MCNAPI ::std::add_lvalue_reference_t<char const[]> CN_AUDIO();

MCNAPI ::std::add_lvalue_reference_t<char const[]> CN_DATA();

MCNAPI ::std::add_lvalue_reference_t<char const[]> CN_OTHER();

MCNAPI ::std::add_lvalue_reference_t<char const[]> CN_VIDEO();

MCNAPI ::std::add_lvalue_reference_t<char const[]> CONNECTIONROLE_ACTIVE_STR();

MCNAPI ::std::add_lvalue_reference_t<char const[]> CONNECTIONROLE_ACTPASS_STR();

MCNAPI ::std::add_lvalue_reference_t<char const[]> CONNECTIONROLE_HOLDCONN_STR();

MCNAPI ::std::add_lvalue_reference_t<char const[]> CONNECTIONROLE_PASSIVE_STR();

MCNAPI int const& CONNECTION_RESPONSE_TIMEOUT();

MCNAPI uint const& CONNECTION_WRITE_CONNECT_FAILURES();

MCNAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_MD5();

MCNAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_SHA_1();

MCNAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_SHA_224();

MCNAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_SHA_256();

MCNAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_SHA_384();

MCNAPI ::std::add_lvalue_reference_t<char const[]> DIGEST_SHA_512();

MCNAPI int const& DISCARD_PORT();

MCNAPI ::std::add_lvalue_reference_t<char const[]> GROUP_TYPE_BUNDLE();

MCNAPI int const& ICE_CANDIDATE_COMPONENT_DEFAULT();

MCNAPI int const& ICE_CANDIDATE_COMPONENT_RTCP();

MCNAPI int const& ICE_CANDIDATE_COMPONENT_RTP();

MCNAPI int const& ICE_PWD_LENGTH();

MCNAPI uint64 const& ICE_PWD_MAX_LENGTH();

MCNAPI uint64 const& ICE_PWD_MIN_LENGTH();

MCNAPI int const& ICE_UFRAG_LENGTH();

MCNAPI uint64 const& ICE_UFRAG_MAX_LENGTH();

MCNAPI uint64 const& ICE_UFRAG_MIN_LENGTH();

MCNAPI ::std::add_lvalue_reference_t<char const[]> LOCAL_TLD();

MCNAPI int const& MIN_CHECK_RECEIVING_INTERVAL();

MCNAPI int const& RECEIVING_SWITCHING_DELAY();

MCNAPI int const& RECEIVING_TIMEOUT();

MCNAPI int const& REGATHER_ON_FAILED_NETWORKS_INTERVAL();

MCNAPI int const& SERVER_NOT_REACHABLE_ERROR();

MCNAPI ::std::add_lvalue_reference_t<char const[]> SSLTCP_PROTOCOL_NAME();

MCNAPI int const& STUN_ATTR_TURN_LOGGING_ID();

MCNAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_ALLOCATION_MISMATCH();

MCNAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_BAD_REQUEST();

MCNAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_FORBIDDEN();

MCNAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_ROLE_CONFLICT();

MCNAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_SERVER_ERROR();

MCNAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_STALE_NONCE();

MCNAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_TRY_ALTERNATE_SERVER();

MCNAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_UNAUTHORIZED();

MCNAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_UNKNOWN_ATTRIBUTE();

MCNAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_UNSUPPORTED_PROTOCOL();

MCNAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_WRONG_CREDENTIALS();

MCNAPI int const& STUN_KEEPALIVE_INTERVAL();

MCNAPI ::std::add_lvalue_reference_t<char const[]> TCPTYPE_ACTIVE_STR();

MCNAPI ::std::add_lvalue_reference_t<char const[]> TCPTYPE_PASSIVE_STR();

MCNAPI ::std::add_lvalue_reference_t<char const[]> TCPTYPE_SIMOPEN_STR();

MCNAPI ::std::add_lvalue_reference_t<char const[]> TCP_PROTOCOL_NAME();

MCNAPI ::std::add_lvalue_reference_t<char const[]> TLS_PROTOCOL_NAME();

MCNAPI ::std::add_lvalue_reference_t<char const[]> UDP_PROTOCOL_NAME();

MCNAPI ::webrtc::ClockInterface*& g_clock();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kApplicationSpecificBandwidth();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kAv1CodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kAv1FmtpLevelIdx();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kAv1FmtpProfile();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kAv1FmtpTier();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kBweTypeHistogram();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCnCodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamAssociatedCodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamAssociatedPayloadType();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamCbr();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamMaxAverageBitrate();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamMaxBitrate();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamMaxPTime();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamMaxPlaybackRate();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamMaxQuantization();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamMinBitrate();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamMinPTime();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamNotInNameValueFormat();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamPTime();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamPerLayerPictureLossIndication();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamRtxTime();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamSPropStereo();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamStartBitrate();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamStereo();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamUseDtx();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamUseInbandFec();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kComfortNoiseCodecName();

MCNAPI uint64 const& kConferenceDefaultNumTemporalLayers();

MCNAPI uint64 const& kConferenceMaxNumSpatialLayers();

MCNAPI uint64 const& kConferenceMaxNumTemporalLayers();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCsAeadAes128Gcm();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCsAeadAes256Gcm();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCsAesCm128HmacSha1_32();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCsAesCm128HmacSha1_80();

MCNAPI double const& kDefaultBitratePriority();

MCNAPI int const& kDefaultVideoMaxFramerate();

MCNAPI int const& kDefaultVideoMaxQpAv1();

MCNAPI int const& kDefaultVideoMaxQpH26x();

MCNAPI int const& kDefaultVideoMaxQpVpx();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kDtmfCodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kFecFrSsrcGroupSemantics();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kFecSsrcGroupSemantics();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kFidSsrcGroupSemantics();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kFlexfecCodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kFlexfecFmtpRepairWindow();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kG722CodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kH264CodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kH264FmtpLevelAsymmetryAllowed();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kH264FmtpPacketizationMode();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kH264FmtpProfileLevelId();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kH264FmtpSpropParameterSets();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kH264FmtpSpsPpsIdrInKeyframe();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kH264ProfileLevelConstrainedBaseline();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kH264ProfileLevelConstrainedHigh();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kH265CodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kH265FmtpInteropConstraints();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kH265FmtpLevelId();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kH265FmtpProfileCompatibilityIndicator();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kH265FmtpProfileId();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kH265FmtpProfileSpace();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kH265FmtpTierFlag();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kH265FmtpTxMode();

MCNAPI float const& kHighSystemCpuThreshold();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kL16CodecName();

MCNAPI float const& kLowSystemCpuThreshold();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kMediaProtocolAvpf();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kMediaProtocolDtlsSavpf();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kMediaProtocolDtlsSctp();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kMediaProtocolSavpf();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kMediaProtocolSctp();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kMediaProtocolTcpDtlsSctp();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kMediaProtocolUdpDtlsSctp();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kMediaTypeAudio();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kMediaTypeData();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kMediaTypeVideo();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kOpusCodecName();

MCNAPI int const& kOpusDefaultMaxPTime();

MCNAPI int const& kOpusDefaultMaxPlaybackRate();

MCNAPI int const& kOpusDefaultMinPTime();

MCNAPI int const& kOpusDefaultPTime();

MCNAPI int const& kOpusDefaultSPropStereo();

MCNAPI int const& kOpusDefaultStereo();

MCNAPI int const& kOpusDefaultUseDtx();

MCNAPI int const& kOpusDefaultUseInbandFec();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kPacketizationParamRaw();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kParamValueEmpty();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kParamValueTrue();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kPcmaCodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kPcmuCodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kPemTypeCertificate();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kPemTypeEcPrivateKey();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kPemTypeRsaPrivateKey();

MCNAPI int const& kPreferredMaxPTime();

MCNAPI int const& kPreferredMinPTime();

MCNAPI int const& kPreferredSPropStereo();

MCNAPI int const& kPreferredStereo();

MCNAPI int const& kPreferredUseInbandFec();

MCNAPI float const& kProcessCpuThreshold();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kPublicIPv4Host();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kPublicIPv6Host();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kRedCodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kRtcpFbCcmParamFir();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kRtcpFbNackParamPli();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kRtcpFbParamCcm();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kRtcpFbParamLntf();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kRtcpFbParamNack();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kRtcpFbParamRemb();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kRtcpFbParamRrtr();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kRtcpFbParamTransportCc();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kRtxCodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kSimSsrcGroupSemantics();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kTransportSpecificBandwidth();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kUlpfecCodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kVP9FmtpProfileId();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kVP9ProfileId();

MCNAPI int const& kVideoCodecClockrate();

MCNAPI int const& kVideoMtu();

MCNAPI int const& kVideoRtpRecvBufferSize();

MCNAPI int const& kVideoRtpSendBufferSize();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kVp8CodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kVp9CodecName();
// NOLINTEND

} // namespace webrtc
