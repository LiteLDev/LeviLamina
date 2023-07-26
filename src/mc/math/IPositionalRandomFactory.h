#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IPositionalRandomFactory {

public:
    // prevent constructor by default
    IPositionalRandomFactory& operator=(IPositionalRandomFactory const&) = delete;
    IPositionalRandomFactory(IPositionalRandomFactory const&)            = delete;
    IPositionalRandomFactory()                                           = delete;
};
