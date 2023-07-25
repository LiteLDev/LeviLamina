#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class MainProcScope {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_THREADING_MAINPROCSCOPE
public:
    MainProcScope& operator=(MainProcScope const&) = delete;
    MainProcScope(MainProcScope const&)            = delete;
#endif

public:
    /**
     * @symbol ??0MainProcScope\@Threading\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI MainProcScope();
    /**
     * @symbol ??1MainProcScope\@Threading\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI ~MainProcScope();
};

}; // namespace Bedrock::Threading
