#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IBlockSource {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IBLOCKSOURCE
public:
    IBlockSource& operator=(IBlockSource const&) = delete;
    IBlockSource(IBlockSource const&)            = delete;
    IBlockSource()                               = delete;
#endif

public:
};
