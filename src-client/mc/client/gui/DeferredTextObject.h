#pragma once

#include "mc/_HeaderOutputPredefine.h"

class DeferredTextObject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::function<void()>> mParseRawInputCallback;
    ::ll::TypedStorage<8, 32, ::std::string>           mRawText;
    ::ll::TypedStorage<1, 1, bool>                     mRawTextModfied;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void setParseRawInputCallback(::std::function<void()> callback);

    MCAPI void setRawText(::std::string const& str);
    // NOLINTEND
};
