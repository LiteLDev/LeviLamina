#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/RefCountInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

namespace webrtc {

class StatsReport {
public:
    // StatsReport inner types declare
    // clang-format off
    class IdBase;
    struct Value;
    // clang-format on

    // StatsReport inner types define
    enum class Direction : int {
        KSend    = 0,
        KReceive = 1,
    };

    enum class StatsType : int {
        KStatsReportTypeSession            = 0,
        KStatsReportTypeTransport          = 1,
        KStatsReportTypeComponent          = 2,
        KStatsReportTypeCandidatePair      = 3,
        KStatsReportTypeBwe                = 4,
        KStatsReportTypeSsrc               = 5,
        KStatsReportTypeRemoteSsrc         = 6,
        KStatsReportTypeTrack              = 7,
        KStatsReportTypeIceLocalCandidate  = 8,
        KStatsReportTypeIceRemoteCandidate = 9,
        KStatsReportTypeCertificate        = 10,
        KStatsReportTypeDataChannel        = 11,
    };

    enum class StatsValueName : int {
        KStatsValueNameActiveConnection                    = 0,
        KStatsValueNameAecDivergentFilterFraction          = 1,
        KStatsValueNameAudioInputLevel                     = 2,
        KStatsValueNameAudioOutputLevel                    = 3,
        KStatsValueNameBytesReceived                       = 4,
        KStatsValueNameBytesSendBuffer                     = 5,
        KStatsValueNameBytesSent                           = 6,
        KStatsValueNameCurrentRoundTripTime                = 7,
        KStatsValueNameBytesSentPerSecond                  = 8,
        KStatsValueNameCodecImplementationName             = 9,
        KStatsValueNameConcealedSamples                    = 10,
        KStatsValueNameConcealmentEvents                   = 11,
        KStatsValueNameDataChannelId                       = 12,
        KStatsValueNameFramesDecoded                       = 13,
        KStatsValueNameFramesEncoded                       = 14,
        KStatsValueNameJitterBufferDelay                   = 15,
        KStatsValueNameMediaType                           = 16,
        KStatsValueNamePacketsLost                         = 17,
        KStatsValueNamePacketsReceived                     = 18,
        KStatsValueNamePacketsSent                         = 19,
        KStatsValueNameProtocol                            = 20,
        KStatsValueNameQpSum                               = 21,
        KStatsValueNameReceiving                           = 22,
        KStatsValueNameSelectedCandidatePairId             = 23,
        KStatsValueNameSsrc                                = 24,
        KStatsValueNameState                               = 25,
        KStatsValueNameTotalAudioEnergy                    = 26,
        KStatsValueNameTotalSamplesDuration                = 27,
        KStatsValueNameTotalSamplesReceived                = 28,
        KStatsValueNameTransportId                         = 29,
        KStatsValueNameSentPingRequestsTotal               = 30,
        KStatsValueNameSentPingRequestsBeforeFirstResponse = 31,
        KStatsValueNameSentPingResponses                   = 32,
        KStatsValueNameRecvPingRequests                    = 33,
        KStatsValueNameRecvPingResponses                   = 34,
        KStatsValueNameSentStunKeepaliveRequests           = 35,
        KStatsValueNameRecvStunKeepaliveResponses          = 36,
        KStatsValueNameStunKeepaliveRttTotal               = 37,
        KStatsValueNameStunKeepaliveRttSquaredTotal        = 38,
        KStatsValueNameAccelerateRate                      = 39,
        KStatsValueNameActualEncBitrate                    = 40,
        KStatsValueNameAdaptationChanges                   = 41,
        KStatsValueNameAvailableReceiveBandwidth           = 42,
        KStatsValueNameAvailableSendBandwidth              = 43,
        KStatsValueNameAvgEncodeMs                         = 44,
        KStatsValueNameBandwidthLimitedResolution          = 45,
        KStatsValueNameBucketDelay                         = 46,
        KStatsValueNameCaptureStartNtpTimeMs               = 47,
        KStatsValueNameCandidateIPAddress                  = 48,
        KStatsValueNameCandidateNetworkType                = 49,
        KStatsValueNameCandidatePortNumber                 = 50,
        KStatsValueNameCandidatePriority                   = 51,
        KStatsValueNameCandidateTransportType              = 52,
        KStatsValueNameCandidateType                       = 53,
        KStatsValueNameChannelId                           = 54,
        KStatsValueNameCodecName                           = 55,
        KStatsValueNameComponent                           = 56,
        KStatsValueNameContentName                         = 57,
        KStatsValueNameContentType                         = 58,
        KStatsValueNameCpuLimitedResolution                = 59,
        KStatsValueNameCurrentDelayMs                      = 60,
        KStatsValueNameDecodeMs                            = 61,
        KStatsValueNameDecodingCNG                         = 62,
        KStatsValueNameDecodingCTN                         = 63,
        KStatsValueNameDecodingCTSG                        = 64,
        KStatsValueNameDecodingMutedOutput                 = 65,
        KStatsValueNameDecodingNormal                      = 66,
        KStatsValueNameDecodingPLC                         = 67,
        KStatsValueNameDecodingCodecPLC                    = 68,
        KStatsValueNameDecodingPLCCNG                      = 69,
        KStatsValueNameDer                                 = 70,
        KStatsValueNameDtlsCipher                          = 71,
        KStatsValueNameEchoDelayMedian                     = 72,
        KStatsValueNameEchoDelayStdDev                     = 73,
        KStatsValueNameEchoReturnLoss                      = 74,
        KStatsValueNameEchoReturnLossEnhancement           = 75,
        KStatsValueNameEncodeUsagePercent                  = 76,
        KStatsValueNameExpandRate                          = 77,
        KStatsValueNameFingerprint                         = 78,
        KStatsValueNameFingerprintAlgorithm                = 79,
        KStatsValueNameFirsReceived                        = 80,
        KStatsValueNameFirsSent                            = 81,
        KStatsValueNameFirstFrameReceivedToDecodedMs       = 82,
        KStatsValueNameFrameHeightInput                    = 83,
        KStatsValueNameFrameHeightReceived                 = 84,
        KStatsValueNameFrameHeightSent                     = 85,
        KStatsValueNameFrameRateDecoded                    = 86,
        KStatsValueNameFrameRateInput                      = 87,
        KStatsValueNameFrameRateOutput                     = 88,
        KStatsValueNameFrameRateReceived                   = 89,
        KStatsValueNameFrameRateSent                       = 90,
        KStatsValueNameFrameWidthInput                     = 91,
        KStatsValueNameFrameWidthReceived                  = 92,
        KStatsValueNameFrameWidthSent                      = 93,
        KStatsValueNameHasEnteredLowResolution             = 94,
        KStatsValueNameHugeFramesSent                      = 95,
        KStatsValueNameInitiator                           = 96,
        KStatsValueNameInterframeDelayMaxMs                = 97,
        KStatsValueNameIssuerId                            = 98,
        KStatsValueNameJitterBufferMs                      = 99,
        KStatsValueNameJitterReceived                      = 100,
        KStatsValueNameLabel                               = 101,
        KStatsValueNameLocalAddress                        = 102,
        KStatsValueNameLocalCandidateId                    = 103,
        KStatsValueNameLocalCandidateType                  = 104,
        KStatsValueNameLocalCertificateId                  = 105,
        KStatsValueNameMaxDecodeMs                         = 106,
        KStatsValueNameMinPlayoutDelayMs                   = 107,
        KStatsValueNameNacksReceived                       = 108,
        KStatsValueNameNacksSent                           = 109,
        KStatsValueNamePlisReceived                        = 110,
        KStatsValueNamePlisSent                            = 111,
        KStatsValueNamePreemptiveExpandRate                = 112,
        KStatsValueNamePreferredJitterBufferMs             = 113,
        KStatsValueNameRemoteAddress                       = 114,
        KStatsValueNameRemoteCandidateId                   = 115,
        KStatsValueNameRemoteCandidateType                 = 116,
        KStatsValueNameRemoteCertificateId                 = 117,
        KStatsValueNameRenderDelayMs                       = 118,
        KStatsValueNameResidualEchoLikelihood              = 119,
        KStatsValueNameResidualEchoLikelihoodRecentMax     = 120,
        KStatsValueNameAnaBitrateActionCounter             = 121,
        KStatsValueNameAnaChannelActionCounter             = 122,
        KStatsValueNameAnaDtxActionCounter                 = 123,
        KStatsValueNameAnaFecActionCounter                 = 124,
        KStatsValueNameAnaFrameLengthIncreaseCounter       = 125,
        KStatsValueNameAnaFrameLengthDecreaseCounter       = 126,
        KStatsValueNameAnaUplinkPacketLossFraction         = 127,
        KStatsValueNameRetransmitBitrate                   = 128,
        KStatsValueNameRtt                                 = 129,
        KStatsValueNameSecondaryDecodedRate                = 130,
        KStatsValueNameSecondaryDiscardedRate              = 131,
        KStatsValueNameSendPacketsDiscarded                = 132,
        KStatsValueNameSpeechExpandRate                    = 133,
        KStatsValueNameSrtpCipher                          = 134,
        KStatsValueNameTargetDelayMs                       = 135,
        KStatsValueNameTargetEncBitrate                    = 136,
        KStatsValueNameTimingFrameInfo                     = 137,
        KStatsValueNameTrackId                             = 138,
        KStatsValueNameTransmitBitrate                     = 139,
        KStatsValueNameTransportType                       = 140,
        KStatsValueNameWritable                            = 141,
        KStatsValueNameAudioDeviceUnderrunCounter          = 142,
        KStatsValueNameLocalCandidateRelayProtocol         = 143,
    };

