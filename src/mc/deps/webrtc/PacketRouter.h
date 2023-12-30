#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/PacingController.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataSize; }
namespace webrtc { class RtcpFeedbackSenderInterface; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class RtpRtcpInterface; }
namespace webrtc { struct PacedPacketInfo; }
// clang-format on

namespace webrtc {

class PacketRouter : public ::webrtc::PacingController::PacketSender {
public:
    // prevent constructor by default
    PacketRouter& operator=(PacketRouter const&);
    PacketRouter(PacketRouter const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PacketRouter@webrtc@@UEAA@XZ
    virtual ~PacketRouter();

    // vIndex: 1, symbol:
    // ?SendPacket@PacketRouter@webrtc@@UEAAXV?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@AEBUPacedPacketInfo@2@@Z
    virtual void SendPacket(std::unique_ptr<class webrtc::RtpPacketToSend>, struct webrtc::PacedPacketInfo const&);

    // vIndex: 2, symbol:
    // ?FetchFec@PacketRouter@webrtc@@UEAA?AV?$vector@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@@2@@std@@XZ
    virtual std::vector<std::unique_ptr<class webrtc::RtpPacketToSend>> FetchFec();

    // vIndex: 3, symbol:
    // ?GeneratePadding@PacketRouter@webrtc@@UEAA?AV?$vector@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@@2@@std@@VDataSize@2@@Z
    virtual std::vector<std::unique_ptr<class webrtc::RtpPacketToSend>> GeneratePadding(class webrtc::DataSize);

    // vIndex: 4, symbol: ?OnAbortedRetransmissions@PacketRouter@webrtc@@UEAAXIV?$ArrayView@$$CBG$0?BCGH@@rtc@@@Z
    virtual void OnAbortedRetransmissions(uint, class rtc::ArrayView<ushort const, -4711>);

    // vIndex: 5, symbol: ?GetRtxSsrcForMedia@PacketRouter@webrtc@@UEBA?AV?$optional@I@std@@I@Z
    virtual std::optional<uint> GetRtxSsrcForMedia(uint) const;

    // symbol: ?AddSendRtpModule@PacketRouter@webrtc@@QEAAXPEAVRtpRtcpInterface@2@_N@Z
    MCAPI void AddSendRtpModule(class webrtc::RtpRtcpInterface*, bool);

    // symbol: ??0PacketRouter@webrtc@@QEAA@XZ
    MCAPI PacketRouter();

    // symbol: ??0PacketRouter@webrtc@@QEAA@G@Z
    MCAPI explicit PacketRouter(ushort);

    // symbol: ?RemoveSendRtpModule@PacketRouter@webrtc@@QEAAXPEAVRtpRtcpInterface@2@@Z
    MCAPI void RemoveSendRtpModule(class webrtc::RtpRtcpInterface*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?AddRembModuleCandidate@PacketRouter@webrtc@@AEAAXPEAVRtcpFeedbackSenderInterface@2@_N@Z
    MCAPI void AddRembModuleCandidate(class webrtc::RtcpFeedbackSenderInterface*, bool);

    // symbol: ?AddSendRtpModuleToMap@PacketRouter@webrtc@@AEAAXPEAVRtpRtcpInterface@2@I@Z
    MCAPI void AddSendRtpModuleToMap(class webrtc::RtpRtcpInterface*, uint);

    // symbol: ?DetermineActiveRembModule@PacketRouter@webrtc@@AEAAXXZ
    MCAPI void DetermineActiveRembModule();

    // symbol: ?MaybeRemoveRembModuleCandidate@PacketRouter@webrtc@@AEAAXPEAVRtcpFeedbackSenderInterface@2@_N@Z
    MCAPI void MaybeRemoveRembModuleCandidate(class webrtc::RtcpFeedbackSenderInterface*, bool);

    // symbol: ?RemoveSendRtpModuleFromMap@PacketRouter@webrtc@@AEAAXI@Z
    MCAPI void RemoveSendRtpModuleFromMap(uint);

    // symbol: ?UnsetActiveRembModule@PacketRouter@webrtc@@AEAAXXZ
    MCAPI void UnsetActiveRembModule();

    // NOLINTEND
};

}; // namespace webrtc
