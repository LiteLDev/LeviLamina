#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class optional_ref {

    T0* value;

public:
    inline T0* get() const {
        if (*this)
            return value;
        return nullptr;
    }

    inline T0& operator*() const { return *value; }

    inline T0* operator->() const { return value; }

    inline explicit operator bool() const { return value != nullptr; }
};
