#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/Call.h"
#include "mc/external/webrtc/DataChannelInterface.h"
#include "mc/external/webrtc/RefCountInterface.h"
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

class RTCStatsCollector : public ::webrtc::RefCountInterface {
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
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk19d8a3;
        ::ll::UntypedStorage<8, 8> mUnk45ec48;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        CertificateStatsPair& operator=(CertificateStatsPair const&);
        CertificateStatsPair(CertificateStatsPair const&);
        CertificateStatsPair();
    
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
    
    class RequestInfo {
    public:
        // RequestInfo inner types define
        enum class FilterMode : int {
            KAll = 0,
            KSenderSelector = 1,
            KReceiverSelector = 2,
        };
        
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk923f6c;
        ::ll::UntypedStorage<8, 8> mUnk757752;
        ::ll::UntypedStorage<8, 8> mUnkf50fb3;
        ::ll::UntypedStorage<8, 8> mUnka8e487;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        RequestInfo& operator=(RequestInfo const&);
        RequestInfo(RequestInfo const&);
        RequestInfo();
    
    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI explicit RequestInfo(::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback);
    
        MCNAPI RequestInfo(::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal> selector, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback);
    
        MCNAPI RequestInfo(::webrtc::scoped_refptr<::webrtc::RtpSenderInternal> selector, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback);
    
        MCNAPI RequestInfo(::webrtc::RTCStatsCollector::RequestInfo::FilterMode filter_mode, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback, ::webrtc::scoped_refptr<::webrtc::RtpSenderInternal> sender_selector, ::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal> receiver_selector);
    
        MCNAPI ~RequestInfo();
        // NOLINTEND
    
    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback);
    
        MCNAPI void* $ctor(::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal> selector, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback);
    
        MCNAPI void* $ctor(::webrtc::scoped_refptr<::webrtc::RtpSenderInternal> selector, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback);
    
