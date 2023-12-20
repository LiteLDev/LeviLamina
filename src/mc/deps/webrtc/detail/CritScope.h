#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace rtc { class RecursiveCriticalSection; }
// clang-format on

namespace rtc {

class CritScope {
public:
    // prevent constructor by default
    CritScope& operator=(CritScope const&);
    CritScope(CritScope const&);
    CritScope();

public:
    // NOLINTBEGIN
    // symbol: ??0CritScope@rtc@@QEAA@PEBVRecursiveCriticalSection@1@@Z
    MCAPI explicit CritScope(class rtc::RecursiveCriticalSection const*);

    // symbol: ??1CritScope@rtc@@QEAA@XZ
    MCAPI ~CritScope();

    // NOLINTEND
};

}; // namespace rtc