    class IdBase : public ::webrtc::RefCountInterface {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk2bda72;
        // NOLINTEND

    public:
        // prevent constructor by default
        IdBase& operator=(IdBase const&);
        IdBase(IdBase const&);
        IdBase();

    public:
        // virtual functions
        // NOLINTBEGIN
        // vIndex: 2
        virtual ~IdBase() /*override*/ = default;

        // vIndex: 3
        virtual bool Equals(::webrtc::StatsReport::IdBase const&) const;

        // vIndex: 4
        virtual ::std::string ToString() const = 0;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit IdBase(::webrtc::StatsReport::StatsType);

        MCNAPI ::webrtc::StatsReport::StatsType type() const;
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::StatsReport::StatsType);
        // NOLINTEND

    public:
        // virtual function thunks
        // NOLINTBEGIN

        // NOLINTEND

    public:
        // vftables
        // NOLINTBEGIN
        MCNAPI static void** $vftable();
        // NOLINTEND
    };

    struct Value {
    public:
        // Value inner types define
        enum class Type : int {
            KInt          = 0,
            KInt64        = 1,
            KFloat        = 2,
            KString       = 3,
            KStaticString = 4,
            KBool         = 5,
            KId           = 6,
        };

        union InternalType {
        public:
            // member variables
            // NOLINTBEGIN
            ::ll::UntypedStorage<4, 8> mUnk6c4087;
            ::ll::UntypedStorage<8, 8> mUnkca219d;
            ::ll::UntypedStorage<4, 8> mUnkfc70c9;
            ::ll::UntypedStorage<1, 8> mUnkf1ece9;
            ::ll::UntypedStorage<8, 8> mUnk570d63;
            ::ll::UntypedStorage<8, 8> mUnkff09e7;
            ::ll::UntypedStorage<8, 8> mUnkb1fba7;
            // NOLINTEND
        };

    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnka23cb1;
        ::ll::UntypedStorage<1, 1> mUnkc75449;
        ::ll::UntypedStorage<4, 4> mUnkfcd004;
        ::ll::UntypedStorage<4, 4> mUnkd88ba6;
        ::ll::UntypedStorage<8, 8> mUnkeac08b;
        // NOLINTEND

