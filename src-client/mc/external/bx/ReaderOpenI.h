#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace bx { class Error; }
namespace bx { class FilePath; }
// clang-format on

namespace bx {

struct ReaderOpenI {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ReaderOpenI() = 0;

    virtual bool open(::bx::FilePath const&, ::bx::Error*) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace bx
