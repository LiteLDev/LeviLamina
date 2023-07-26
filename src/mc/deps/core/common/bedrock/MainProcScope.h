#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class MainProcScope {

public:
    // prevent constructor by default
    MainProcScope& operator=(MainProcScope const&) = delete;
    MainProcScope(MainProcScope const&)            = delete;

public:
    /**
     * @symbol ??0MainProcScope\@Threading\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI MainProcScope(); // NOLINT
    /**
     * @symbol ??1MainProcScope\@Threading\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~MainProcScope(); // NOLINT
};

}; // namespace Bedrock::Threading
