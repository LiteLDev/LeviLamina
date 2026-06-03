#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/Whence.h"
#include "mc/external/bx/WriterSeekerI.h"

// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
// clang-format on

namespace bx {

class SizerWriter : public ::bx::WriterSeekerI {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64> m_pos;
    ::ll::TypedStorage<8, 8, int64> m_top;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SizerWriter() /*override*/ = default;

    virtual int64 seek(int64, ::bx::Whence::Enum) /*override*/;

    virtual int write(void const*, int, ::bx::Error*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace bx
