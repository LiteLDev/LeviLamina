#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
// clang-format on

namespace bx {

struct ReaderI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReaderI() = 0;

    virtual int read(void* _data, int _size, ::bx::Error* _err) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace bx
