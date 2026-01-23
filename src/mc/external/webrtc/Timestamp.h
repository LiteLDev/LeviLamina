#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/webrtc/UnitBase.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class TimeDelta; }
// clang-format on

namespace webrtc {

class Timestamp : public ::webrtc::rtc_units_impl::UnitBase<::webrtc::Timestamp> {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::webrtc::TimeDelta operator-(::webrtc::Timestamp other) const;
    // NOLINTEND
};

} // namespace webrtc
