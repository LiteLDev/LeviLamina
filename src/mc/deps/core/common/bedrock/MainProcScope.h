#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class MainProcScope {
public:
    // prevent constructor by default
    MainProcScope& operator=(MainProcScope const&);
    MainProcScope(MainProcScope const&);

public:
    // NOLINTBEGIN
    // symbol: ??0MainProcScope@Threading@Bedrock@@QEAA@XZ
    MCAPI MainProcScope();

    // symbol: ??1MainProcScope@Threading@Bedrock@@QEAA@XZ
    MCAPI ~MainProcScope();

    // NOLINTEND
};

}; // namespace Bedrock::Threading
