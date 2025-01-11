#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class LossNotification {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI LossNotification();

    MCAPI bool Parse(::webrtc::rtcp::CommonHeader const&);

    MCAPI bool Set(ushort, ushort, bool);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
