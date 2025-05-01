#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc::rtcp { class CommonHeader; }
// clang-format on

namespace webrtc::rtcp {

class Fir {
public:
    // Fir inner types declare
    // clang-format off
    struct Request;
    // clang-format on

    // Fir inner types define
    struct Request {};

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Fir();

    MCNAPI bool Parse(::webrtc::rtcp::CommonHeader const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace webrtc::rtcp
