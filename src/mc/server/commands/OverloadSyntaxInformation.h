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
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
