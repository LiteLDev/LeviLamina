#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
class optional_ref {

    T* value;

public:
    inline T* get() const {
        if (*this)
            return value;
        return nullptr;
    }

    inline T& operator*() const { return *value; }

    inline T* operator->() const { return value; }

    inline operator bool() const { return value != nullptr; }
};
