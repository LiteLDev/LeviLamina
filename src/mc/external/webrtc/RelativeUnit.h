#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtc_units_impl {

template <typename T0>
class RelativeUnit {
public:
    // prevent constructor by default
    RelativeUnit& operator=(RelativeUnit const&);
    RelativeUnit(RelativeUnit const&);
    RelativeUnit();
};

} // namespace webrtc::rtc_units_impl
