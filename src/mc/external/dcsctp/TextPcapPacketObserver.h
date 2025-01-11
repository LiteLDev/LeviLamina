#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace dcsctp { class TimeMs; }
// clang-format on

namespace dcsctp {

class TextPcapPacketObserver {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void
        PrintPacket(::std::string_view, ::std::string_view, ::dcsctp::TimeMs, ::rtc::ArrayView<uchar const>);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace dcsctp
