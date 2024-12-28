#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class ActivationArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk7f5357;
    ::ll::UntypedStorage<8, 32> mUnk14fdc9;
    ::ll::UntypedStorage<8, 32> mUnk13509e;
    ::ll::UntypedStorage<4, 4>  mUnk162432;
    ::ll::UntypedStorage<4, 4>  mUnk3c7581;
    ::ll::UntypedStorage<4, 4>  mUnkd86f46;
    ::ll::UntypedStorage<1, 1>  mUnk3c6135;
    ::ll::UntypedStorage<1, 1>  mUnk378674;
    ::ll::UntypedStorage<1, 1>  mUnk7b51bf;
    ::ll::UntypedStorage<8, 32> mUnk1d013e;
    ::ll::UntypedStorage<8, 32> mUnke64040;
    ::ll::UntypedStorage<8, 32> mUnkb68fcf;
    // NOLINTEND

public:
    // prevent constructor by default
    ActivationArguments& operator=(ActivationArguments const&);
    ActivationArguments(ActivationArguments const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ActivationArguments();

    MCAPI void preParseArguments();

    MCAPI ~ActivationArguments();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock
