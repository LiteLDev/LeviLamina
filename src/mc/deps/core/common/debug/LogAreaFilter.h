#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
enum class LogAreaID;
// clang-format on

namespace BedrockLog {

class LogAreaFilter {

public:
    // prevent constructor by default
    LogAreaFilter& operator=(LogAreaFilter const&) = delete;
    LogAreaFilter(LogAreaFilter const&)            = delete;
    LogAreaFilter()                                = delete;

public:
    /**
     * @symbol ?toggleFilter\@LogAreaFilter\@BedrockLog\@\@QEAAXW4LogAreaID\@\@\@Z
     */
    MCAPI void toggleFilter(enum class LogAreaID); // NOLINT
};

}; // namespace BedrockLog
