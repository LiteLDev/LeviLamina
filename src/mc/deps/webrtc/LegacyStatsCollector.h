#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/LegacyStatsCollectorInterface.h"
#include "mc/deps/webrtc/PeerConnectionInterface.h"
#include "mc/deps/webrtc/RtpTransceiverProxyWithInternal.h"
#include "mc/deps/webrtc/StatsReport.h"
#include "mc/deps/webrtc/detail/scoped_refptr.h"

// auto generated forward declare list
// clang-format off
namespace cricket { class CandidateStats; }
namespace cricket { struct ConnectionInfo; }
namespace cricket { struct TransportStats; }
namespace rtc { struct SSLCertificateStats; }
namespace webrtc { class AudioTrackInterface; }
namespace webrtc { class LegacyStatsCollectorInterface; }
namespace webrtc { class MediaStreamInterface; }
namespace webrtc { class MediaStreamTrackInterface; }
namespace webrtc { class PeerConnectionInternal; }
namespace webrtc { class RtpTransceiver; }
namespace webrtc { class StatsReport; }
// clang-format on

namespace webrtc {

class LegacyStatsCollector : public ::webrtc::LegacyStatsCollectorInterface {
public:
    // LegacyStatsCollector inner types declare
    // clang-format off
    struct SessionStats;
    struct TransportStats;
    // clang-format on

    // LegacyStatsCollector inner types define
    struct SessionStats {
    public:
        // prevent constructor by default
        SessionStats& operator=(SessionStats const&);
        SessionStats(SessionStats const&);

    public:
        // NOLINTBEGIN
        // symbol: ??0SessionStats@LegacyStatsCollector@webrtc@@QEAA@XZ
        MCAPI SessionStats();

        // symbol: ??1SessionStats@LegacyStatsCollector@webrtc@@QEAA@XZ
        MCAPI ~SessionStats();

        // NOLINTEND
    };

    struct TransportStats {
    public:
        // prevent constructor by default
        TransportStats& operator=(TransportStats const&);
        TransportStats(TransportStats const&);
        TransportStats();

    public:
        // NOLINTBEGIN
        // symbol:
        // ??0TransportStats@LegacyStatsCollector@webrtc@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U0cricket@@@Z
        MCAPI TransportStats(std::string, struct cricket::TransportStats);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    LegacyStatsCollector& operator=(LegacyStatsCollector const&);
    LegacyStatsCollector(LegacyStatsCollector const&);
    LegacyStatsCollector();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1LegacyStatsCollector@webrtc@@UEAA@XZ
    virtual ~LegacyStatsCollector();

    // vIndex: 1, symbol: ?AddLocalAudioTrack@LegacyStatsCollector@webrtc@@UEAAXPEAVAudioTrackInterface@2@I@Z
    virtual void AddLocalAudioTrack(class webrtc::AudioTrackInterface*, uint);

    // vIndex: 2, symbol: ?RemoveLocalAudioTrack@LegacyStatsCollector@webrtc@@UEAAXPEAVAudioTrackInterface@2@I@Z
    virtual void RemoveLocalAudioTrack(class webrtc::AudioTrackInterface*, uint);

    // vIndex: 3, symbol:
    // ?GetStats@LegacyStatsCollector@webrtc@@UEAAXPEAVMediaStreamTrackInterface@2@PEAV?$vector@PEBVStatsReport@webrtc@@V?$allocator@PEBVStatsReport@webrtc@@@std@@@std@@@Z
    virtual void GetStats(class webrtc::MediaStreamTrackInterface*, std::vector<class webrtc::StatsReport const*>*);

    // vIndex: 4, symbol: ?GetTimeNow@LegacyStatsCollector@webrtc@@EEAANXZ
    virtual double GetTimeNow();

    // symbol: ?AddStream@LegacyStatsCollector@webrtc@@QEAAXPEAVMediaStreamInterface@2@@Z
    MCAPI void AddStream(class webrtc::MediaStreamInterface*);

    // symbol: ?AddTrack@LegacyStatsCollector@webrtc@@QEAAXPEAVMediaStreamTrackInterface@2@@Z
    MCAPI void AddTrack(class webrtc::MediaStreamTrackInterface*);

    // symbol: ?InvalidateCache@LegacyStatsCollector@webrtc@@QEAAXXZ
    MCAPI void InvalidateCache();

    // symbol:
    // ?IsValidTrack@LegacyStatsCollector@webrtc@@QEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool IsValidTrack(std::string const&);

    // symbol: ??0LegacyStatsCollector@webrtc@@QEAA@PEAVPeerConnectionInternal@1@@Z
    MCAPI explicit LegacyStatsCollector(class webrtc::PeerConnectionInternal*);

    // symbol: ?PrepareADMReport@LegacyStatsCollector@webrtc@@QEAAPEAVStatsReport@2@XZ
    MCAPI class webrtc::StatsReport* PrepareADMReport();

