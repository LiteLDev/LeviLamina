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

public:
    // prevent constructor by default
    OverloadSyntaxInformation();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI OverloadSyntaxInformation(::std::string const& _text, uint _start, uint _end);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& _text, uint _start, uint _end);
    // NOLINTEND
};
