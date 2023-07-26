#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ModelPartLocator {

public:
    // prevent constructor by default
    ModelPartLocator& operator=(ModelPartLocator const&) = delete;
    ModelPartLocator(ModelPartLocator const&)            = delete;
    ModelPartLocator()                                   = delete;
};
