#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace BedrockLog { struct CategoryLogFile; }
// clang-format on

namespace BedrockLog {

struct CategoryLogs : public ::std::array<::BedrockLog::CategoryLogFile, 7> {
public:
    // prevent constructor by default
    CategoryLogs& operator=(CategoryLogs const&);
    CategoryLogs(CategoryLogs const&);
    CategoryLogs();
};

} // namespace BedrockLog
