#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/RtpRtcpInterface.h"
#include "mc/deps/webrtc/detail/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RtpPacketHistory; }
namespace webrtc { class RtpPacketSender; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { struct RtpExtensionSize; }
namespace webrtc { struct RtpState; }
// clang-format on

namespace webrtc {

class RTPSender {
public:
    // prevent constructor by default
    RTPSender& operator=(RTPSender const&);
    RTPSender(RTPSender const&);
    RTPSender();

public:
    // NOLINTBEGIN
    // symbol:
    // ?AllocatePacket@RTPSender@webrtc@@QEBA?AV?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class webrtc::RtpPacketToSend> AllocatePacket() const;

    // symbol: ?DeregisterRtpHeaderExtension@RTPSender@webrtc@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void DeregisterRtpHeaderExtension(std::string_view);

    // symbol:
    // ?EnqueuePackets@RTPSender@webrtc@@QEAAXV?$vector@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@@2@@std@@@Z
    MCAPI void EnqueuePackets(std::vector<std::unique_ptr<class webrtc::RtpPacketToSend>>);

    // symbol: ?ExpectedPerPacketOverhead@RTPSender@webrtc@@QEBA_KXZ
    MCAPI uint64 ExpectedPerPacketOverhead() const;

    // symbol: ?FecOrPaddingPacketMaxRtpHeaderLength@RTPSender@webrtc@@QEBA_KXZ
    MCAPI uint64 FecOrPaddingPacketMaxRtpHeaderLength() const;

    // symbol:
    // ?GeneratePadding@RTPSender@webrtc@@QEAA?AV?$vector@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@@2@@std@@_K_N1@Z
    MCAPI std::vector<std::unique_ptr<class webrtc::RtpPacketToSend>> GeneratePadding(uint64, bool, bool);

    // symbol: ?GetRtpState@RTPSender@webrtc@@QEBA?AURtpState@2@XZ
    MCAPI struct webrtc::RtpState GetRtpState() const;

    // symbol: ?GetRtxRtpState@RTPSender@webrtc@@QEBA?AURtpState@2@XZ
    MCAPI struct webrtc::RtpState GetRtxRtpState() const;

    // symbol: ?IsAudioConfigured@RTPSender@webrtc@@QEBA_NXZ
    MCAPI bool IsAudioConfigured() const;

    // symbol: ?MaxRtpPacketSize@RTPSender@webrtc@@QEBA_KXZ
    MCAPI uint64 MaxRtpPacketSize() const;

    // symbol: ?OnReceivedAckOnRtxSsrc@RTPSender@webrtc@@QEAAX_J@Z
    MCAPI void OnReceivedAckOnRtxSsrc(int64);

    // symbol: ?OnReceivedAckOnSsrc@RTPSender@webrtc@@QEAAX_J@Z
    MCAPI void OnReceivedAckOnSsrc(int64);

    // symbol: ?OnReceivedNack@RTPSender@webrtc@@QEAAXAEBV?$vector@GV?$allocator@G@std@@@std@@_J@Z
    MCAPI void OnReceivedNack(std::vector<ushort> const&, int64);

    // symbol:
    // ??0RTPSender@webrtc@@QEAA@AEBUConfiguration@RtpRtcpInterface@1@PEAVRtpPacketHistory@1@PEAVRtpPacketSender@1@@Z
    MCAPI
    RTPSender(struct webrtc::RtpRtcpInterface::Configuration const&, class webrtc::RtpPacketHistory*, class webrtc::RtpPacketSender*);

    // symbol: ?ReSendPacket@RTPSender@webrtc@@QEAAHG@Z
    MCAPI int ReSendPacket(ushort);

    // symbol: ?RegisterRtpHeaderExtension@RTPSender@webrtc@@QEAA_NV?$basic_string_view@DU?$char_traits@D@std@@@std@@H@Z
    MCAPI bool RegisterRtpHeaderExtension(std::string_view, int);

