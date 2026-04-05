#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class DataBuffer {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual uchar* GetData() const = 0;

    virtual uint64 GetSize() const = 0;

    virtual void Release() = 0;

    virtual ~DataBuffer() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
