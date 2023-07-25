#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BedrockLog { enum class LogChannel; }
// clang-format on

namespace BedrockLog {

struct CategoryLogFile {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCKLOG_CATEGORYLOGFILE
public:
    CategoryLogFile& operator=(CategoryLogFile const&) = delete;
    CategoryLogFile(CategoryLogFile const&)            = delete;
#endif

public:
    /**
     * @symbol ?AddChannel\@CategoryLogFile\@BedrockLog\@\@QEAAXW4LogChannel\@2\@\@Z
     */
    MCAPI void AddChannel(enum class BedrockLog::LogChannel);
    /**
     * @symbol ??0CategoryLogFile\@BedrockLog\@\@QEAA\@XZ
     */
    MCAPI CategoryLogFile();
    /**
     * @symbol ??1CategoryLogFile\@BedrockLog\@\@QEAA\@XZ
     */
    MCAPI ~CategoryLogFile();
};

}; // namespace BedrockLog