    public:
        // prevent constructor by default
        Value& operator=(Value const&);
        Value(Value const&);
        Value();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::std::string ToString() const;

        MCNAPI Value(::webrtc::StatsReport::StatsValueName, bool);

        MCNAPI
        Value(::webrtc::StatsReport::StatsValueName, ::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&);

        MCNAPI Value(::webrtc::StatsReport::StatsValueName, char const*);

        MCNAPI Value(::webrtc::StatsReport::StatsValueName, ::std::string const&);

        MCNAPI Value(::webrtc::StatsReport::StatsValueName, float);

        MCNAPI Value(::webrtc::StatsReport::StatsValueName, int64, ::webrtc::StatsReport::Value::Type);

        MCNAPI bool operator==(::std::string const&) const;

        MCNAPI bool operator==(float) const;

        MCNAPI bool operator==(::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&) const;

        MCNAPI bool operator==(bool) const;

        MCNAPI bool operator==(int64) const;

        MCNAPI bool operator==(char const*) const;

        MCNAPI ::std::string const& string_val() const;

        MCNAPI ~Value();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::StatsReport::StatsValueName, bool);

        MCNAPI void*
        $ctor(::webrtc::StatsReport::StatsValueName, ::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&);

        MCNAPI void* $ctor(::webrtc::StatsReport::StatsValueName, char const*);

