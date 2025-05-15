#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/Call.h"
#include "mc/external/webrtc/DataChannelInterface.h"
#include "mc/external/webrtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct TransportStats; }
namespace webrtc { class PeerConnectionInternal; }
namespace webrtc { class RTCStatsCollectorCallback; }
namespace webrtc { class RTCStatsReport; }
namespace webrtc { class RtpReceiverInternal; }
namespace webrtc { class RtpSenderInternal; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCStatsCollector {
public:
    // RTCStatsCollector inner types declare
    // clang-format off
    struct CertificateStatsPair;
    struct InternalRecord;
    class RequestInfo;
    struct RtpTransceiverStatsInfo;
    // clang-format on

    // RTCStatsCollector inner types define
    struct CertificateStatsPair {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ::webrtc::RTCStatsCollector::CertificateStatsPair Copy() const;

        MCNAPI ~CertificateStatsPair();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct InternalRecord {
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI ~InternalRecord();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    class RequestInfo {
    public:
        // RequestInfo inner types define
        enum class FilterMode : uint {};

    public:
        // prevent constructor by default
        RequestInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit RequestInfo(::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

        MCNAPI
        RequestInfo(::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

        MCNAPI
        RequestInfo(::webrtc::scoped_refptr<::webrtc::RtpSenderInternal>, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

        MCNAPI
        RequestInfo(::webrtc::RTCStatsCollector::RequestInfo::FilterMode, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>, ::webrtc::scoped_refptr<::webrtc::RtpSenderInternal>, ::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>);

        MCNAPI ~RequestInfo();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

        MCNAPI void*
            $ctor(::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

        MCNAPI void*
            $ctor(::webrtc::scoped_refptr<::webrtc::RtpSenderInternal>, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

        MCNAPI void*
            $ctor(::webrtc::RTCStatsCollector::RequestInfo::FilterMode, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>, ::webrtc::scoped_refptr<::webrtc::RtpSenderInternal>, ::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

    struct RtpTransceiverStatsInfo {
    public:
        // prevent constructor by default
        RtpTransceiverStatsInfo& operator=(RtpTransceiverStatsInfo const&);
        RtpTransceiverStatsInfo();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI RtpTransceiverStatsInfo(::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo const&);

        MCNAPI RtpTransceiverStatsInfo(::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo&&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo const&);

        MCNAPI void* $ctor(::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo&&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    RTCStatsCollector();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ClearCachedStatsReport();

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RTCStatsReport>
    CreateReportFilteredBySelector(bool, ::webrtc::scoped_refptr<::webrtc::RTCStatsReport const>, ::webrtc::scoped_refptr<::webrtc::RtpSenderInternal>, ::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>);

    MCNAPI void
        DeliverCachedReport(::webrtc::scoped_refptr<::webrtc::RTCStatsReport const>, ::std::vector<::webrtc::RTCStatsCollector::RequestInfo>);

    MCNAPI void GetStatsReport(::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

    MCNAPI void
        GetStatsReport(::webrtc::scoped_refptr<::webrtc::RtpSenderInternal>, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

    MCNAPI void
        GetStatsReport(::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

    MCNAPI void GetStatsReportInternal(::webrtc::RTCStatsCollector::RequestInfo);

    MCNAPI void MergeNetworkReport_s();

    MCNAPI void OnSctpDataChannelStateChanged(int, ::webrtc::DataChannelInterface::DataState);

    MCNAPI void PrepareTransceiverStatsInfosAndCallStats_s_w_n();

    MCNAPI ::std::map<::std::string, ::webrtc::RTCStatsCollector::CertificateStatsPair>
    PrepareTransportCertificateStats_n(::std::map<::std::string, ::cricket::TransportStats> const&);

    MCNAPI void ProduceAudioPlayoutStats_s(::webrtc::Timestamp, ::webrtc::RTCStatsReport*) const;

    MCNAPI void
    ProduceAudioRTPStreamStats_n(::webrtc::Timestamp, ::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo const&, ::webrtc::RTCStatsReport*)
        const;

    MCNAPI void
    ProduceCertificateStats_n(::webrtc::Timestamp, ::std::map<::std::string, ::webrtc::RTCStatsCollector::CertificateStatsPair> const&, ::webrtc::RTCStatsReport*)
        const;

    MCNAPI void ProduceDataChannelStats_n(::webrtc::Timestamp, ::webrtc::RTCStatsReport*) const;

    MCNAPI void
    ProduceIceCandidateAndPairStats_n(::webrtc::Timestamp, ::std::map<::std::string, ::cricket::TransportStats> const&, ::webrtc::Call::Stats const&, ::webrtc::RTCStatsReport*)
        const;

    MCNAPI void ProduceMediaSourceStats_s(::webrtc::Timestamp, ::webrtc::RTCStatsReport*) const;

    MCNAPI void ProducePartialResultsOnNetworkThread(::webrtc::Timestamp, ::std::optional<::std::string>);

    MCNAPI void ProducePartialResultsOnSignalingThread(::webrtc::Timestamp);

    MCNAPI void ProducePeerConnectionStats_s(::webrtc::Timestamp, ::webrtc::RTCStatsReport*) const;

    MCNAPI void
    ProduceRTPStreamStats_n(::webrtc::Timestamp, ::std::vector<::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo> const&, ::webrtc::RTCStatsReport*)
        const;

    MCNAPI void
    ProduceTransportStats_n(::webrtc::Timestamp, ::std::map<::std::string, ::cricket::TransportStats> const&, ::std::map<::std::string, ::webrtc::RTCStatsCollector::CertificateStatsPair> const&, ::webrtc::RTCStatsReport*)
        const;

    MCNAPI void
    ProduceVideoRTPStreamStats_n(::webrtc::Timestamp, ::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo const&, ::webrtc::RTCStatsReport*)
        const;

    MCNAPI RTCStatsCollector(::webrtc::PeerConnectionInternal*, int64);

    MCNAPI void WaitForPendingRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::RTCStatsCollector> Create(::webrtc::PeerConnectionInternal*, int64);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::PeerConnectionInternal*, int64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
