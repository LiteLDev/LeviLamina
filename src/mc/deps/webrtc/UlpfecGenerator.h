#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/VideoFecGenerator.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class Clock; }
namespace webrtc { class DataRate; }
namespace webrtc { class ForwardErrorCorrection; }
namespace webrtc { class RtpPacketToSend; }
namespace webrtc { class VideoFecGenerator; }
namespace webrtc { struct FecProtectionParams; }
namespace webrtc { struct RtpState; }
// clang-format on

namespace webrtc {

class UlpfecGenerator : public ::webrtc::VideoFecGenerator {
public:
    // UlpfecGenerator inner types declare
    // clang-format off
    class Params;
    // clang-format on

    // UlpfecGenerator inner types define
    class Params {
    public:
        // prevent constructor by default
        Params& operator=(Params const&);
        Params(Params const&);

    public:
        // NOLINTBEGIN
        // symbol: ??0Params@UlpfecGenerator@webrtc@@QEAA@XZ
        MCAPI Params();

        // symbol: ??0Params@UlpfecGenerator@webrtc@@QEAA@UFecProtectionParams@2@0@Z
        MCAPI Params(struct webrtc::FecProtectionParams, struct webrtc::FecProtectionParams);

        // NOLINTEND
    };

public:
    // prevent constructor by default
    UlpfecGenerator& operator=(UlpfecGenerator const&);
    UlpfecGenerator(UlpfecGenerator const&);
    UlpfecGenerator();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1UlpfecGenerator@webrtc@@UEAA@XZ
    virtual ~UlpfecGenerator();

    // vIndex: 1, symbol: ?GetFecType@UlpfecGenerator@webrtc@@UEBA?AW4FecType@VideoFecGenerator@2@XZ
    virtual ::webrtc::VideoFecGenerator::FecType GetFecType() const;

    // vIndex: 2, symbol: ?FecSsrc@UlpfecGenerator@webrtc@@UEAA?AV?$optional@I@std@@XZ
    virtual std::optional<uint> FecSsrc();

    // vIndex: 3, symbol: ?MaxPacketOverhead@UlpfecGenerator@webrtc@@UEBA_KXZ
    virtual uint64 MaxPacketOverhead() const;

    // vIndex: 4, symbol: ?CurrentFecRate@UlpfecGenerator@webrtc@@UEBA?AVDataRate@2@XZ
    virtual class webrtc::DataRate CurrentFecRate() const;

    // vIndex: 5, symbol: ?SetProtectionParameters@UlpfecGenerator@webrtc@@UEAAXAEBUFecProtectionParams@2@0@Z
    virtual void
    SetProtectionParameters(struct webrtc::FecProtectionParams const&, struct webrtc::FecProtectionParams const&);

    // vIndex: 6, symbol: ?AddPacketAndGenerateFec@UlpfecGenerator@webrtc@@UEAAXAEBVRtpPacketToSend@2@@Z
    virtual void AddPacketAndGenerateFec(class webrtc::RtpPacketToSend const&);

    // vIndex: 7, symbol:
    // ?GetFecPackets@UlpfecGenerator@webrtc@@UEAA?AV?$vector@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@V?$allocator@V?$unique_ptr@VRtpPacketToSend@webrtc@@U?$default_delete@VRtpPacketToSend@webrtc@@@std@@@std@@@2@@std@@XZ
    virtual std::vector<std::unique_ptr<class webrtc::RtpPacketToSend>> GetFecPackets();

    // vIndex: 8, symbol: ?GetRtpState@UlpfecGenerator@webrtc@@UEAA?AV?$optional@URtpState@webrtc@@@std@@XZ
    virtual std::optional<struct webrtc::RtpState> GetRtpState();

    // symbol: ?CurrentParams@UlpfecGenerator@webrtc@@QEBAAEBUFecProtectionParams@2@XZ
    MCAPI struct webrtc::FecProtectionParams const& CurrentParams() const;

    // symbol: ??0UlpfecGenerator@webrtc@@QEAA@HHPEAVClock@1@@Z
    MCAPI UlpfecGenerator(int, int, class webrtc::Clock*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?ExcessOverheadBelowMax@UlpfecGenerator@webrtc@@AEBA_NXZ
    MCAPI bool ExcessOverheadBelowMax() const;

    // symbol: ?MinimumMediaPacketsReached@UlpfecGenerator@webrtc@@AEBA_NXZ
    MCAPI bool MinimumMediaPacketsReached() const;

    // symbol: ?Overhead@UlpfecGenerator@webrtc@@AEBAHXZ
    MCAPI int Overhead() const;

    // symbol: ?ResetState@UlpfecGenerator@webrtc@@AEAAXXZ
    MCAPI void ResetState();

    // symbol:
    // ??0UlpfecGenerator@webrtc@@AEAA@V?$unique_ptr@VForwardErrorCorrection@webrtc@@U?$default_delete@VForwardErrorCorrection@webrtc@@@std@@@std@@PEAVClock@1@@Z
    MCAPI UlpfecGenerator(std::unique_ptr<class webrtc::ForwardErrorCorrection>, class webrtc::Clock*);

    // NOLINTEND
};

}; // namespace webrtc
