#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RaceChecker; }
// clang-format on

namespace rtc::internal {

class RaceCheckerScope {
public:
    // prevent constructor by default
    RaceCheckerScope& operator=(RaceCheckerScope const&);
    RaceCheckerScope(RaceCheckerScope const&);
    RaceCheckerScope();

public:
    // NOLINTBEGIN
    // symbol: ??0RaceCheckerScope@internal@rtc@@QEAA@PEBVRaceChecker@2@@Z
    MCAPI explicit RaceCheckerScope(class rtc::RaceChecker const*);

    // symbol: ?RaceDetected@RaceCheckerScope@internal@rtc@@QEBA_NXZ
    MCAPI bool RaceDetected() const;

    // symbol: ??1RaceCheckerScope@internal@rtc@@QEAA@XZ
    MCAPI ~RaceCheckerScope();

    // NOLINTEND
};

}; // namespace rtc::internal
