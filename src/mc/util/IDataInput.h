#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataInput {

public:
    // prevent constructor by default
    IDataInput& operator=(IDataInput const&) = delete;
    IDataInput(IDataInput const&)            = delete;
    IDataInput()                             = delete;
};
