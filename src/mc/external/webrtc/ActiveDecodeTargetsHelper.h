#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct ActiveDecodeTargetsHelper {
public:
    // prevent constructor by default
    ActiveDecodeTargetsHelper& operator=(ActiveDecodeTargetsHelper const&);
    ActiveDecodeTargetsHelper(ActiveDecodeTargetsHelper const&);
    ActiveDecodeTargetsHelper();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void OnFrame(::rtc::ArrayView<int const>, ::std::bitset<32>, bool, int64, ::rtc::ArrayView<int const>);
    // NOLINTEND
};

} // namespace webrtc
