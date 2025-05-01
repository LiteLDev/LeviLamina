#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct ActiveDecodeTargetsHelper {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void OnFrame(::rtc::ArrayView<int const>, ::std::bitset<32>, bool, int64, ::rtc::ArrayView<int const>);
    // NOLINTEND
};

} // namespace webrtc
