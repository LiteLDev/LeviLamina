#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <int T0, typename T1>
class MultiOctaveNoiseImpl {

public:
    // prevent constructor by default
    MultiOctaveNoiseImpl& operator=(MultiOctaveNoiseImpl const&) = delete;
    MultiOctaveNoiseImpl(MultiOctaveNoiseImpl const&)            = delete;
    MultiOctaveNoiseImpl()                                       = delete;
};
