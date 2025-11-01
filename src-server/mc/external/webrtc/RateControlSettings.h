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
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnka68715;
    ::ll::UntypedStorage<8, 48> mUnk765215;
    // NOLINTEND

public:
    // prevent constructor by default
    RateControlSettings& operator=(RateControlSettings const&);
    RateControlSettings(RateControlSettings const&);
    RateControlSettings();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::optional<::webrtc::DataSize> CongestionWindowInitialDataWindow() const;

    MCNAPI uint CongestionWindowMinPushbackTargetBitrateBps() const;

    MCNAPI int64 GetCongestionWindowAdditionalTimeMs() const;

    MCNAPI explicit RateControlSettings(::webrtc::FieldTrialsView const* const key_value_config);

    MCNAPI bool UseCongestionWindow() const;

    MCNAPI bool UseCongestionWindowDropFrameOnly() const;

    MCNAPI bool UseCongestionWindowPushback() const;

    MCNAPI ~RateControlSettings();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::webrtc::RateControlSettings ParseFromKeyValueConfig(::webrtc::FieldTrialsView const* const key_value_config);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::FieldTrialsView const* const key_value_config);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
