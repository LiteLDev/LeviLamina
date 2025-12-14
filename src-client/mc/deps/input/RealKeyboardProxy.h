#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/IKeyboardProxy.h"

class RealKeyboardProxy : public ::IKeyboardProxy {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void feedText(::std::string const& text, bool isFromIME) /*override*/;

    virtual void feedCaretLocation(int caretPos) /*override*/;

    virtual ~RealKeyboardProxy() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $feedText(::std::string const& text, bool isFromIME);

    MCAPI void $feedCaretLocation(int caretPos);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
