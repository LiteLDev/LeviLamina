#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RaceChecker; }
// clang-format on

namespace rtc::internal {

struct RaceCheckerScope {
public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RaceCheckerScope(::rtc::RaceChecker const*);

    MCNAPI bool RaceDetected() const;

    MCNAPI ~RaceCheckerScope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::rtc::RaceChecker const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc::internal
