#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataInput {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDATAINPUT
public:
    IDataInput& operator=(IDataInput const&) = delete;
    IDataInput(IDataInput const&)            = delete;
    IDataInput()                             = delete;
#endif

public:
};
