#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/diagnostics/bedrock_log/LogChannel.h"

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$();

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace BedrockLog
