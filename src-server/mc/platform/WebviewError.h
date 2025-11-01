#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct WebviewError {
public:
    // WebviewError inner types define
    enum class Type : uchar {
        Unknown = 0,
        NetworkError = 1,
        OutOfMemory = 2,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnk5a3151;
    ::ll::UntypedStorage<8, 32> mUnk10e682;
    ::ll::UntypedStorage<4, 4> mUnkfda2e2;
    // NOLINTEND

public:
    // prevent constructor by default
    WebviewError& operator=(WebviewError const&);
    WebviewError(WebviewError const&);
    WebviewError();

};
