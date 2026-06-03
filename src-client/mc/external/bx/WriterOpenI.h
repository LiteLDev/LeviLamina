#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
namespace bx { class FilePath; }
// clang-format on

namespace bx {

struct WriterOpenI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WriterOpenI() = 0;

    virtual bool open(::bx::FilePath const& _filePath, bool _append, ::bx::Error* _err) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace bx
