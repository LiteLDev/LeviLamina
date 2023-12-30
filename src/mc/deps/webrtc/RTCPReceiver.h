#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpRtcpInterface.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class ModuleRtpRtcpImpl2; }
namespace webrtc { class ReportBlockData; }
namespace webrtc { class TimeDelta; }
namespace webrtc { class Timestamp; }
namespace webrtc::rtcp { class CommonHeader; }
namespace webrtc::rtcp { class ReportBlock; }
namespace webrtc::rtcp { class Rrtr; }
namespace webrtc::rtcp { class TargetBitrate; }
namespace webrtc::rtcp { class TmmbItem; }
namespace webrtc::rtcp { struct ReceiveTimeInfo; }
// clang-format on

namespace webrtc {

class RTCPReceiver {
public:
    // RTCPReceiver inner types declare
    // clang-format off
    struct LastFirStatus;
    class NonSenderRttStats;
    struct PacketInformation;
    class RegisteredSsrcs;
    struct RrtrInformation;
    class RttStats;
    struct TmmbrInformation;
    // clang-format on

    // RTCPReceiver inner types define
    struct LastFirStatus {
    public:
        // prevent constructor by default
        LastFirStatus& operator=(LastFirStatus const&);
        LastFirStatus(LastFirStatus const&);
        LastFirStatus();
    };

    class NonSenderRttStats {
    public:
        // prevent constructor by default
        NonSenderRttStats& operator=(NonSenderRttStats const&);
        NonSenderRttStats(NonSenderRttStats const&);
        NonSenderRttStats();
    };

    struct PacketInformation {
    public:
        // prevent constructor by default
        PacketInformation& operator=(PacketInformation const&);
        PacketInformation(PacketInformation const&);
        PacketInformation();

    public:
        // NOLINTBEGIN
        // symbol: ??1PacketInformation@RTCPReceiver@webrtc@@QEAA@XZ
        MCAPI ~PacketInformation();

        // NOLINTEND
    };

    class RegisteredSsrcs {
    public:
        // prevent constructor by default
        RegisteredSsrcs& operator=(RegisteredSsrcs const&);
        RegisteredSsrcs(RegisteredSsrcs const&);
        RegisteredSsrcs();

    public:
        // NOLINTBEGIN
        // symbol: ??0RegisteredSsrcs@RTCPReceiver@webrtc@@QEAA@_NAEBUConfiguration@RtpRtcpInterface@2@@Z
        MCAPI RegisteredSsrcs(bool, struct webrtc::RtpRtcpInterface::Configuration const&);

        // symbol: ?contains@RegisteredSsrcs@RTCPReceiver@webrtc@@QEBA_NI@Z
        MCAPI bool contains(uint) const;

        // symbol: ?media_ssrc@RegisteredSsrcs@RTCPReceiver@webrtc@@QEBAIXZ
        MCAPI uint media_ssrc() const;

        // symbol: ?set_media_ssrc@RegisteredSsrcs@RTCPReceiver@webrtc@@QEAAXI@Z
        MCAPI void set_media_ssrc(uint);

        // symbol: ??1RegisteredSsrcs@RTCPReceiver@webrtc@@QEAA@XZ
        MCAPI ~RegisteredSsrcs();

        // NOLINTEND
    };

    struct RrtrInformation {
    public:
        // prevent constructor by default
        RrtrInformation& operator=(RrtrInformation const&);
        RrtrInformation(RrtrInformation const&);
        RrtrInformation();
    };

    class RttStats {
    public:
        // prevent constructor by default
        RttStats& operator=(RttStats const&);
        RttStats(RttStats const&);
        RttStats();

    public:
        // NOLINTBEGIN
        // symbol: ?AddRtt@RttStats@RTCPReceiver@webrtc@@QEAAXVTimeDelta@3@@Z
        MCAPI void AddRtt(class webrtc::TimeDelta);

        // NOLINTEND
    };

    struct TmmbrInformation {
    public:
        // prevent constructor by default
        TmmbrInformation& operator=(TmmbrInformation const&);
        TmmbrInformation(TmmbrInformation const&);
        TmmbrInformation();

    public:
        // NOLINTBEGIN
        // symbol: ??0TmmbrInformation@RTCPReceiver@webrtc@@QEAA@$$QEAU012@@Z
        MCAPI TmmbrInformation(struct webrtc::RTCPReceiver::TmmbrInformation&&);

