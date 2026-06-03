#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
// clang-format on

namespace bx {

struct WriterI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WriterI() = 0;

    virtual int write(void const* _data, int _size, ::bx::Error* _err) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace bx
