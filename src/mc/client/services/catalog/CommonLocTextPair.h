#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct CommonLocTextPair {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk3aaf9f;
    ::ll::UntypedStorage<8, 32> mUnkd6a50b;
    // NOLINTEND

public:
    // prevent constructor by default
    CommonLocTextPair& operator=(CommonLocTextPair const&);
    CommonLocTextPair(CommonLocTextPair const&);
    CommonLocTextPair();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ::CommonLocTextPair& operator=(::CommonLocTextPair&&);

    MCNAPI_C ~CommonLocTextPair();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