        // symbol: ??1TmmbrInformation@RTCPReceiver@webrtc@@QEAA@XZ
        MCAPI ~TmmbrInformation();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    RTCPReceiver& operator=(RTCPReceiver const&);
    RTCPReceiver(RTCPReceiver const&);
    RTCPReceiver();

public:
    // NOLINTBEGIN
    // symbol:
    // ?BoundingSet@RTCPReceiver@webrtc@@QEAA?AV?$vector@VTmmbItem@rtcp@webrtc@@V?$allocator@VTmmbItem@rtcp@webrtc@@@std@@@std@@PEA_N@Z
    MCAPI std::vector<class webrtc::rtcp::TmmbItem> BoundingSet(bool*);

    // symbol:
    // ?ConsumeReceivedXrReferenceTimeInfo@RTCPReceiver@webrtc@@QEAA?AV?$vector@UReceiveTimeInfo@rtcp@webrtc@@V?$allocator@UReceiveTimeInfo@rtcp@webrtc@@@std@@@std@@XZ
    MCAPI std::vector<struct webrtc::rtcp::ReceiveTimeInfo> ConsumeReceivedXrReferenceTimeInfo();

    // symbol: ?GetAndResetXrRrRtt@RTCPReceiver@webrtc@@QEAA_NPEA_J@Z
    MCAPI bool GetAndResetXrRrRtt(int64*);

    // symbol:
    // ?GetLatestReportBlockData@RTCPReceiver@webrtc@@QEBA?AV?$vector@VReportBlockData@webrtc@@V?$allocator@VReportBlockData@webrtc@@@std@@@std@@XZ
    MCAPI std::vector<class webrtc::ReportBlockData> GetLatestReportBlockData() const;

    // symbol: ?GetNonSenderRTT@RTCPReceiver@webrtc@@QEBA?AVNonSenderRttStats@12@XZ
    MCAPI class webrtc::RTCPReceiver::NonSenderRttStats GetNonSenderRTT() const;

    // symbol: ?IncomingPacket@RTCPReceiver@webrtc@@QEAAXV?$ArrayView@$$CBE$0?BCGH@@rtc@@@Z
    MCAPI void IncomingPacket(class rtc::ArrayView<uchar const, -4711>);

    // symbol: ?NTP@RTCPReceiver@webrtc@@QEBA_NPEAI00000PEA_K1@Z
    MCAPI bool NTP(uint*, uint*, uint*, uint*, uint*, uint*, uint64*, uint64*) const;

    // symbol: ?NotifyTmmbrUpdated@RTCPReceiver@webrtc@@QEAAXXZ
    MCAPI void NotifyTmmbrUpdated();

    // symbol: ?OnPeriodicRttUpdate@RTCPReceiver@webrtc@@QEAA?AV?$optional@VTimeDelta@webrtc@@@std@@VTimestamp@2@_N@Z
    MCAPI std::optional<class webrtc::TimeDelta> OnPeriodicRttUpdate(class webrtc::Timestamp, bool);

    // symbol: ??0RTCPReceiver@webrtc@@QEAA@AEBUConfiguration@RtpRtcpInterface@1@PEAVModuleRtpRtcpImpl2@1@@Z
    MCAPI RTCPReceiver(struct webrtc::RtpRtcpInterface::Configuration const&, class webrtc::ModuleRtpRtcpImpl2*);

    // symbol: ?RTT@RTCPReceiver@webrtc@@QEBAHIPEA_J000@Z
    MCAPI int RTT(uint, int64*, int64*, int64*, int64*) const;

    // symbol: ?RemoteSSRC@RTCPReceiver@webrtc@@QEBAIXZ
    MCAPI uint RemoteSSRC() const;

    // symbol: ?SetNonSenderRttMeasurement@RTCPReceiver@webrtc@@QEAAX_N@Z
    MCAPI void SetNonSenderRttMeasurement(bool);

    // symbol: ?SetRemoteSSRC@RTCPReceiver@webrtc@@QEAAXI@Z
    MCAPI void SetRemoteSSRC(uint);

