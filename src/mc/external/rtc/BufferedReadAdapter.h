#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Socket; }
// clang-format on

namespace rtc {

class BufferedReadAdapter {
public:
    // member functions
    // NOLINTBEGIN
    MCAPI void BufferInput(bool);

    MCAPI BufferedReadAdapter(::rtc::Socket*, uint64);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::Socket*, uint64);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForSocket();

    MCAPI static void** $vftableForHasSlots();
    // NOLINTEND
};

} // namespace rtc
