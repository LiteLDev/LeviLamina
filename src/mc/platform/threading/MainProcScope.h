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
    MCAPI MainProcScope();

    MCAPI ~MainProcScope();

    // NOLINTEND
};

}; // namespace Bedrock::Threading
