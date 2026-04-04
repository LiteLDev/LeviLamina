#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IKeyboardProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void feedText(::std::string const& text) = 0;

    virtual void feedCaretLocation(int caretPos) = 0;

    virtual ~IKeyboardProxy() = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
