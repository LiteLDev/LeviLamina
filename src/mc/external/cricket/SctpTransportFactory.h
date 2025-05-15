#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class Thread; }
// clang-format on

namespace cricket {

class SctpTransportFactory {
public:
    // prevent constructor by default
    SctpTransportFactory();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit SctpTransportFactory(::rtc::Thread*);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::Thread*);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cricket
