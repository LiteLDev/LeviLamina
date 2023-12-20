#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace webrtc {

class AbsoluteCaptureTimeInterpolator {
public:
    // prevent constructor by default
    AbsoluteCaptureTimeInterpolator& operator=(AbsoluteCaptureTimeInterpolator const&);
    AbsoluteCaptureTimeInterpolator(AbsoluteCaptureTimeInterpolator const&);
    AbsoluteCaptureTimeInterpolator();

public:
    // NOLINTBEGIN
    // symbol: ?GetSource@AbsoluteCaptureTimeInterpolator@webrtc@@SAIIV?$ArrayView@$$CBI$0?BCGH@@rtc@@@Z
    MCAPI static uint GetSource(uint, class rtc::ArrayView<uint const, -4711>);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?InterpolateAbsoluteCaptureTimestamp@AbsoluteCaptureTimeInterpolator@webrtc@@CA_KIII_K@Z
    MCAPI static uint64 InterpolateAbsoluteCaptureTimestamp(uint, uint, uint, uint64);

    // NOLINTEND
};

}; // namespace webrtc
