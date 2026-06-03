#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/Whence.h"

namespace bx {

struct SeekerI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SeekerI() = 0;

    virtual int64 seek(int64 _offset, ::bx::Whence::Enum _whence) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace bx
