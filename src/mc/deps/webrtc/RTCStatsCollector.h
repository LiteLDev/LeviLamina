#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/Call.h"
#include "mc/deps/webrtc/rtc/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { struct TransportStats; }
namespace webrtc { class DataChannelInterface; }
namespace webrtc { class PeerConnectionInternal; }
namespace webrtc { class RTCStatsCollectorCallback; }
namespace webrtc { class RTCStatsReport; }
namespace webrtc { class RtpReceiverInternal; }
namespace webrtc { class RtpSenderInternal; }
namespace webrtc { class SctpDataChannel; }
namespace webrtc { class Timestamp; }
// clang-format on

namespace webrtc {

class RTCStatsCollector {
public:
    // RTCStatsCollector inner types declare
    // clang-format off
    struct CertificateStatsPair;
    class InternalRecord;
    class RequestInfo;
    struct RtpTransceiverStatsInfo;
    // clang-format on

    // RTCStatsCollector inner types define
    struct CertificateStatsPair {
    public:
        // prevent constructor by default
        CertificateStatsPair& operator=(CertificateStatsPair const&);
        CertificateStatsPair(CertificateStatsPair const&);
        CertificateStatsPair();

    public:
        // NOLINTBEGIN
        // symbol: ?Copy@CertificateStatsPair@RTCStatsCollector@webrtc@@QEBA?AU123@XZ
        MCAPI struct webrtc::RTCStatsCollector::CertificateStatsPair Copy() const;

        // symbol: ??1CertificateStatsPair@RTCStatsCollector@webrtc@@QEAA@XZ
        MCAPI ~CertificateStatsPair();

        // NOLINTEND
    };

    class InternalRecord {
    public:
        // prevent constructor by default
        InternalRecord& operator=(InternalRecord const&);
        InternalRecord(InternalRecord const&);
        InternalRecord();

    public:
        // NOLINTBEGIN
        // symbol: ??1InternalRecord@RTCStatsCollector@webrtc@@QEAA@XZ
        MCAPI ~InternalRecord();

        // NOLINTEND
    };

    class RequestInfo {
    public:
        // RequestInfo inner types define
        enum class FilterMode {};

    public:
        // prevent constructor by default
        RequestInfo& operator=(RequestInfo const&);
        RequestInfo(RequestInfo const&);
        RequestInfo();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0RequestInfo@RTCStatsCollector@webrtc@@QEAA@V?$scoped_refptr@VRTCStatsCollectorCallback@webrtc@@@rtc@@@Z
        MCAPI explicit RequestInfo(class rtc::scoped_refptr<class webrtc::RTCStatsCollectorCallback>);

        // symbol:
        // ??0RequestInfo@RTCStatsCollector@webrtc@@QEAA@V?$scoped_refptr@VRtpReceiverInternal@webrtc@@@rtc@@V?$scoped_refptr@VRTCStatsCollectorCallback@webrtc@@@4@@Z
        MCAPI
        RequestInfo(class rtc::scoped_refptr<class webrtc::RtpReceiverInternal>, class rtc::scoped_refptr<class webrtc::RTCStatsCollectorCallback>);

        // symbol:
        // ??0RequestInfo@RTCStatsCollector@webrtc@@QEAA@V?$scoped_refptr@VRtpSenderInternal@webrtc@@@rtc@@V?$scoped_refptr@VRTCStatsCollectorCallback@webrtc@@@4@@Z
        MCAPI
        RequestInfo(class rtc::scoped_refptr<class webrtc::RtpSenderInternal>, class rtc::scoped_refptr<class webrtc::RTCStatsCollectorCallback>);

        // symbol: ??1RequestInfo@RTCStatsCollector@webrtc@@QEAA@XZ
        MCAPI ~RequestInfo();

        // NOLINTEND

        // private:
        // NOLINTBEGIN
        // symbol:
        // ??0RequestInfo@RTCStatsCollector@webrtc@@AEAA@W4FilterMode@012@V?$scoped_refptr@VRTCStatsCollectorCallback@webrtc@@@rtc@@V?$scoped_refptr@VRtpSenderInternal@webrtc@@@5@V?$scoped_refptr@VRtpReceiverInternal@webrtc@@@5@@Z
        MCAPI
        RequestInfo(::webrtc::RTCStatsCollector::RequestInfo::FilterMode, class rtc::scoped_refptr<class webrtc::RTCStatsCollectorCallback>, class rtc::scoped_refptr<class webrtc::RtpSenderInternal>, class rtc::scoped_refptr<class webrtc::RtpReceiverInternal>);

