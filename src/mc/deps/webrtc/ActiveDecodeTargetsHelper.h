#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/webrtc/detail/ArrayView.h"

namespace webrtc {

class ActiveDecodeTargetsHelper {
public:
    // prevent constructor by default
    ActiveDecodeTargetsHelper& operator=(ActiveDecodeTargetsHelper const&);
    ActiveDecodeTargetsHelper(ActiveDecodeTargetsHelper const&);
    ActiveDecodeTargetsHelper();

public:
    // NOLINTBEGIN
    // symbol:
    // ?OnFrame@ActiveDecodeTargetsHelper@webrtc@@QEAAXV?$ArrayView@$$CBH$0?BCGH@@rtc@@V?$bitset@$0CA@@std@@_N_J0@Z
    MCAPI void
    OnFrame(class rtc::ArrayView<int const, -4711>, std::bitset<32>, bool, int64, class rtc::ArrayView<int const, -4711>);

    // NOLINTEND
};

}; // namespace webrtc
