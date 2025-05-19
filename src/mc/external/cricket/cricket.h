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
MCNAPI ::webrtc::RTCError
CheckRtpParametersInvalidModificationAndValues(::webrtc::RtpParameters const&, ::webrtc::RtpParameters const&);

MCNAPI ::webrtc::RTCError CheckRtpParametersInvalidModificationAndValues(
    ::webrtc::RtpParameters const&,
    ::webrtc::RtpParameters const&,
    ::rtc::ArrayView<::cricket::Codec>,
    ::std::optional<::cricket::Codec>
);

MCNAPI ::webrtc::RTCError CheckRtpParametersValues(
    ::webrtc::RtpParameters const&,
    ::rtc::ArrayView<::cricket::Codec>,
    ::std::optional<::cricket::Codec>
);

MCNAPI ::webrtc::RTCError CheckScalabilityModeValues(
    ::webrtc::RtpParameters const&,
    ::rtc::ArrayView<::cricket::Codec>,
    ::std::optional<::cricket::Codec>
);

MCNAPI bool ComputeStunCredentialHash(::std::string const&, ::std::string const&, ::std::string const&, ::std::string*);

MCNAPI bool ConnectionRoleToString(::cricket::ConnectionRole const&, ::std::string*);

MCNAPI ::cricket::Codec CreateAudioCodec(int, ::std::string const&, int, uint64);

MCNAPI ::cricket::Codec CreateVideoCodec(int, ::std::string const&);

MCNAPI ::std::vector<::cricket::Codec const*>
FindAllMatchingCodecs(::std::vector<::cricket::Codec> const&, ::cricket::Codec const&);

MCNAPI ::cricket::Codec const* FindCodecById(::std::vector<::cricket::Codec> const&, int);

MCNAPI ::cricket::ContentInfo const*
FindContentInfoByName(::std::vector<::cricket::ContentInfo> const&, ::std::string const&);

MCNAPI ::std::vector<::webrtc::RtpExtension>
GetDefaultEnabledRtpHeaderExtensions(::cricket::RtpHeaderExtensionQueryInterface const&);

MCNAPI ::cricket::ContentInfo const* GetFirstAudioContent(::cricket::SessionDescription const*);

MCNAPI ::cricket::AudioContentDescription const* GetFirstAudioContentDescription(::cricket::SessionDescription const*);

MCNAPI ::cricket::ContentInfo const* GetFirstDataContent(::std::vector<::cricket::ContentInfo> const&);

MCNAPI ::cricket::ContentInfo const* GetFirstDataContent(::cricket::SessionDescription const*);

MCNAPI ::cricket::ContentInfo const*
GetFirstMediaContent(::std::vector<::cricket::ContentInfo> const&, ::cricket::MediaType);

MCNAPI ::cricket::ContentInfo const* GetFirstMediaContent(::cricket::SessionDescription const*, ::cricket::MediaType);

MCNAPI ::cricket::MediaContentDescription const*
GetFirstMediaContentDescription(::cricket::SessionDescription const*, ::cricket::MediaType);

MCNAPI ::cricket::SctpDataContentDescription const*
GetFirstSctpDataContentDescription(::cricket::SessionDescription const*);

MCNAPI ::cricket::ContentInfo const* GetFirstVideoContent(::cricket::SessionDescription const*);

MCNAPI ::cricket::VideoContentDescription const* GetFirstVideoContentDescription(::cricket::SessionDescription const*);

MCNAPI int GetProtocolOverhead(::std::string_view);

MCNAPI bool GetRtcpType(void const*, uint64, int*);

MCNAPI int GetStunErrorResponseType(int);

MCNAPI int GetStunSuccessResponseType(int);

MCNAPI int GreatestCommonDivisor(int, int);

MCNAPI bool IceCredentialsChanged(::std::string_view, ::std::string_view, ::std::string_view, ::std::string_view);

MCNAPI ::std::string IceSwitchReasonToString(::cricket::IceSwitchReason);

MCNAPI ::cricket::RtpPacketType InferRtpPacketType(::rtc::ArrayView<uchar const>);

MCNAPI bool IsAudioContent(::cricket::ContentInfo const*);

MCNAPI bool IsDtlsRtp(::std::string_view);

MCNAPI bool IsDtlsSctp(::std::string_view);

MCNAPI bool IsPlainRtp(::std::string_view);

MCNAPI bool IsPlainSctp(::std::string_view);

MCNAPI bool IsRtpProtocol(::std::string_view);

MCNAPI bool IsSctpProtocol(::std::string_view);

MCNAPI bool IsStunErrorResponseType(int);

MCNAPI bool IsStunIndicationType(int);