        // NOLINTEND
    };

    struct RtpTransceiverStatsInfo {
    public:
        // prevent constructor by default
        RtpTransceiverStatsInfo& operator=(RtpTransceiverStatsInfo const&);
        RtpTransceiverStatsInfo(RtpTransceiverStatsInfo const&);
        RtpTransceiverStatsInfo();
    };

public:
    // prevent constructor by default
    RTCStatsCollector& operator=(RTCStatsCollector const&);
    RTCStatsCollector(RTCStatsCollector const&);
    RTCStatsCollector();

public:
    // NOLINTBEGIN
    // symbol:
    // ?ProducePartialResultsOnNetworkThreadImpl@RTCStatsCollector@webrtc@@MEAAXVTimestamp@2@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTransportStats@cricket@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTransportStats@cricket@@@std@@@2@@std@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UCertificateStatsPair@RTCStatsCollector@webrtc@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UCertificateStatsPair@RTCStatsCollector@webrtc@@@std@@@2@@5@PEAVRTCStatsReport@2@@Z
    MCVAPI void
    ProducePartialResultsOnNetworkThreadImpl(class webrtc::Timestamp, std::map<std::string, struct cricket::TransportStats> const&, std::map<std::string, struct webrtc::RTCStatsCollector::CertificateStatsPair> const&, class webrtc::RTCStatsReport*);

    // symbol:
    // ?ProducePartialResultsOnSignalingThreadImpl@RTCStatsCollector@webrtc@@MEAAXVTimestamp@2@PEAVRTCStatsReport@2@@Z
    MCVAPI void ProducePartialResultsOnSignalingThreadImpl(class webrtc::Timestamp, class webrtc::RTCStatsReport*);

    // symbol: ??1RTCStatsCollector@webrtc@@MEAA@XZ
    MCVAPI ~RTCStatsCollector();

    // symbol: ?ClearCachedStatsReport@RTCStatsCollector@webrtc@@QEAAXXZ
    MCAPI void ClearCachedStatsReport();

    // symbol:
    // ?GetStatsReport@RTCStatsCollector@webrtc@@QEAAXV?$scoped_refptr@VRTCStatsCollectorCallback@webrtc@@@rtc@@@Z
    MCAPI void GetStatsReport(class rtc::scoped_refptr<class webrtc::RTCStatsCollectorCallback>);

    // symbol:
    // ?GetStatsReport@RTCStatsCollector@webrtc@@QEAAXV?$scoped_refptr@VRtpReceiverInternal@webrtc@@@rtc@@V?$scoped_refptr@VRTCStatsCollectorCallback@webrtc@@@4@@Z
    MCAPI void
        GetStatsReport(class rtc::scoped_refptr<class webrtc::RtpReceiverInternal>, class rtc::scoped_refptr<class webrtc::RTCStatsCollectorCallback>);

    // symbol:
    // ?GetStatsReport@RTCStatsCollector@webrtc@@QEAAXV?$scoped_refptr@VRtpSenderInternal@webrtc@@@rtc@@V?$scoped_refptr@VRTCStatsCollectorCallback@webrtc@@@4@@Z
    MCAPI void
        GetStatsReport(class rtc::scoped_refptr<class webrtc::RtpSenderInternal>, class rtc::scoped_refptr<class webrtc::RTCStatsCollectorCallback>);

    // symbol: ?WaitForPendingRequest@RTCStatsCollector@webrtc@@QEAAXXZ
    MCAPI void WaitForPendingRequest();

    // symbol:
    // ?Create@RTCStatsCollector@webrtc@@SA?AV?$scoped_refptr@VRTCStatsCollector@webrtc@@@rtc@@PEAVPeerConnectionInternal@2@_J@Z
    MCAPI static class rtc::scoped_refptr<class webrtc::RTCStatsCollector>
    Create(class webrtc::PeerConnectionInternal*, int64);

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    // symbol: ??0RTCStatsCollector@webrtc@@IEAA@PEAVPeerConnectionInternal@1@_J@Z
    MCAPI RTCStatsCollector(class webrtc::PeerConnectionInternal*, int64);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?CreateReportFilteredBySelector@RTCStatsCollector@webrtc@@AEAA?AV?$scoped_refptr@VRTCStatsReport@webrtc@@@rtc@@_NV?$scoped_refptr@$$CBVRTCStatsReport@webrtc@@@4@V?$scoped_refptr@VRtpSenderInternal@webrtc@@@4@V?$scoped_refptr@VRtpReceiverInternal@webrtc@@@4@@Z
    MCAPI class rtc::scoped_refptr<class webrtc::RTCStatsReport>
    CreateReportFilteredBySelector(bool, class rtc::scoped_refptr<class webrtc::RTCStatsReport const>, class rtc::scoped_refptr<class webrtc::RtpSenderInternal>, class rtc::scoped_refptr<class webrtc::RtpReceiverInternal>);

