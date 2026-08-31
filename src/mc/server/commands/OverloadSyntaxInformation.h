#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OverloadSyntaxInformation {
public:
    // OverloadSyntaxInformation inner types define
    using CursorPos = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> text;
    ::ll::TypedStorage<4, 4, uint>           start;
    ::ll::TypedStorage<4, 4, uint>           length;
    // NOLINTEND
};
