#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BedrockLog {

class LogAreaFilter : public ::std::bitset<49> {
public:
    // prevent constructor by default
    LogAreaFilter& operator=(LogAreaFilter const&);
    LogAreaFilter(LogAreaFilter const&);
    LogAreaFilter();
};

} // namespace BedrockLog
