#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
namespace bx { class FilePath; }
namespace bx { class StringView; }
// clang-format on

namespace bx {

struct ProcessOpenI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ProcessOpenI() = 0;

    virtual bool open(::bx::FilePath const&, ::bx::StringView const&, ::bx::Error*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace bx
