#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

class ISyncStreamWriter {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISyncStreamWriter() = default;

    virtual void Write(char const*, uint) = 0;

    virtual void Close() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
