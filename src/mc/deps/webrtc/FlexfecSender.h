#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/VideoFecGenerator.h"
#include "mc/deps/webrtc/rtc/ArrayView.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class DataRate; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class VideoFecGenerator; }
namespace webrtc { struct FecProtectionParams; }
namespace webrtc { struct RtpExtension; }
namespace webrtc { struct RtpExtensionSize; }
namespace webrtc { struct RtpState; }
// clang-format on

namespace webrtc {

class FlexfecSender : public ::webrtc::VideoFecGenerator {
public:
    // prevent constructor by default
    FlexfecSender& operator=(FlexfecSender const&);
    FlexfecSender(FlexfecSender const&);
    FlexfecSender();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1FlexfecSender@webrtc@@UEAA@XZ
    virtual ~FlexfecSender();

    // vIndex: 1, symbol: ?GetFecType@FlexfecSender@webrtc@@UEBA?AW4FecType@VideoFecGenerator@2@XZ
    virtual ::webrtc::VideoFecGenerator::FecType GetFecType() const;

    // vIndex: 2, symbol: ?FecSsrc@FlexfecSender@webrtc@@UEAA?AV?$optional@I@std@@XZ
    virtual std::optional<uint> FecSsrc();

    // vIndex: 3, symbol: ?MaxPacketOverhead@FlexfecSender@webrtc@@UEBA_KXZ
    virtual uint64 MaxPacketOverhead() const;

    // vIndex: 4, symbol: ?CurrentFecRate@FlexfecSender@webrtc@@UEBA?AVDataRate@2@XZ
    virtual class webrtc::DataRate CurrentFecRate() const;

    // vIndex: 5, symbol: ?SetProtectionParameters@FlexfecSender@webrtc@@UEAAXAEBUFecProtectionParams@2@0@Z
    virtual void
    SetProtectionParameters(struct webrtc::FecProtectionParams const&, struct webrtc::FecProtectionParams const&);

    // vIndex: 6, symbol: ?AddPacketAndGenerateFec@FlexfecSender@webrtc@@UEAAXAEBVRtpPacketToSend@2@@Z
    virtual void AddPacketAndGenerateFec(class webrtc::RtpPacketToSend const&);

    // vIndex: 7, symbol:
    // ?GetFecPackets@FlexfecSender@webrtc@@UEAA?AV?$vector@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@@2@@std@@XZ
    virtual std::vector<std::unique_ptr<class webrtc::RtpPacketToSend>> GetFecPackets();

    // vIndex: 8, symbol: ?GetRtpState@FlexfecSender@webrtc@@UEAA?AV?$optional@URtpState@webrtc@@@std@@XZ
    virtual std::optional<struct webrtc::RtpState> GetRtpState();

    // symbol:
    // ??0FlexfecSender@webrtc@@QEAA@HIIV?$basic_string_view@DU?$char_traits@D@std@@@std@@AEBV?$vector@URtpExtension@webrtc@@V?$allocator@URtpExtension@webrtc@@@std@@@3@V?$ArrayView@$$CBURtpExtensionSize@webrtc@@$0?BCGH@@rtc@@PEBURtpState@1@PEAVClock@1@@Z
    MCAPI
    FlexfecSender(int, uint, uint, std::string_view, std::vector<struct webrtc::RtpExtension> const&, class rtc::ArrayView<struct webrtc::RtpExtensionSize const, -4711>, struct webrtc::RtpState const*, class webrtc::Clock*);

    // NOLINTEND
};

}; // namespace webrtc