    // symbol:
    // ?PrepareReport@LegacyStatsCollector@webrtc@@QEAAPEAVStatsReport@2@_NIAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@W4Direction@32@@Z
    MCAPI class webrtc::StatsReport* PrepareReport(
        bool,
        uint,
        std::string const&,
        class rtc::scoped_refptr<class webrtc::StatsReport::IdBase> const&,
        ::webrtc::StatsReport::Direction
    );

    // symbol: ?UpdateStats@LegacyStatsCollector@webrtc@@QEAAXW4StatsOutputLevel@PeerConnectionInterface@2@@Z
    MCAPI void UpdateStats(::webrtc::PeerConnectionInterface::StatsOutputLevel);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AddCandidateReport@LegacyStatsCollector@webrtc@@AEAAPEAVStatsReport@2@AEBVCandidateStats@cricket@@_N@Z
    MCAPI class webrtc::StatsReport* AddCandidateReport(class cricket::CandidateStats const&, bool);

    // symbol:
    // ?AddCertificateReports@LegacyStatsCollector@webrtc@@AEAAPEAVStatsReport@2@V?$unique_ptr@USSLCertificateStats@rtc@@U?$default_delete@USSLCertificateStats@rtc@@@std@@@std@@@Z
    MCAPI class webrtc::StatsReport* AddCertificateReports(std::unique_ptr<struct rtc::SSLCertificateStats>);

    // symbol:
    // ?AddConnectionInfoReport@LegacyStatsCollector@webrtc@@AEAAPEAVStatsReport@2@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@HHAEBV?$scoped_refptr@VIdBase@StatsReport@webrtc@@@rtc@@AEBUConnectionInfo@cricket@@@Z
    MCAPI class webrtc::StatsReport*
    AddConnectionInfoReport(std::string const&, int, int, class rtc::scoped_refptr<class webrtc::StatsReport::IdBase> const&, struct cricket::ConnectionInfo const&);

    // symbol: ?ExtractBweInfo@LegacyStatsCollector@webrtc@@AEAAXXZ
    MCAPI void ExtractBweInfo();

    // symbol: ?ExtractDataInfo@LegacyStatsCollector@webrtc@@AEAAXXZ
    MCAPI void ExtractDataInfo();

    // symbol:
    // ?ExtractMediaInfo@LegacyStatsCollector@webrtc@@AEAAXAEBV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@@Z
    MCAPI void ExtractMediaInfo(std::map<std::string, std::string> const&);

    // symbol: ?ExtractSenderInfo@LegacyStatsCollector@webrtc@@AEAAXXZ
    MCAPI void ExtractSenderInfo();

    // symbol:
    // ?ExtractSessionInfo@LegacyStatsCollector@webrtc@@AEAA?AV?$map@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@U?$less@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
    MCAPI std::map<std::string, std::string> ExtractSessionInfo();

    // symbol:
    // ?ExtractSessionInfo_n@LegacyStatsCollector@webrtc@@AEAA?AUSessionStats@12@AEBV?$vector@V?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@V?$allocator@V?$scoped_refptr@V?$RtpTransceiverProxyWithInternal@VRtpTransceiver@webrtc@@@webrtc@@@rtc@@@std@@@std@@V?$optional@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@5@1@Z
    MCAPI struct webrtc::LegacyStatsCollector::SessionStats
    ExtractSessionInfo_n(std::vector<class rtc::scoped_refptr<class webrtc::RtpTransceiverProxyWithInternal<class webrtc::RtpTransceiver>>> const&, std::optional<std::string>, std::optional<std::string>);

    // symbol: ?ExtractSessionInfo_s@LegacyStatsCollector@webrtc@@AEAAXAEAUSessionStats@12@@Z
    MCAPI void ExtractSessionInfo_s(struct webrtc::LegacyStatsCollector::SessionStats&);

    // symbol:
    // ?GetReport@LegacyStatsCollector@webrtc@@AEAAPEAVStatsReport@2@AEBW4StatsType@32@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4Direction@32@@Z
    MCAPI class webrtc::StatsReport*
    GetReport(::webrtc::StatsReport::StatsType const&, std::string const&, ::webrtc::StatsReport::Direction);

    // symbol:
    // ?UpdateReportFromAudioTrack@LegacyStatsCollector@webrtc@@AEAAXPEAVAudioTrackInterface@2@PEAVStatsReport@2@_N@Z
    MCAPI void UpdateReportFromAudioTrack(class webrtc::AudioTrackInterface*, class webrtc::StatsReport*, bool);

    // symbol: ?UpdateStatsFromExistingLocalAudioTracks@LegacyStatsCollector@webrtc@@AEAAX_N@Z
    MCAPI void UpdateStatsFromExistingLocalAudioTracks(bool);

    // symbol: ?UpdateTrackReports@LegacyStatsCollector@webrtc@@AEAAXXZ
    MCAPI void UpdateTrackReports();

    // NOLINTEND
};

}; // namespace webrtc
