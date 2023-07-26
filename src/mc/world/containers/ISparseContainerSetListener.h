#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ISparseContainerSetListener {

public:
    // prevent constructor by default
    ISparseContainerSetListener& operator=(ISparseContainerSetListener const&) = delete;
    ISparseContainerSetListener(ISparseContainerSetListener const&)            = delete;
    ISparseContainerSetListener()                                              = delete;
};