    // symbol:
    // ?DeliverCachedReport@RTCStatsCollector@webrtc@@AEAAXV?$scoped_refptr@$$CBVRTCStatsReport@webrtc@@@rtc@@V?$vector@VRequestInfo@RTCStatsCollector@webrtc@@V?$allocator@VRequestInfo@RTCStatsCollector@webrtc@@@std@@@std@@@Z
    MCAPI void
        DeliverCachedReport(class rtc::scoped_refptr<class webrtc::RTCStatsReport const>, std::vector<class webrtc::RTCStatsCollector::RequestInfo>);

    // symbol: ?GetStatsReportInternal@RTCStatsCollector@webrtc@@AEAAXVRequestInfo@12@@Z
    MCAPI void GetStatsReportInternal(class webrtc::RTCStatsCollector::RequestInfo);

    // symbol: ?MergeNetworkReport_s@RTCStatsCollector@webrtc@@AEAAXXZ
    MCAPI void MergeNetworkReport_s();

    // symbol: ?OnDataChannelClosed@RTCStatsCollector@webrtc@@AEAAXPEAVDataChannelInterface@2@@Z
    MCAPI void OnDataChannelClosed(class webrtc::DataChannelInterface*);

    // symbol: ?OnDataChannelOpened@RTCStatsCollector@webrtc@@AEAAXPEAVDataChannelInterface@2@@Z
    MCAPI void OnDataChannelOpened(class webrtc::DataChannelInterface*);

    // symbol: ?OnSctpDataChannelCreated@RTCStatsCollector@webrtc@@AEAAXPEAVSctpDataChannel@2@@Z
    MCAPI void OnSctpDataChannelCreated(class webrtc::SctpDataChannel*);

    // symbol: ?PrepareTransceiverStatsInfosAndCallStats_s_w_n@RTCStatsCollector@webrtc@@AEAAXXZ
    MCAPI void PrepareTransceiverStatsInfosAndCallStats_s_w_n();

    // symbol:
    // ?PrepareTransportCertificateStats_n@RTCStatsCollector@webrtc@@AEAA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UCertificateStatsPair@RTCStatsCollector@webrtc@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UCertificateStatsPair@RTCStatsCollector@webrtc@@@std@@@2@@std@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTransportStats@cricket@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTransportStats@cricket@@@std@@@2@@4@@Z
    MCAPI std::map<std::string, struct webrtc::RTCStatsCollector::CertificateStatsPair>
          PrepareTransportCertificateStats_n(std::map<std::string, struct cricket::TransportStats> const&);

    // symbol: ?ProduceAudioPlayoutStats_s@RTCStatsCollector@webrtc@@AEBAXVTimestamp@2@PEAVRTCStatsReport@2@@Z
    MCAPI void ProduceAudioPlayoutStats_s(class webrtc::Timestamp, class webrtc::RTCStatsReport*) const;

    // symbol:
    // ?ProduceAudioRTPStreamStats_n@RTCStatsCollector@webrtc@@AEBAXVTimestamp@2@AEBURtpTransceiverStatsInfo@12@PEAVRTCStatsReport@2@@Z
    MCAPI void
    ProduceAudioRTPStreamStats_n(class webrtc::Timestamp, struct webrtc::RTCStatsCollector::RtpTransceiverStatsInfo const&, class webrtc::RTCStatsReport*)
        const;

    // symbol:
    // ?ProduceCertificateStats_n@RTCStatsCollector@webrtc@@AEBAXVTimestamp@2@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UCertificateStatsPair@RTCStatsCollector@webrtc@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UCertificateStatsPair@RTCStatsCollector@webrtc@@@std@@@2@@std@@PEAVRTCStatsReport@2@@Z
    MCAPI void
    ProduceCertificateStats_n(class webrtc::Timestamp, std::map<std::string, struct webrtc::RTCStatsCollector::CertificateStatsPair> const&, class webrtc::RTCStatsReport*)
        const;

