#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WildcardString {
public:
    // WildcardString inner types define
    enum class Case : int {
        Sensitive = 0,
        Insensitive = 1,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk43804b;
    // NOLINTEND

public:
    // prevent constructor by default
    WildcardString& operator=(WildcardString const&);
    WildcardString(WildcardString const&);
    WildcardString();

};
