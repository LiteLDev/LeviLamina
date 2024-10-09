#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <int T0, typename T1>
class MultiOctaveNoiseImpl {
public:
    // prevent constructor by default
    MultiOctaveNoiseImpl& operator=(MultiOctaveNoiseImpl const&);
    MultiOctaveNoiseImpl(MultiOctaveNoiseImpl const&);
    MultiOctaveNoiseImpl();
};
