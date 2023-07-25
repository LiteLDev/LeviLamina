#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDataOutput {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IDATAOUTPUT
public:
    IDataOutput& operator=(IDataOutput const&) = delete;
    IDataOutput(IDataOutput const&)            = delete;
    IDataOutput()                              = delete;
#endif

public:
};
