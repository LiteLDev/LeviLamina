#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataOutput {

public:
    // prevent constructor by default
    IDataOutput& operator=(IDataOutput const&) = delete;
    IDataOutput(IDataOutput const&)            = delete;
    IDataOutput()                              = delete;
};
