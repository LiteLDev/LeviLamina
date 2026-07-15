#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PackErrorInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> type;
    ::ll::TypedStorage<8, 32, ::std::string> file;
    ::ll::TypedStorage<8, 32, ::std::string> text;
    // NOLINTEND
};