MCNAPI bool IsStunRequestType(int);

MCNAPI bool IsStunSuccessResponseType(int);

MCNAPI bool IsUnsupportedContent(::cricket::ContentInfo const*);

MCNAPI bool IsValidRtpPacketSize(::cricket::RtpPacketType, uint64);

MCNAPI bool IsValidRtpPayloadType(int);

MCNAPI bool IsVideoContent(::cricket::ContentInfo const*);

MCNAPI int LeastCommonMultiple(int, int);

MCNAPI void MediaChannelParametersFromMediaDescription(
    ::cricket::MediaContentDescription const*,
    ::std::vector<::webrtc::RtpExtension> const&,
    bool,
    ::cricket::MediaChannelParameters*
);

MCNAPI ::std::string MediaTypeToString(::cricket::MediaType);

MCNAPI void MergeCodecsFromDescription(
    ::std::vector<::cricket::ContentInfo const*> const&,
    ::std::vector<::cricket::Codec>*,
    ::std::vector<::cricket::Codec>*,
    ::cricket::UsedPayloadTypes*
);

MCNAPI char const* ProtoToString(::cricket::ProtocolType);

MCNAPI ::std::string_view RtpPacketTypeToString(::cricket::RtpPacketType);

MCNAPI void RtpSendParametersFromMediaDescription(
    ::cricket::MediaContentDescription const*,
    ::webrtc::RtpExtension::Filter,
    ::cricket::SenderParameters*
);

MCNAPI ::std::optional<::cricket::ConnectionRole> StringToConnectionRole(::std::string_view);

MCNAPI ::std::optional<::cricket::ProtocolType> StringToProto(::std::string_view);

MCNAPI ::std::string StunMethodToString(int);

MCNAPI ::webrtc::RTCError VerifyCandidate(::cricket::Candidate const&);

MCNAPI ::webrtc::RTCError VerifyCandidates(::std::vector<::cricket::Candidate> const&);
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

MCNAPI int const& CONNECTION_WRITE_CONNECT_TIMEOUT();

MCNAPI int const& CONNECTION_WRITE_TIMEOUT();

MCNAPI int const& DEAD_CONNECTION_RECEIVE_TIMEOUT();

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

MCNAPI int const& MIN_CONNECTION_LIFETIME();

MCNAPI int const& RECEIVING_SWITCHING_DELAY();

MCNAPI int const& RECEIVING_TIMEOUT();

MCNAPI int const& REGATHER_ON_FAILED_NETWORKS_INTERVAL();

MCNAPI int const& SERVER_NOT_REACHABLE_ERROR();

MCNAPI ::std::add_lvalue_reference_t<char const[]> SSLTCP_PROTOCOL_NAME();

MCNAPI int const& STRONG_AND_STABLE_WRITABLE_CONNECTION_PING_INTERVAL();

MCNAPI int const& STRONG_PING_INTERVAL();

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

MCNAPI ::std::add_lvalue_reference_t<char const[]> TURN_MAGIC_COOKIE_VALUE();

MCNAPI ::std::add_lvalue_reference_t<char const[]> UDP_PROTOCOL_NAME();

MCNAPI int const& WEAK_CONNECTION_RECEIVE_TIMEOUT();

MCNAPI int const& WEAK_OR_STABILIZING_WRITABLE_CONNECTION_PING_INTERVAL();

MCNAPI int const& WEAK_PING_INTERVAL();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kApplicationSpecificBandwidth();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kAv1CodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kAv1FmtpLevelIdx();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kAv1FmtpProfile();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kAv1FmtpTier();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCnCodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamAssociatedCodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kCodecParamAssociatedPayloadType();

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

MCNAPI int const& kDefaultVideoMaxFramerate();

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

MCNAPI ::std::add_lvalue_reference_t<char const[]> kIlbcCodecName();

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

MCNAPI int const& kPreferredMaxPTime();

MCNAPI int const& kPreferredMinPTime();

MCNAPI int const& kPreferredSPropStereo();

MCNAPI int const& kPreferredStereo();

MCNAPI int const& kPreferredUseInbandFec();

MCNAPI float const& kProcessCpuThreshold();

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

MCNAPI ::std::add_lvalue_reference_t<char const[]> kVP9ProfileId();

MCNAPI int const& kVideoCodecClockrate();

MCNAPI int const& kVideoMtu();

MCNAPI int const& kVideoRtpRecvBufferSize();

MCNAPI int const& kVideoRtpSendBufferSize();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kVp8CodecName();

MCNAPI ::std::add_lvalue_reference_t<char const[]> kVp9CodecName();
// NOLINTEND

} // namespace cricket
