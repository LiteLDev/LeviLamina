#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace webrtc { class RaceChecker; }
// clang-format on

namespace webrtc::internal {

class RaceCheckerScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkae9556;
    ::ll::UntypedStorage<1, 1> mUnkd6b80e;
    // NOLINTEND

public:
    // prevent constructor by default
    RaceCheckerScope& operator=(RaceCheckerScope const&);
    RaceCheckerScope(RaceCheckerScope const&);
    RaceCheckerScope();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RaceCheckerScope(::webrtc::RaceChecker const* race_checker);

    MCNAPI bool RaceDetected() const;

    MCNAPI ~RaceCheckerScope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::webrtc::RaceChecker const* race_checker);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace webrtc::internal
