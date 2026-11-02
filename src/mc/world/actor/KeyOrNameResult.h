#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct KeyOrNameResult {
public:
    // KeyOrNameResult inner types define
    enum class ResultType : int {
        LocalizationKey = 0,
        Name            = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                mString;
    ::ll::TypedStorage<4, 4, ::KeyOrNameResult::ResultType> mType;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~KeyOrNameResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
