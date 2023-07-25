#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BedrockLog {

class LogAreaFilter {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCKLOG_LOGAREAFILTER
public:
    LogAreaFilter& operator=(LogAreaFilter const&) = delete;
    LogAreaFilter(LogAreaFilter const&)            = delete;
    LogAreaFilter()                                = delete;
#endif

public:
    /**
     * @symbol ?toggleFilter\@LogAreaFilter\@BedrockLog\@\@QEAAXW4LogAreaID\@\@\@Z
     */
    MCAPI void toggleFilter(enum class LogAreaID);
};

}; // namespace BedrockLog
