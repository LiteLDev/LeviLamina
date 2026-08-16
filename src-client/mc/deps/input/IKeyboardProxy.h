#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IKeyboardProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void feedText(::std::string const& text) = 0;

    virtual ~IKeyboardProxy();
    // NOLINTEND
};
