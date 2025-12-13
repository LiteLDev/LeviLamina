#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class ScopeExit {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk81d9bc;
    // NOLINTEND

public:
    // prevent constructor by default
    ScopeExit& operator=(ScopeExit const&);
    ScopeExit(ScopeExit const&);
    ScopeExit();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit ScopeExit(::std::function<void()> function);

    MCNAPI_C ::Bedrock::ScopeExit& operator=(::std::function<void()> function);

    MCNAPI ~ScopeExit();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::std::function<void()> function);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
