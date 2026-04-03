#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class ActivationArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnka9c2fc;
    ::ll::UntypedStorage<8, 32> mUnkc8afd3;
    ::ll::UntypedStorage<8, 32> mUnk8b85c0;
    ::ll::UntypedStorage<4, 4>  mUnk162432;
    ::ll::UntypedStorage<4, 4>  mUnk3c7581;
    ::ll::UntypedStorage<1, 1>  mUnk3c6135;
    ::ll::UntypedStorage<1, 1>  mUnk378674;
    ::ll::UntypedStorage<8, 32> mUnk1ff994;
    // NOLINTEND

public:
    // prevent constructor by default
    ActivationArguments& operator=(ActivationArguments const&);
    ActivationArguments(ActivationArguments const&);
    ActivationArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void parseURLArgument(::std::string const& url);

    MCNAPI void preParseArguments();

    MCNAPI ~ActivationArguments();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(int argc, char** const argv);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
