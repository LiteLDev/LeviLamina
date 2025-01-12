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
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::optional<::webrtc::DataSize> CongestionWindowInitialDataWindow() const;

    MCAPI uint CongestionWindowMinPushbackTargetBitrateBps() const;

    MCAPI int64 GetCongestionWindowAdditionalTimeMs() const;

    MCAPI explicit RateControlSettings(::webrtc::FieldTrialsView const* const);

    MCAPI bool UseCongestionWindow() const;

    MCAPI bool UseCongestionWindowDropFrameOnly() const;

    MCAPI bool UseCongestionWindowPushback() const;

    MCAPI ~RateControlSettings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::webrtc::RateControlSettings ParseFromKeyValueConfig(::webrtc::FieldTrialsView const* const);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::webrtc::FieldTrialsView const* const);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
