#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/WriterI.h"

// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
// clang-format on

namespace bx {

class DebugWriter : public ::bx::WriterI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual int write(void const*, int, ::bx::Error*) /*override*/;

    virtual ~DebugWriter() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace bx
