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
    MCAPI explicit CritScope(::rtc::RecursiveCriticalSection const*);

    MCAPI ~CritScope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::RecursiveCriticalSection const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc
