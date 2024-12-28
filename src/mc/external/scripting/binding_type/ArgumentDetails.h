#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ArgumentDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk64a1c3;
    ::ll::UntypedStorage<8, 192> mUnk574b18;
    ::ll::UntypedStorage<8, 192> mUnkcd9943;
    ::ll::UntypedStorage<8, 192> mUnk8d35f7;
    ::ll::UntypedStorage<8, 192> mUnk2c8f9c;
    // NOLINTEND

public:
    // prevent constructor by default
    ArgumentDetails& operator=(ArgumentDetails const&);
    ArgumentDetails(ArgumentDetails const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ArgumentDetails();

    MCAPI ~ArgumentDetails();
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

} // namespace Scripting