    // symbol: ?RtxStatus@RTPSender@webrtc@@QEBAHXZ
    MCAPI int RtxStatus() const;

    // symbol: ?SendingMedia@RTPSender@webrtc@@QEBA_NXZ
    MCAPI bool SendingMedia() const;

    // symbol: ?SetExtmapAllowMixed@RTPSender@webrtc@@QEAAX_N@Z
    MCAPI void SetExtmapAllowMixed(bool);

    // symbol: ?SetMaxRtpPacketSize@RTPSender@webrtc@@QEAAX_K@Z
    MCAPI void SetMaxRtpPacketSize(uint64);

    // symbol: ?SetMid@RTPSender@webrtc@@QEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    MCAPI void SetMid(std::string_view);

    // symbol: ?SetRtpState@RTPSender@webrtc@@QEAAXAEBURtpState@2@@Z
    MCAPI void SetRtpState(struct webrtc::RtpState const&);

    // symbol: ?SetRtxPayloadType@RTPSender@webrtc@@QEAAXHH@Z
    MCAPI void SetRtxPayloadType(int, int);

    // symbol: ?SetRtxRtpState@RTPSender@webrtc@@QEAAXAEBURtpState@2@@Z
    MCAPI void SetRtxRtpState(struct webrtc::RtpState const&);

    // symbol: ?SetRtxStatus@RTPSender@webrtc@@QEAAXH@Z
    MCAPI void SetRtxStatus(int);

    // symbol: ?SetSendingMediaStatus@RTPSender@webrtc@@QEAAX_N@Z
    MCAPI void SetSendingMediaStatus(bool);

    // symbol: ?SetTimestampOffset@RTPSender@webrtc@@QEAAXI@Z
    MCAPI void SetTimestampOffset(uint);

    // symbol: ?SupportsPadding@RTPSender@webrtc@@QEBA_NXZ
    MCAPI bool SupportsPadding() const;

    // symbol: ?SupportsRtxPayloadPadding@RTPSender@webrtc@@QEBA_NXZ
    MCAPI bool SupportsRtxPayloadPadding() const;

    // symbol: ?TimestampOffset@RTPSender@webrtc@@QEBAIXZ
    MCAPI uint TimestampOffset() const;

    // symbol: ??1RTPSender@webrtc@@QEAA@XZ
    MCAPI ~RTPSender();

    // symbol: ?AudioExtensionSizes@RTPSender@webrtc@@SA?AV?$ArrayView@$$CBURtpExtensionSize@webrtc@@$0?BCGH@@rtc@@XZ
    MCAPI static class rtc::ArrayView<struct webrtc::RtpExtensionSize const, -4711> AudioExtensionSizes();

    // symbol: ?FecExtensionSizes@RTPSender@webrtc@@SA?AV?$ArrayView@$$CBURtpExtensionSize@webrtc@@$0?BCGH@@rtc@@XZ
    MCAPI static class rtc::ArrayView<struct webrtc::RtpExtensionSize const, -4711> FecExtensionSizes();

    // symbol: ?VideoExtensionSizes@RTPSender@webrtc@@SA?AV?$ArrayView@$$CBURtpExtensionSize@webrtc@@$0?BCGH@@rtc@@XZ
    MCAPI static class rtc::ArrayView<struct webrtc::RtpExtensionSize const, -4711> VideoExtensionSizes();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?BuildRtxPacket@RTPSender@webrtc@@AEAA?AV?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@AEBVRtpPacketToSend@2@@Z
    MCAPI std::unique_ptr<class webrtc::RtpPacketToSend> BuildRtxPacket(class webrtc::RtpPacketToSend const&);

    // symbol: ?UpdateHeaderSizes@RTPSender@webrtc@@AEAAXXZ
    MCAPI void UpdateHeaderSizes();

    // NOLINTEND
};

}; // namespace webrtc
