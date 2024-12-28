#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RaceChecker; }
// clang-format on

namespace rtc::internal {

struct RaceCheckerScope {
public:
    // prevent constructor by default
    RaceCheckerScope& operator=(RaceCheckerScope const&);
    RaceCheckerScope(RaceCheckerScope const&);
    RaceCheckerScope();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RaceCheckerScope(::rtc::RaceChecker const*);

    MCAPI bool RaceDetected() const;

    MCAPI ~RaceCheckerScope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::rtc::RaceChecker const*);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace rtc::internal
