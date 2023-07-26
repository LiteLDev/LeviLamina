#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename A, typename T>
class AutomaticID {
    T id;

public:
    AutomaticID() { id = 0; }

    explicit AutomaticID(T x) { id = x; }

    inline explicit operator T() const { return id; }
};
