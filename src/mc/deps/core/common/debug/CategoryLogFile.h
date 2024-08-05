#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/debug/LogChannel.h"

namespace BedrockLog {

struct CategoryLogFile {
public:
    // prevent constructor by default
    CategoryLogFile& operator=(CategoryLogFile const&);
    CategoryLogFile(CategoryLogFile const&);

public:
    // NOLINTBEGIN
    MCAPI void AddChannel(::BedrockLog::LogChannel channel);

    MCAPI CategoryLogFile();

    MCAPI ~CategoryLogFile();

    // NOLINTEND
};

}; // namespace BedrockLog
