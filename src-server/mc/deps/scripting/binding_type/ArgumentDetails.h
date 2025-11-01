#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct ArgumentDetails {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk64a1c3;
    ::ll::UntypedStorage<8, 208> mUnk574b18;
    ::ll::UntypedStorage<8, 208> mUnkcd9943;
    ::ll::UntypedStorage<8, 208> mUnk8d35f7;
    ::ll::UntypedStorage<8, 208> mUnk2c8f9c;
    // NOLINTEND

public:
    // prevent constructor by default
    ArgumentDetails& operator=(ArgumentDetails const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ArgumentDetails();

    MCNAPI ArgumentDetails(::Scripting::ArgumentDetails const&);

    MCNAPI ~ArgumentDetails();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Scripting::ArgumentDetails const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};

}
