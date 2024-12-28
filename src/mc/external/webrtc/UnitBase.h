#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc::rtc_units_impl {

template <typename T0>
class UnitBase {
public:
    // prevent constructor by default
    UnitBase& operator=(UnitBase const&);
    UnitBase(UnitBase const&);
    UnitBase();
};

} // namespace webrtc::rtc_units_impl
