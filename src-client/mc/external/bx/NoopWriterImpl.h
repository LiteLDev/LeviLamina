#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/bx/FileWriterI.h"
#include "mc/external/bx/Whence.h"

// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
namespace bx { class FilePath; }
// clang-format on

namespace bx {

class NoopWriterImpl : public ::bx::FileWriterI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NoopWriterImpl() /*override*/ = default;

    virtual bool open(::bx::FilePath const&, bool, ::bx::Error*) /*override*/;

    virtual void close() /*override*/;

    virtual int64 seek(int64, ::bx::Whence::Enum) /*override*/;

    virtual int write(void const*, int, ::bx::Error*) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace bx
