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
        MCAPI ::webrtc::RTCStatsCollector::CertificateStatsPair Copy() const;

        MCAPI ~CertificateStatsPair();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct InternalRecord {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~InternalRecord();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    class RequestInfo {
    public:
        // RequestInfo inner types define
        enum class FilterMode : uint {};

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit RequestInfo(::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

        MCAPI
        RequestInfo(::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

        MCAPI
        RequestInfo(::webrtc::scoped_refptr<::webrtc::RtpSenderInternal>, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

        MCAPI
        RequestInfo(::webrtc::RTCStatsCollector::RequestInfo::FilterMode, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>, ::webrtc::scoped_refptr<::webrtc::RtpSenderInternal>, ::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>);

        MCAPI ~RequestInfo();
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

        MCAPI void*
            $ctor(::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

        MCAPI void*
            $ctor(::webrtc::scoped_refptr<::webrtc::RtpSenderInternal>, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

        MCAPI void*
            $ctor(::webrtc::RTCStatsCollector::RequestInfo::FilterMode, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>, ::webrtc::scoped_refptr<::webrtc::RtpSenderInternal>, ::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>);
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct RtpTransceiverStatsInfo {
    public:
        // member functions
        // NOLINTBEGIN
        MCAPI RtpTransceiverStatsInfo(::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo const&);

        MCAPI RtpTransceiverStatsInfo(::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo&&);
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCAPI void* $ctor(::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo const&);

        MCAPI void* $ctor(::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo&&);
        // NOLINTEND
    };

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void ClearCachedStatsReport();

    MCAPI ::webrtc::scoped_refptr<::webrtc::RTCStatsReport>
    CreateReportFilteredBySelector(bool, ::webrtc::scoped_refptr<::webrtc::RTCStatsReport const>, ::webrtc::scoped_refptr<::webrtc::RtpSenderInternal>, ::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>);

    MCAPI void
        DeliverCachedReport(::webrtc::scoped_refptr<::webrtc::RTCStatsReport const>, ::std::vector<::webrtc::RTCStatsCollector::RequestInfo>);

    MCAPI void GetStatsReport(::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

    MCAPI void
        GetStatsReport(::webrtc::scoped_refptr<::webrtc::RtpSenderInternal>, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

    MCAPI void
        GetStatsReport(::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal>, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback>);

    MCAPI void GetStatsReportInternal(::webrtc::RTCStatsCollector::RequestInfo);

    MCAPI void MergeNetworkReport_s();

    MCAPI void OnSctpDataChannelStateChanged(int, ::webrtc::DataChannelInterface::DataState);

    MCAPI void PrepareTransceiverStatsInfosAndCallStats_s_w_n();

    MCAPI ::std::map<::std::string, ::webrtc::RTCStatsCollector::CertificateStatsPair>
    PrepareTransportCertificateStats_n(::std::map<::std::string, ::cricket::TransportStats> const&);

    MCAPI void ProduceAudioPlayoutStats_s(::webrtc::Timestamp, ::webrtc::RTCStatsReport*) const;

    MCAPI void
    ProduceAudioRTPStreamStats_n(::webrtc::Timestamp, ::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo const&, ::webrtc::RTCStatsReport*)
        const;

    MCAPI void
    ProduceCertificateStats_n(::webrtc::Timestamp, ::std::map<::std::string, ::webrtc::RTCStatsCollector::CertificateStatsPair> const&, ::webrtc::RTCStatsReport*)
        const;

    MCAPI void ProduceDataChannelStats_n(::webrtc::Timestamp, ::webrtc::RTCStatsReport*) const;

    MCAPI void
    ProduceIceCandidateAndPairStats_n(::webrtc::Timestamp, ::std::map<::std::string, ::cricket::TransportStats> const&, ::webrtc::Call::Stats const&, ::webrtc::RTCStatsReport*)
        const;

    MCAPI void ProduceMediaSourceStats_s(::webrtc::Timestamp, ::webrtc::RTCStatsReport*) const;

    MCAPI void ProducePartialResultsOnNetworkThread(::webrtc::Timestamp, ::std::optional<::std::string>);

    MCAPI void ProducePartialResultsOnSignalingThread(::webrtc::Timestamp);

    MCAPI void ProducePeerConnectionStats_s(::webrtc::Timestamp, ::webrtc::RTCStatsReport*) const;

    MCAPI void
    ProduceRTPStreamStats_n(::webrtc::Timestamp, ::std::vector<::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo> const&, ::webrtc::RTCStatsReport*)
        const;

    MCAPI void
    ProduceTransportStats_n(::webrtc::Timestamp, ::std::map<::std::string, ::cricket::TransportStats> const&, ::std::map<::std::string, ::webrtc::RTCStatsCollector::CertificateStatsPair> const&, ::webrtc::RTCStatsReport*)
        const;

    MCAPI void
    ProduceVideoRTPStreamStats_n(::webrtc::Timestamp, ::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo const&, ::webrtc::RTCStatsReport*)
        const;

    MCAPI RTCStatsCollector(::webrtc::PeerConnectionInternal*, int64);

    MCAPI void WaitForPendingRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::scoped_refptr<::webrtc::RTCStatsCollector> Create(::webrtc::PeerConnectionInternal*, int64);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::PeerConnectionInternal*, int64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc
