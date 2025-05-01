#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RecursiveCriticalSection; }
// clang-format on

namespace rtc {

struct CritScope {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CritScope(::rtc::RecursiveCriticalSection const*);

    MCNAPI ~CritScope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::RecursiveCriticalSection const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
