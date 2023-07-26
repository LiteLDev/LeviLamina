#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <int T0, typename T1>
class NormalNoiseImpl {

public:
    // prevent constructor by default
    NormalNoiseImpl& operator=(NormalNoiseImpl const&) = delete;
    NormalNoiseImpl(NormalNoiseImpl const&)            = delete;
    NormalNoiseImpl()                                  = delete;
};
