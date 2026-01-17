#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

struct ImagesList {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual char const* Next() = 0;

    virtual void ResetIterator() = 0;

    virtual void Release() = 0;

    virtual ~ImagesList() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
