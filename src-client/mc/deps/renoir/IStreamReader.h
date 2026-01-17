#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace renoir {

class IStreamReader {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IStreamReader() = default;

    virtual uint GetSize() = 0;

    virtual uint Read(uint, uchar*, uint) = 0;

    virtual void Close() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace renoir
