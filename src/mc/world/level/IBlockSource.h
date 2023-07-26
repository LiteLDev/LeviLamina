#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IBlockSource {

public:
    // prevent constructor by default
    IBlockSource& operator=(IBlockSource const&) = delete;
    IBlockSource(IBlockSource const&)            = delete;
    IBlockSource()                               = delete;
};
