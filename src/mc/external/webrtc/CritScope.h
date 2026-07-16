#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RecursiveCriticalSection; }
// clang-format on

namespace webrtc {

class CritScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk22c23f;
    // NOLINTEND

public:
    // prevent constructor by default
    CritScope& operator=(CritScope const&);
    CritScope(CritScope const&);
    CritScope();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit CritScope(::webrtc::RecursiveCriticalSection const* cs);

    MCNAPI ~CritScope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RecursiveCriticalSection const* cs);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc
