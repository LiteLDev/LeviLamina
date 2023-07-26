#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPathBlockSource {

public:
    // prevent constructor by default
    IPathBlockSource& operator=(IPathBlockSource const&) = delete;
    IPathBlockSource(IPathBlockSource const&)            = delete;
    IPathBlockSource()                                   = delete;
};
