#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

class MainProcScope {
public:
    // prevent constructor by default
    MainProcScope& operator=(MainProcScope const&);
    MainProcScope(MainProcScope const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MainProcScope();

    MCAPI ~MainProcScope();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Threading
