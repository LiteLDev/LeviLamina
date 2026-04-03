#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace LoadResultHelpers {

struct ContentLogOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnkc66f7d;
    ::ll::UntypedStorage<1, 1>  mUnk8c7efb;
    ::ll::UntypedStorage<1, 1>  mUnk92c993;
    ::ll::UntypedStorage<8, 24> mUnkd1cab7;
    ::ll::UntypedStorage<8, 24> mUnkea5aaf;
    ::ll::UntypedStorage<8, 24> mUnkb675fb;
    // NOLINTEND

public:
    // prevent constructor by default
    ContentLogOptions& operator=(ContentLogOptions const&);
    ContentLogOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ContentLogOptions(::LoadResultHelpers::ContentLogOptions const&);

    MCNAPI ~ContentLogOptions();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::LoadResultHelpers::ContentLogOptions const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace LoadResultHelpers