    // symbol: ?ProduceDataChannelStats_s@RTCStatsCollector@webrtc@@AEBAXVTimestamp@2@PEAVRTCStatsReport@2@@Z
    MCAPI void ProduceDataChannelStats_s(class webrtc::Timestamp, class webrtc::RTCStatsReport*) const;

    // symbol:
    // ?ProduceIceCandidateAndPairStats_n@RTCStatsCollector@webrtc@@AEBAXVTimestamp@2@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTransportStats@cricket@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTransportStats@cricket@@@std@@@2@@std@@AEBUStats@Call@2@PEAVRTCStatsReport@2@@Z
    MCAPI void
    ProduceIceCandidateAndPairStats_n(class webrtc::Timestamp, std::map<std::string, struct cricket::TransportStats> const&, struct webrtc::Call::Stats const&, class webrtc::RTCStatsReport*)
        const;

    // symbol: ?ProduceMediaSourceStats_s@RTCStatsCollector@webrtc@@AEBAXVTimestamp@2@PEAVRTCStatsReport@2@@Z
    MCAPI void ProduceMediaSourceStats_s(class webrtc::Timestamp, class webrtc::RTCStatsReport*) const;

    // symbol: ?ProduceMediaStreamStats_s@RTCStatsCollector@webrtc@@AEBAXVTimestamp@2@PEAVRTCStatsReport@2@@Z
    MCAPI void ProduceMediaStreamStats_s(class webrtc::Timestamp, class webrtc::RTCStatsReport*) const;

    // symbol: ?ProduceMediaStreamTrackStats_s@RTCStatsCollector@webrtc@@AEBAXVTimestamp@2@PEAVRTCStatsReport@2@@Z
    MCAPI void ProduceMediaStreamTrackStats_s(class webrtc::Timestamp, class webrtc::RTCStatsReport*) const;

    // symbol:
    // ?ProducePartialResultsOnNetworkThread@RTCStatsCollector@webrtc@@AEAAXVTimestamp@2@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@Z
    MCAPI void ProducePartialResultsOnNetworkThread(class webrtc::Timestamp, std::optional<std::string>);

    // symbol: ?ProducePartialResultsOnSignalingThread@RTCStatsCollector@webrtc@@AEAAXVTimestamp@2@@Z
    MCAPI void ProducePartialResultsOnSignalingThread(class webrtc::Timestamp);

    // symbol: ?ProducePeerConnectionStats_s@RTCStatsCollector@webrtc@@AEBAXVTimestamp@2@PEAVRTCStatsReport@2@@Z
    MCAPI void ProducePeerConnectionStats_s(class webrtc::Timestamp, class webrtc::RTCStatsReport*) const;

    // symbol:
    // ?ProduceRTPStreamStats_n@RTCStatsCollector@webrtc@@AEBAXVTimestamp@2@AEBV?$vector@URtpTransceiverStatsInfo@RTCStatsCollector@webrtc@@V?$allocator@URtpTransceiverStatsInfo@RTCStatsCollector@webrtc@@@std@@@std@@PEAVRTCStatsReport@2@@Z
    MCAPI void
    ProduceRTPStreamStats_n(class webrtc::Timestamp, std::vector<struct webrtc::RTCStatsCollector::RtpTransceiverStatsInfo> const&, class webrtc::RTCStatsReport*)
        const;

    // symbol:
    // ?ProduceTransportStats_n@RTCStatsCollector@webrtc@@AEBAXVTimestamp@2@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTransportStats@cricket@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UTransportStats@cricket@@@std@@@2@@std@@AEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UCertificateStatsPair@RTCStatsCollector@webrtc@@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UCertificateStatsPair@RTCStatsCollector@webrtc@@@std@@@2@@5@PEAVRTCStatsReport@2@@Z
    MCAPI void
    ProduceTransportStats_n(class webrtc::Timestamp, std::map<std::string, struct cricket::TransportStats> const&, std::map<std::string, struct webrtc::RTCStatsCollector::CertificateStatsPair> const&, class webrtc::RTCStatsReport*)
        const;

    // symbol:
    // ?ProduceVideoRTPStreamStats_n@RTCStatsCollector@webrtc@@AEBAXVTimestamp@2@AEBURtpTransceiverStatsInfo@12@PEAVRTCStatsReport@2@@Z
    MCAPI void
    ProduceVideoRTPStreamStats_n(class webrtc::Timestamp, struct webrtc::RTCStatsCollector::RtpTransceiverStatsInfo const&, class webrtc::RTCStatsReport*)
        const;

    // NOLINTEND
};

}; // namespace webrtc