        MCNAPI void* $ctor(::webrtc::StatsReport::StatsValueName, ::std::string const&);

        MCNAPI void* $ctor(::webrtc::StatsReport::StatsValueName, float);

        MCNAPI void* $ctor(::webrtc::StatsReport::StatsValueName, int64, ::webrtc::StatsReport::Value::Type);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk848a99;
    ::ll::UntypedStorage<8, 8>  mUnk2e2592;
    ::ll::UntypedStorage<8, 16> mUnkbdfc4c;
    // NOLINTEND

public:
    // prevent constructor by default
    StatsReport& operator=(StatsReport const&);
    StatsReport(StatsReport const&);
    StatsReport();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddBoolean(::webrtc::StatsReport::StatsValueName, bool);

    MCNAPI void AddFloat(::webrtc::StatsReport::StatsValueName, float);

    MCNAPI void
    AddId(::webrtc::StatsReport::StatsValueName, ::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&);

    MCNAPI void AddInt(::webrtc::StatsReport::StatsValueName, int);

    MCNAPI void AddInt64(::webrtc::StatsReport::StatsValueName, int64);

    MCNAPI void AddString(::webrtc::StatsReport::StatsValueName, ::std::string const&);

    MCNAPI void AddString(::webrtc::StatsReport::StatsValueName, char const*);

    MCNAPI ::webrtc::StatsReport::Value const* FindValue(::webrtc::StatsReport::StatsValueName) const;

    MCNAPI explicit StatsReport(::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&);

    MCNAPI ~StatsReport();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> NewBandwidthEstimationId();

    MCNAPI static ::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> NewCandidateId(bool, ::std::string const&);

    MCNAPI static ::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase>
    NewCandidatePairId(::std::string const&, int, int);

    MCNAPI static ::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> NewComponentId(::std::string const&, int);

    MCNAPI static ::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase>
    NewIdWithDirection(::webrtc::StatsReport::StatsType, ::std::string const&, ::webrtc::StatsReport::Direction);

    MCNAPI static ::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase>
    NewTypedId(::webrtc::StatsReport::StatsType, ::std::string const&);

    MCNAPI static ::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase>
    NewTypedIntId(::webrtc::StatsReport::StatsType, int);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::scoped_refptr<::webrtc::StatsReport::IdBase> const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
