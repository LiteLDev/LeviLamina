#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct OverloadSyntaxInformation {
public:
    // prevent constructor by default
    OverloadSyntaxInformation& operator=(OverloadSyntaxInformation const&);
    OverloadSyntaxInformation(OverloadSyntaxInformation const&);
    OverloadSyntaxInformation();

public:
    // NOLINTBEGIN
    MCAPI OverloadSyntaxInformation(std::string const& _text, uint _start, uint _end);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::string const& _text, uint _start, uint _end);

    // NOLINTEND
};
