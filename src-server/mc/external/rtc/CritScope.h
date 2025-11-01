#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RecursiveCriticalSection; }
// clang-format on

namespace rtc {

class CritScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf3c6cf;
    // NOLINTEND

public:
    // prevent constructor by default
    CritScope& operator=(CritScope const&);
    CritScope(CritScope const&);
    CritScope();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CritScope(::rtc::RecursiveCriticalSection const* cs);

    MCNAPI ~CritScope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::RecursiveCriticalSection const* cs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
