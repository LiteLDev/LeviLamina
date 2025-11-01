#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct KeyOrNameResult {
public:
    // KeyOrNameResult inner types define
    enum class ResultType : int {
        LocalizationKey = 0,
        Name = 1,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk147683;
    ::ll::UntypedStorage<4, 4> mUnk5fbc85;
    // NOLINTEND

public:
    // prevent constructor by default
    KeyOrNameResult& operator=(KeyOrNameResult const&);
    KeyOrNameResult(KeyOrNameResult const&);
    KeyOrNameResult();

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
