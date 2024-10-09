#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ISparseContainerSetListener {
public:
    // prevent constructor by default
    ISparseContainerSetListener& operator=(ISparseContainerSetListener const&);
    ISparseContainerSetListener(ISparseContainerSetListener const&);
    ISparseContainerSetListener();
};
