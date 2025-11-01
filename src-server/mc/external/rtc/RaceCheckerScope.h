#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RaceChecker; }
// clang-format on

namespace rtc::internal {

class RaceCheckerScope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk4a3b75;
    ::ll::UntypedStorage<1, 1> mUnk82672d;
    // NOLINTEND

public:
    // prevent constructor by default
    RaceCheckerScope& operator=(RaceCheckerScope const&);
    RaceCheckerScope(RaceCheckerScope const&);
    RaceCheckerScope();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RaceCheckerScope(::rtc::RaceChecker const* race_checker);

    MCNAPI bool RaceDetected() const;

    MCNAPI ~RaceCheckerScope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::RaceChecker const* race_checker);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
