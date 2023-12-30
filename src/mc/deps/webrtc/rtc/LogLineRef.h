#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace rtc {

class LogLineRef {
public:
    // prevent constructor by default
    LogLineRef& operator=(LogLineRef const&);
    LogLineRef(LogLineRef const&);
    LogLineRef();

public:
    // NOLINTBEGIN
    // symbol: ?DefaultLogLine@LogLineRef@rtc@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string DefaultLogLine() const;

    // symbol: ??1LogLineRef@rtc@@QEAA@XZ
    MCAPI ~LogLineRef();

    // NOLINTEND
};

}; // namespace rtc
