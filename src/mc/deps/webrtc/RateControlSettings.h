#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class DataSize; }
namespace webrtc { class FieldTrialsView; }
// clang-format on

namespace webrtc {

class RateControlSettings {
public:
    // prevent constructor by default
    RateControlSettings& operator=(RateControlSettings const&);
    RateControlSettings(RateControlSettings const&);
    RateControlSettings();

public:
    // NOLINTBEGIN
    // symbol:
    // ?CongestionWindowInitialDataWindow@RateControlSettings@webrtc@@QEBA?AV?$optional@VDataSize@webrtc@@@std@@XZ
    MCAPI std::optional<class webrtc::DataSize> CongestionWindowInitialDataWindow() const;

    // symbol: ?CongestionWindowMinPushbackTargetBitrateBps@RateControlSettings@webrtc@@QEBAIXZ
    MCAPI uint CongestionWindowMinPushbackTargetBitrateBps() const;

    // symbol: ?GetCongestionWindowAdditionalTimeMs@RateControlSettings@webrtc@@QEBA_JXZ
    MCAPI int64 GetCongestionWindowAdditionalTimeMs() const;

    // symbol: ?UseCongestionWindow@RateControlSettings@webrtc@@QEBA_NXZ
    MCAPI bool UseCongestionWindow() const;

    // symbol: ?UseCongestionWindowDropFrameOnly@RateControlSettings@webrtc@@QEBA_NXZ
    MCAPI bool UseCongestionWindowDropFrameOnly() const;

    // symbol: ?UseCongestionWindowPushback@RateControlSettings@webrtc@@QEBA_NXZ
    MCAPI bool UseCongestionWindowPushback() const;

    // symbol: ??1RateControlSettings@webrtc@@QEAA@XZ
    MCAPI ~RateControlSettings();

    // symbol: ?ParseFromKeyValueConfig@RateControlSettings@webrtc@@SA?AV12@QEBVFieldTrialsView@2@@Z
    MCAPI static class webrtc::RateControlSettings ParseFromKeyValueConfig(class webrtc::FieldTrialsView const* const);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ??0RateControlSettings@webrtc@@AEAA@QEBVFieldTrialsView@1@@Z
    MCAPI explicit RateControlSettings(class webrtc::FieldTrialsView const* const);

    // NOLINTEND
};

}; // namespace webrtc
