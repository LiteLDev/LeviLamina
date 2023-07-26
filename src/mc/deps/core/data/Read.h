#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename... T0>
struct Read {

public:
    // prevent constructor by default
    Read& operator=(Read const&) = delete;
    Read(Read const&)            = delete;
    Read()                       = delete;
};