    // symbol:
    // ?TmmbrReceived@RTCPReceiver@webrtc@@QEAA?AV?$vector@VTmmbItem@rtcp@webrtc@@V?$allocator@VTmmbItem@rtcp@webrtc@@@std@@@std@@XZ
    MCAPI std::vector<class webrtc::rtcp::TmmbItem> TmmbrReceived();

    // symbol: ?local_media_ssrc@RTCPReceiver@webrtc@@QEBAIXZ
    MCAPI uint local_media_ssrc() const;

    // symbol: ?set_local_media_ssrc@RTCPReceiver@webrtc@@QEAAXI@Z
    MCAPI void set_local_media_ssrc(uint);

    // symbol: ??1RTCPReceiver@webrtc@@QEAA@XZ
    MCAPI ~RTCPReceiver();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?FindOrCreateTmmbrInfo@RTCPReceiver@webrtc@@AEAAPEAUTmmbrInformation@12@I@Z
    MCAPI struct webrtc::RTCPReceiver::TmmbrInformation* FindOrCreateTmmbrInfo(uint);

    // symbol: ?GetTmmbrInformation@RTCPReceiver@webrtc@@AEAAPEAUTmmbrInformation@12@I@Z
    MCAPI struct webrtc::RTCPReceiver::TmmbrInformation* GetTmmbrInformation(uint);

    // symbol: ?HandleApp@RTCPReceiver@webrtc@@AEAAXAEBVCommonHeader@rtcp@2@PEAUPacketInformation@12@@Z
    MCAPI void HandleApp(class webrtc::rtcp::CommonHeader const&, struct webrtc::RTCPReceiver::PacketInformation*);

    // symbol: ?HandleBye@RTCPReceiver@webrtc@@AEAAXAEBVCommonHeader@rtcp@2@@Z
    MCAPI void HandleBye(class webrtc::rtcp::CommonHeader const&);

    // symbol: ?HandleFir@RTCPReceiver@webrtc@@AEAAXAEBVCommonHeader@rtcp@2@PEAUPacketInformation@12@@Z
    MCAPI void HandleFir(class webrtc::rtcp::CommonHeader const&, struct webrtc::RTCPReceiver::PacketInformation*);

    // symbol: ?HandleNack@RTCPReceiver@webrtc@@AEAAXAEBVCommonHeader@rtcp@2@PEAUPacketInformation@12@@Z
    MCAPI void HandleNack(class webrtc::rtcp::CommonHeader const&, struct webrtc::RTCPReceiver::PacketInformation*);

    // symbol: ?HandlePli@RTCPReceiver@webrtc@@AEAAXAEBVCommonHeader@rtcp@2@PEAUPacketInformation@12@@Z
    MCAPI void HandlePli(class webrtc::rtcp::CommonHeader const&, struct webrtc::RTCPReceiver::PacketInformation*);

    // symbol: ?HandlePsfbApp@RTCPReceiver@webrtc@@AEAAXAEBVCommonHeader@rtcp@2@PEAUPacketInformation@12@@Z
    MCAPI void HandlePsfbApp(class webrtc::rtcp::CommonHeader const&, struct webrtc::RTCPReceiver::PacketInformation*);

    // symbol: ?HandleReceiverReport@RTCPReceiver@webrtc@@AEAAXAEBVCommonHeader@rtcp@2@PEAUPacketInformation@12@@Z
    MCAPI void
    HandleReceiverReport(class webrtc::rtcp::CommonHeader const&, struct webrtc::RTCPReceiver::PacketInformation*);

    // symbol: ?HandleReportBlock@RTCPReceiver@webrtc@@AEAAXAEBVReportBlock@rtcp@2@PEAUPacketInformation@12@I@Z
    MCAPI void
    HandleReportBlock(class webrtc::rtcp::ReportBlock const&, struct webrtc::RTCPReceiver::PacketInformation*, uint);

    // symbol: ?HandleSdes@RTCPReceiver@webrtc@@AEAAXAEBVCommonHeader@rtcp@2@PEAUPacketInformation@12@@Z
    MCAPI void HandleSdes(class webrtc::rtcp::CommonHeader const&, struct webrtc::RTCPReceiver::PacketInformation*);

    // symbol: ?HandleSenderReport@RTCPReceiver@webrtc@@AEAAXAEBVCommonHeader@rtcp@2@PEAUPacketInformation@12@@Z
    MCAPI void
    HandleSenderReport(class webrtc::rtcp::CommonHeader const&, struct webrtc::RTCPReceiver::PacketInformation*);

