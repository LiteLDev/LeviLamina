#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cricket/ConnectionRole.h"
#include "mc/external/cricket/IceSwitchReason.h"
#include "mc/external/cricket/MediaType.h"
#include "mc/external/cricket/ProtocolType.h"
#include "mc/external/cricket/RtpPacketType.h"
#include "mc/external/webrtc/RtpExtension.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class AudioContentDescription; }
namespace cricket { class Candidate; }
namespace cricket { class ContentInfo; }
namespace cricket { class MediaContentDescription; }
namespace cricket { class RtpHeaderExtensionQueryInterface; }
namespace cricket { class SctpDataContentDescription; }
namespace cricket { class SessionDescription; }
namespace cricket { class UsedPayloadTypes; }
namespace cricket { class VideoContentDescription; }
namespace cricket { struct Codec; }
namespace cricket { struct MediaChannelParameters; }
namespace cricket { struct SenderParameters; }
namespace webrtc { class RTCError; }
namespace webrtc { struct RtpExtension; }
namespace webrtc { struct RtpParameters; }
// clang-format on

namespace cricket {
// functions
// NOLINTBEGIN
MCAPI ::webrtc::RTCError
CheckRtpParametersInvalidModificationAndValues(::webrtc::RtpParameters const&, ::webrtc::RtpParameters const&);

MCAPI ::webrtc::RTCError
CheckRtpParametersInvalidModificationAndValues(::webrtc::RtpParameters const&, ::webrtc::RtpParameters const&, ::rtc::ArrayView<::cricket::Codec>, ::std::optional<::cricket::Codec>);

MCAPI ::webrtc::RTCError
CheckRtpParametersValues(::webrtc::RtpParameters const&, ::rtc::ArrayView<::cricket::Codec>, ::std::optional<::cricket::Codec>);

MCAPI ::webrtc::RTCError
CheckScalabilityModeValues(::webrtc::RtpParameters const&, ::rtc::ArrayView<::cricket::Codec>, ::std::optional<::cricket::Codec>);

MCAPI bool ComputeStunCredentialHash(::std::string const&, ::std::string const&, ::std::string const&, ::std::string*);

MCAPI bool ConnectionRoleToString(::cricket::ConnectionRole const&, ::std::string*);

MCAPI ::cricket::Codec CreateAudioCodec(int, ::std::string const&, int, uint64);

MCAPI ::cricket::Codec CreateVideoCodec(int, ::std::string const&);

MCAPI ::std::vector<::cricket::Codec const*>
FindAllMatchingCodecs(::std::vector<::cricket::Codec> const&, ::cricket::Codec const&);

MCAPI ::cricket::Codec const* FindCodecById(::std::vector<::cricket::Codec> const&, int);

MCAPI ::cricket::ContentInfo const*
FindContentInfoByName(::std::vector<::cricket::ContentInfo> const&, ::std::string const&);

MCAPI ::std::vector<::webrtc::RtpExtension>
GetDefaultEnabledRtpHeaderExtensions(::cricket::RtpHeaderExtensionQueryInterface const&);

MCAPI ::cricket::ContentInfo const* GetFirstAudioContent(::cricket::SessionDescription const*);

MCAPI ::cricket::AudioContentDescription const* GetFirstAudioContentDescription(::cricket::SessionDescription const*);

MCAPI ::cricket::ContentInfo const* GetFirstDataContent(::std::vector<::cricket::ContentInfo> const&);

MCAPI ::cricket::ContentInfo const* GetFirstDataContent(::cricket::SessionDescription const*);

MCAPI ::cricket::ContentInfo const*
GetFirstMediaContent(::std::vector<::cricket::ContentInfo> const&, ::cricket::MediaType);

MCAPI ::cricket::ContentInfo const* GetFirstMediaContent(::cricket::SessionDescription const*, ::cricket::MediaType);

MCAPI ::cricket::MediaContentDescription const*
GetFirstMediaContentDescription(::cricket::SessionDescription const*, ::cricket::MediaType);

MCAPI ::cricket::SctpDataContentDescription const*
GetFirstSctpDataContentDescription(::cricket::SessionDescription const*);

MCAPI ::cricket::ContentInfo const* GetFirstVideoContent(::cricket::SessionDescription const*);

MCAPI ::cricket::VideoContentDescription const* GetFirstVideoContentDescription(::cricket::SessionDescription const*);

MCAPI int GetProtocolOverhead(::std::string_view);

MCAPI bool GetRtcpType(void const*, uint64, int*);

MCAPI int GetStunErrorResponseType(int);

MCAPI int GetStunSuccessResponseType(int);

MCAPI int GreatestCommonDivisor(int, int);

MCAPI bool IceCredentialsChanged(::std::string_view, ::std::string_view, ::std::string_view, ::std::string_view);

MCAPI ::std::string IceSwitchReasonToString(::cricket::IceSwitchReason);

MCAPI ::cricket::RtpPacketType InferRtpPacketType(::rtc::ArrayView<uchar const>);

MCAPI bool IsAudioContent(::cricket::ContentInfo const*);

MCAPI bool IsDtlsRtp(::std::string_view);

MCAPI bool IsDtlsSctp(::std::string_view);

MCAPI bool IsPlainRtp(::std::string_view);

MCAPI bool IsPlainSctp(::std::string_view);

MCAPI bool IsRtpProtocol(::std::string_view);

MCAPI bool IsSctpProtocol(::std::string_view);

MCAPI bool IsStunErrorResponseType(int);

MCAPI bool IsStunIndicationType(int);

MCAPI bool IsStunRequestType(int);

MCAPI bool IsStunSuccessResponseType(int);

MCAPI bool IsUnsupportedContent(::cricket::ContentInfo const*);

MCAPI bool IsValidRtpPacketSize(::cricket::RtpPacketType, uint64);

MCAPI bool IsValidRtpPayloadType(int);

MCAPI bool IsVideoContent(::cricket::ContentInfo const*);

MCAPI int LeastCommonMultiple(int, int);

MCAPI void
MediaChannelParametersFromMediaDescription(::cricket::MediaContentDescription const*, ::std::vector<::webrtc::RtpExtension> const&, bool, ::cricket::MediaChannelParameters*);

MCAPI ::std::string MediaTypeToString(::cricket::MediaType);

MCAPI void
MergeCodecsFromDescription(::std::vector<::cricket::ContentInfo const*> const&, ::std::vector<::cricket::Codec>*, ::std::vector<::cricket::Codec>*, ::cricket::UsedPayloadTypes*);

MCAPI char const* ProtoToString(::cricket::ProtocolType);

MCAPI ::std::string_view RtpPacketTypeToString(::cricket::RtpPacketType);

MCAPI void
RtpSendParametersFromMediaDescription(::cricket::MediaContentDescription const*, ::webrtc::RtpExtension::Filter, ::cricket::SenderParameters*);

MCAPI ::std::optional<::cricket::ConnectionRole> StringToConnectionRole(::std::string_view);

MCAPI ::std::optional<::cricket::ProtocolType> StringToProto(::std::string_view);

MCAPI ::std::string StunMethodToString(int);

MCAPI ::webrtc::RTCError VerifyCandidate(::cricket::Candidate const&);

MCAPI ::webrtc::RTCError VerifyCandidates(::std::vector<::cricket::Candidate> const&);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCAPI int const& BACKUP_CONNECTION_PING_INTERVAL();

MCAPI ::std::add_lvalue_reference_t<char const[]> CN_AUDIO();

MCAPI ::std::add_lvalue_reference_t<char const[]> CN_DATA();

MCAPI ::std::add_lvalue_reference_t<char const[]> CN_OTHER();

MCAPI ::std::add_lvalue_reference_t<char const[]> CN_VIDEO();

MCAPI ::std::add_lvalue_reference_t<char const[]> CONNECTIONROLE_ACTIVE_STR();

MCAPI ::std::add_lvalue_reference_t<char const[]> CONNECTIONROLE_ACTPASS_STR();

MCAPI ::std::add_lvalue_reference_t<char const[]> CONNECTIONROLE_HOLDCONN_STR();

MCAPI ::std::add_lvalue_reference_t<char const[]> CONNECTIONROLE_PASSIVE_STR();

MCAPI int const& CONNECTION_RESPONSE_TIMEOUT();

MCAPI uint const& CONNECTION_WRITE_CONNECT_FAILURES();

MCAPI int const& CONNECTION_WRITE_CONNECT_TIMEOUT();

MCAPI int const& CONNECTION_WRITE_TIMEOUT();

MCAPI int const& DEAD_CONNECTION_RECEIVE_TIMEOUT();

MCAPI int const& DISCARD_PORT();

MCAPI ::std::add_lvalue_reference_t<char const[]> GROUP_TYPE_BUNDLE();

MCAPI int const& ICE_CANDIDATE_COMPONENT_DEFAULT();

MCAPI int const& ICE_CANDIDATE_COMPONENT_RTCP();

MCAPI int const& ICE_CANDIDATE_COMPONENT_RTP();

MCAPI int const& ICE_PWD_LENGTH();

MCAPI uint64 const& ICE_PWD_MAX_LENGTH();

MCAPI uint64 const& ICE_PWD_MIN_LENGTH();

MCAPI int const& ICE_UFRAG_LENGTH();

MCAPI uint64 const& ICE_UFRAG_MAX_LENGTH();

MCAPI uint64 const& ICE_UFRAG_MIN_LENGTH();

MCAPI ::std::add_lvalue_reference_t<char const[]> LOCAL_TLD();

MCAPI int const& MIN_CHECK_RECEIVING_INTERVAL();

MCAPI int const& MIN_CONNECTION_LIFETIME();

MCAPI int const& RECEIVING_SWITCHING_DELAY();

MCAPI int const& RECEIVING_TIMEOUT();

MCAPI int const& REGATHER_ON_FAILED_NETWORKS_INTERVAL();

MCAPI int const& SERVER_NOT_REACHABLE_ERROR();

MCAPI ::std::add_lvalue_reference_t<char const[]> SSLTCP_PROTOCOL_NAME();

MCAPI int const& STRONG_AND_STABLE_WRITABLE_CONNECTION_PING_INTERVAL();

MCAPI int const& STRONG_PING_INTERVAL();

MCAPI int const& STUN_ATTR_TURN_LOGGING_ID();

MCAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_ALLOCATION_MISMATCH();

MCAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_BAD_REQUEST();

MCAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_FORBIDDEN();

MCAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_ROLE_CONFLICT();

MCAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_SERVER_ERROR();

MCAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_STALE_NONCE();

MCAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_TRY_ALTERNATE_SERVER();

MCAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_UNAUTHORIZED();

MCAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_UNKNOWN_ATTRIBUTE();

MCAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_UNSUPPORTED_PROTOCOL();

MCAPI ::std::add_lvalue_reference_t<char const[]> STUN_ERROR_REASON_WRONG_CREDENTIALS();

MCAPI int const& STUN_KEEPALIVE_INTERVAL();

MCAPI ::std::add_lvalue_reference_t<char const[]> TCPTYPE_ACTIVE_STR();

MCAPI ::std::add_lvalue_reference_t<char const[]> TCPTYPE_PASSIVE_STR();

MCAPI ::std::add_lvalue_reference_t<char const[]> TCPTYPE_SIMOPEN_STR();

MCAPI ::std::add_lvalue_reference_t<char const[]> TCP_PROTOCOL_NAME();

MCAPI ::std::add_lvalue_reference_t<char const[]> TLS_PROTOCOL_NAME();

MCAPI ::std::add_lvalue_reference_t<char const[]> TURN_MAGIC_COOKIE_VALUE();

MCAPI ::std::add_lvalue_reference_t<char const[]> UDP_PROTOCOL_NAME();

MCAPI int const& WEAK_CONNECTION_RECEIVE_TIMEOUT();

MCAPI int const& WEAK_OR_STABILIZING_WRITABLE_CONNECTION_PING_INTERVAL();

MCAPI int const& WEAK_PING_INTERVAL();

MCAPI ::std::add_lvalue_reference_t<char const[]> kApplicationSpecificBandwidth();

MCAPI ::std::add_lvalue_reference_t<char const[]> kAv1CodecName();

MCAPI ::std::add_lvalue_reference_t<char const[]> kAv1FmtpLevelIdx();

MCAPI ::std::add_lvalue_reference_t<char const[]> kAv1FmtpProfile();

MCAPI ::std::add_lvalue_reference_t<char const[]> kAv1FmtpTier();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCnCodecName();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamAssociatedCodecName();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamAssociatedPayloadType();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamMaxAverageBitrate();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamMaxBitrate();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamMaxPTime();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamMaxPlaybackRate();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamMaxQuantization();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamMinBitrate();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamMinPTime();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamNotInNameValueFormat();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamPTime();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamPerLayerPictureLossIndication();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamRtxTime();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamSPropStereo();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamStartBitrate();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamStereo();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamUseDtx();

MCAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamUseInbandFec();

MCAPI ::std::add_lvalue_reference_t<char const[]> kComfortNoiseCodecName();

MCAPI uint64 const& kConferenceDefaultNumTemporalLayers();

MCAPI uint64 const& kConferenceMaxNumSpatialLayers();

MCAPI uint64 const& kConferenceMaxNumTemporalLayers();

MCAPI int const& kDefaultVideoMaxFramerate();

MCAPI int const& kDefaultVideoMaxQpH26x();

MCAPI int const& kDefaultVideoMaxQpVpx();

MCAPI ::std::add_lvalue_reference_t<char const[]> kDtmfCodecName();

MCAPI ::std::add_lvalue_reference_t<char const[]> kFecFrSsrcGroupSemantics();

MCAPI ::std::add_lvalue_reference_t<char const[]> kFecSsrcGroupSemantics();

MCAPI ::std::add_lvalue_reference_t<char const[]> kFidSsrcGroupSemantics();

MCAPI ::std::add_lvalue_reference_t<char const[]> kFlexfecCodecName();

MCAPI ::std::add_lvalue_reference_t<char const[]> kFlexfecFmtpRepairWindow();

MCAPI ::std::add_lvalue_reference_t<char const[]> kG722CodecName();

MCAPI ::std::add_lvalue_reference_t<char const[]> kH264CodecName();

MCAPI ::std::add_lvalue_reference_t<char const[]> kH264FmtpLevelAsymmetryAllowed();

MCAPI ::std::add_lvalue_reference_t<char const[]> kH264FmtpPacketizationMode();

MCAPI ::std::add_lvalue_reference_t<char const[]> kH264FmtpProfileLevelId();

MCAPI ::std::add_lvalue_reference_t<char const[]> kH264FmtpSpropParameterSets();

MCAPI ::std::add_lvalue_reference_t<char const[]> kH264FmtpSpsPpsIdrInKeyframe();

MCAPI ::std::add_lvalue_reference_t<char const[]> kH264ProfileLevelConstrainedBaseline();

MCAPI ::std::add_lvalue_reference_t<char const[]> kH264ProfileLevelConstrainedHigh();

MCAPI ::std::add_lvalue_reference_t<char const[]> kH265CodecName();

MCAPI ::std::add_lvalue_reference_t<char const[]> kH265FmtpInteropConstraints();

MCAPI ::std::add_lvalue_reference_t<char const[]> kH265FmtpLevelId();

MCAPI ::std::add_lvalue_reference_t<char const[]> kH265FmtpProfileCompatibilityIndicator();

MCAPI ::std::add_lvalue_reference_t<char const[]> kH265FmtpProfileId();

MCAPI ::std::add_lvalue_reference_t<char const[]> kH265FmtpProfileSpace();

MCAPI ::std::add_lvalue_reference_t<char const[]> kH265FmtpTierFlag();

MCAPI ::std::add_lvalue_reference_t<char const[]> kH265FmtpTxMode();

MCAPI float const& kHighSystemCpuThreshold();

MCAPI ::std::add_lvalue_reference_t<char const[]> kIlbcCodecName();

MCAPI ::std::add_lvalue_reference_t<char const[]> kL16CodecName();

MCAPI float const& kLowSystemCpuThreshold();

MCAPI ::std::add_lvalue_reference_t<char const[]> kMediaProtocolAvpf();

MCAPI ::std::add_lvalue_reference_t<char const[]> kMediaProtocolDtlsSavpf();

MCAPI ::std::add_lvalue_reference_t<char const[]> kMediaProtocolDtlsSctp();

MCAPI ::std::add_lvalue_reference_t<char const[]> kMediaProtocolSavpf();

MCAPI ::std::add_lvalue_reference_t<char const[]> kMediaProtocolSctp();

MCAPI ::std::add_lvalue_reference_t<char const[]> kMediaProtocolTcpDtlsSctp();

MCAPI ::std::add_lvalue_reference_t<char const[]> kMediaProtocolUdpDtlsSctp();

MCAPI ::std::add_lvalue_reference_t<char const[]> kMediaTypeAudio();

MCAPI ::std::add_lvalue_reference_t<char const[]> kMediaTypeData();

MCAPI ::std::add_lvalue_reference_t<char const[]> kMediaTypeVideo();

MCAPI ::std::add_lvalue_reference_t<char const[]> kOpusCodecName();

MCAPI int const& kOpusDefaultMaxPTime();

MCAPI int const& kOpusDefaultMaxPlaybackRate();

MCAPI int const& kOpusDefaultMinPTime();

MCAPI int const& kOpusDefaultPTime();

MCAPI int const& kOpusDefaultSPropStereo();

MCAPI int const& kOpusDefaultStereo();

MCAPI int const& kOpusDefaultUseDtx();

MCAPI int const& kOpusDefaultUseInbandFec();

MCAPI ::std::add_lvalue_reference_t<char const[]> kPacketizationParamRaw();

MCAPI ::std::add_lvalue_reference_t<char const[]> kParamValueEmpty();

MCAPI ::std::add_lvalue_reference_t<char const[]> kParamValueTrue();

MCAPI ::std::add_lvalue_reference_t<char const[]> kPcmaCodecName();

MCAPI ::std::add_lvalue_reference_t<char const[]> kPcmuCodecName();

MCAPI int const& kPreferredMaxPTime();

MCAPI int const& kPreferredMinPTime();

MCAPI int const& kPreferredSPropStereo();

MCAPI int const& kPreferredStereo();

MCAPI int const& kPreferredUseInbandFec();

MCAPI float const& kProcessCpuThreshold();

MCAPI ::std::add_lvalue_reference_t<char const[]> kRedCodecName();

MCAPI ::std::add_lvalue_reference_t<char const[]> kRtcpFbCcmParamFir();

MCAPI ::std::add_lvalue_reference_t<char const[]> kRtcpFbNackParamPli();

MCAPI ::std::add_lvalue_reference_t<char const[]> kRtcpFbParamCcm();

MCAPI ::std::add_lvalue_reference_t<char const[]> kRtcpFbParamLntf();

MCAPI ::std::add_lvalue_reference_t<char const[]> kRtcpFbParamNack();

MCAPI ::std::add_lvalue_reference_t<char const[]> kRtcpFbParamRemb();

MCAPI ::std::add_lvalue_reference_t<char const[]> kRtcpFbParamRrtr();

MCAPI ::std::add_lvalue_reference_t<char const[]> kRtcpFbParamTransportCc();

MCAPI ::std::add_lvalue_reference_t<char const[]> kRtxCodecName();

MCAPI ::std::add_lvalue_reference_t<char const[]> kSimSsrcGroupSemantics();

MCAPI ::std::add_lvalue_reference_t<char const[]> kTransportSpecificBandwidth();

MCAPI ::std::add_lvalue_reference_t<char const[]> kUlpfecCodecName();

MCAPI ::std::add_lvalue_reference_t<char const[]> kVP9ProfileId();

MCAPI int const& kVideoCodecClockrate();

MCAPI int const& kVideoMtu();

MCAPI int const& kVideoRtpRecvBufferSize();

MCAPI int const& kVideoRtpSendBufferSize();

MCAPI ::std::add_lvalue_reference_t<char const[]> kVp8CodecName();

MCAPI ::std::add_lvalue_reference_t<char const[]> kVp9CodecName();
// NOLINTEND

} // namespace cricket