        MCNAPI void* $ctor(::webrtc::RTCStatsCollector::RequestInfo::FilterMode filter_mode, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback, ::webrtc::scoped_refptr<::webrtc::RtpSenderInternal> sender_selector, ::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal> receiver_selector);
        // NOLINTEND
    
    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    
    };
    
    struct RtpTransceiverStatsInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk975ff9;
        ::ll::UntypedStorage<4, 4> mUnk385638;
        ::ll::UntypedStorage<8, 40> mUnk98c3e9;
        ::ll::UntypedStorage<8, 40> mUnk70251e;
        ::ll::UntypedStorage<8, 360> mUnkd10314;
        ::ll::UntypedStorage<4, 8> mUnk142434;
        // NOLINTEND
    
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
    
    struct InternalRecord {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnk3a67c1;
        ::ll::UntypedStorage<4, 4> mUnka87b81;
        ::ll::UntypedStorage<8, 32> mUnk70b608;
        // NOLINTEND
    
    public:
        // prevent constructor by default
        InternalRecord& operator=(InternalRecord const&);
        InternalRecord(InternalRecord const&);
        InternalRecord();
    
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
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk7d2ce4;
    ::ll::UntypedStorage<8, 8> mUnka55ac4;
    ::ll::UntypedStorage<8, 8> mUnkafd602;
    ::ll::UntypedStorage<8, 8> mUnk4e06e8;
    ::ll::UntypedStorage<4, 4> mUnk848e5d;
    ::ll::UntypedStorage<8, 8> mUnkd8e664;
    ::ll::UntypedStorage<8, 8> mUnkcf7854;
    ::ll::UntypedStorage<8, 24> mUnk7a8e40;
    ::ll::UntypedStorage<8, 8> mUnk28198a;
    ::ll::UntypedStorage<8, 8> mUnke33cdd;
    ::ll::UntypedStorage<8, 24> mUnk2bc9a6;
    ::ll::UntypedStorage<8, 40> mUnk7f7d3c;
    ::ll::UntypedStorage<8, 16> mUnk40d617;
    ::ll::UntypedStorage<8, 32> mUnk2d6bd0;
    ::ll::UntypedStorage<8, 48> mUnk6945d3;
    ::ll::UntypedStorage<8, 8> mUnkc64145;
    ::ll::UntypedStorage<8, 8> mUnkd56f88;
    ::ll::UntypedStorage<8, 8> mUnk5e395c;
    ::ll::UntypedStorage<8, 40> mUnkd80827;
    // NOLINTEND

public:
    // prevent constructor by default
    RTCStatsCollector& operator=(RTCStatsCollector const&);
    RTCStatsCollector(RTCStatsCollector const&);
    RTCStatsCollector();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ~RTCStatsCollector() /*override*/;

    // vIndex: 3
    virtual void ProducePartialResultsOnSignalingThreadImpl(::webrtc::Timestamp timestamp, ::webrtc::RTCStatsReport* partial_report);

    // vIndex: 4
    virtual void ProducePartialResultsOnNetworkThreadImpl(::webrtc::Timestamp timestamp, ::std::map<::std::string, ::cricket::TransportStats> const& transport_stats_by_name, ::std::map<::std::string, ::webrtc::RTCStatsCollector::CertificateStatsPair> const& transport_cert_stats, ::webrtc::RTCStatsReport* partial_report);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void ClearCachedStatsReport();

    MCNAPI ::webrtc::scoped_refptr<::webrtc::RTCStatsReport> CreateReportFilteredBySelector(bool filter_by_sender_selector, ::webrtc::scoped_refptr<::webrtc::RTCStatsReport const> report, ::webrtc::scoped_refptr<::webrtc::RtpSenderInternal> sender_selector, ::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal> receiver_selector);

    MCNAPI void DeliverCachedReport(::webrtc::scoped_refptr<::webrtc::RTCStatsReport const> cached_report, ::std::vector<::webrtc::RTCStatsCollector::RequestInfo> requests);

    MCNAPI void GetStatsReport(::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback);

    MCNAPI void GetStatsReport(::webrtc::scoped_refptr<::webrtc::RtpSenderInternal> selector, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback);

    MCNAPI void GetStatsReport(::webrtc::scoped_refptr<::webrtc::RtpReceiverInternal> selector, ::webrtc::scoped_refptr<::webrtc::RTCStatsCollectorCallback> callback);

    MCNAPI void GetStatsReportInternal(::webrtc::RTCStatsCollector::RequestInfo request);

    MCNAPI void MergeNetworkReport_s();

    MCNAPI void OnSctpDataChannelStateChanged(int channel_id, ::webrtc::DataChannelInterface::DataState state);

    MCNAPI void PrepareTransceiverStatsInfosAndCallStats_s_w_n();

    MCNAPI ::std::map<::std::string, ::webrtc::RTCStatsCollector::CertificateStatsPair> PrepareTransportCertificateStats_n(::std::map<::std::string, ::cricket::TransportStats> const& transport_stats_by_name);

    MCNAPI void ProduceAudioPlayoutStats_s(::webrtc::Timestamp timestamp, ::webrtc::RTCStatsReport* report) const;

    MCNAPI void ProduceAudioRTPStreamStats_n(::webrtc::Timestamp timestamp, ::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo const& stats, ::webrtc::RTCStatsReport* report) const;

    MCNAPI void ProduceCertificateStats_n(::webrtc::Timestamp timestamp, ::std::map<::std::string, ::webrtc::RTCStatsCollector::CertificateStatsPair> const& transport_cert_stats, ::webrtc::RTCStatsReport* report) const;

    MCNAPI void ProduceDataChannelStats_n(::webrtc::Timestamp timestamp, ::webrtc::RTCStatsReport* report) const;

    MCNAPI void ProduceIceCandidateAndPairStats_n(::webrtc::Timestamp timestamp, ::std::map<::std::string, ::cricket::TransportStats> const& transport_stats_by_name, ::webrtc::Call::Stats const& call_stats, ::webrtc::RTCStatsReport* report) const;

    MCNAPI void ProduceMediaSourceStats_s(::webrtc::Timestamp timestamp, ::webrtc::RTCStatsReport* report) const;

    MCNAPI void ProducePartialResultsOnNetworkThread(::webrtc::Timestamp timestamp, ::std::optional<::std::string> sctp_transport_name);

    MCNAPI void ProducePartialResultsOnSignalingThread(::webrtc::Timestamp timestamp);

    MCNAPI void ProducePeerConnectionStats_s(::webrtc::Timestamp timestamp, ::webrtc::RTCStatsReport* report) const;

    MCNAPI void ProduceRTPStreamStats_n(::webrtc::Timestamp timestamp, ::std::vector<::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo> const& transceiver_stats_infos, ::webrtc::RTCStatsReport* report) const;

    MCNAPI void ProduceTransportStats_n(::webrtc::Timestamp timestamp, ::std::map<::std::string, ::cricket::TransportStats> const& transport_stats_by_name, ::std::map<::std::string, ::webrtc::RTCStatsCollector::CertificateStatsPair> const& transport_cert_stats, ::webrtc::RTCStatsReport* report) const;

    MCNAPI void ProduceVideoRTPStreamStats_n(::webrtc::Timestamp timestamp, ::webrtc::RTCStatsCollector::RtpTransceiverStatsInfo const& stats, ::webrtc::RTCStatsReport* report) const;

    MCNAPI RTCStatsCollector(::webrtc::PeerConnectionInternal* pc, int64 cache_lifetime_us);

    MCNAPI void WaitForPendingRequest();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::scoped_refptr<::webrtc::RTCStatsCollector> Create(::webrtc::PeerConnectionInternal* pc, int64 cache_lifetime_us);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::PeerConnectionInternal* pc, int64 cache_lifetime_us);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $ProducePartialResultsOnSignalingThreadImpl(::webrtc::Timestamp timestamp, ::webrtc::RTCStatsReport* partial_report);

    MCNAPI void $ProducePartialResultsOnNetworkThreadImpl(::webrtc::Timestamp timestamp, ::std::map<::std::string, ::cricket::TransportStats> const& transport_stats_by_name, ::std::map<::std::string, ::webrtc::RTCStatsCollector::CertificateStatsPair> const& transport_cert_stats, ::webrtc::RTCStatsReport* partial_report);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