    // symbol: ?HandleSrReq@RTCPReceiver@webrtc@@AEAAXAEBVCommonHeader@rtcp@2@PEAUPacketInformation@12@@Z
    MCAPI void HandleSrReq(class webrtc::rtcp::CommonHeader const&, struct webrtc::RTCPReceiver::PacketInformation*);

    // symbol: ?HandleTmmbn@RTCPReceiver@webrtc@@AEAAXAEBVCommonHeader@rtcp@2@PEAUPacketInformation@12@@Z
    MCAPI void HandleTmmbn(class webrtc::rtcp::CommonHeader const&, struct webrtc::RTCPReceiver::PacketInformation*);

    // symbol: ?HandleTmmbr@RTCPReceiver@webrtc@@AEAAXAEBVCommonHeader@rtcp@2@PEAUPacketInformation@12@@Z
    MCAPI void HandleTmmbr(class webrtc::rtcp::CommonHeader const&, struct webrtc::RTCPReceiver::PacketInformation*);

    // symbol: ?HandleTransportFeedback@RTCPReceiver@webrtc@@AEAAXAEBVCommonHeader@rtcp@2@PEAUPacketInformation@12@@Z
    MCAPI void
    HandleTransportFeedback(class webrtc::rtcp::CommonHeader const&, struct webrtc::RTCPReceiver::PacketInformation*);

    // symbol: ?HandleXr@RTCPReceiver@webrtc@@AEAAXAEBVCommonHeader@rtcp@2@PEAUPacketInformation@12@AEA_NAEAI@Z
    MCAPI void
    HandleXr(class webrtc::rtcp::CommonHeader const&, struct webrtc::RTCPReceiver::PacketInformation*, bool&, uint&);

    // symbol: ?HandleXrDlrrReportBlock@RTCPReceiver@webrtc@@AEAAXIAEBUReceiveTimeInfo@rtcp@2@@Z
    MCAPI void HandleXrDlrrReportBlock(uint, struct webrtc::rtcp::ReceiveTimeInfo const&);

    // symbol: ?HandleXrReceiveReferenceTime@RTCPReceiver@webrtc@@AEAAXIAEBVRrtr@rtcp@2@@Z
    MCAPI void HandleXrReceiveReferenceTime(uint, class webrtc::rtcp::Rrtr const&);

    // symbol: ?HandleXrTargetBitrate@RTCPReceiver@webrtc@@AEAAXIAEBVTargetBitrate@rtcp@2@PEAUPacketInformation@12@@Z
    MCAPI void
    HandleXrTargetBitrate(uint, class webrtc::rtcp::TargetBitrate const&, struct webrtc::RTCPReceiver::PacketInformation*);

    // symbol:
    // ?ParseCompoundPacket@RTCPReceiver@webrtc@@AEAA_NV?$ArrayView@$$CBE$0?BCGH@@rtc@@PEAUPacketInformation@12@@Z
    MCAPI bool
    ParseCompoundPacket(class rtc::ArrayView<uchar const, -4711>, struct webrtc::RTCPReceiver::PacketInformation*);

    // symbol: ?RtcpRrSequenceNumberTimeoutLocked@RTCPReceiver@webrtc@@AEAA_NVTimestamp@2@@Z
    MCAPI bool RtcpRrSequenceNumberTimeoutLocked(class webrtc::Timestamp);

    // symbol: ?RtcpRrTimeoutLocked@RTCPReceiver@webrtc@@AEAA_NVTimestamp@2@@Z
    MCAPI bool RtcpRrTimeoutLocked(class webrtc::Timestamp);

    // symbol: ?TriggerCallbacksFromRtcpPacket@RTCPReceiver@webrtc@@AEAAXAEBUPacketInformation@12@@Z
    MCAPI void TriggerCallbacksFromRtcpPacket(struct webrtc::RTCPReceiver::PacketInformation const&);

    // symbol: ?UpdateTmmbrRemoteIsAlive@RTCPReceiver@webrtc@@AEAAXI@Z
    MCAPI void UpdateTmmbrRemoteIsAlive(uint);

    // NOLINTEND
};

}; // namespace webrtc
