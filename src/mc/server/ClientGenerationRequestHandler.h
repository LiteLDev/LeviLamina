#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientGenerationRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbb0ef8;
    ::ll::UntypedStorage<8, 8>  mUnkee5718;
    ::ll::UntypedStorage<4, 4>  mUnkf1db40;
    ::ll::UntypedStorage<4, 12> mUnk5915c9;
    ::ll::UntypedStorage<1, 1>  mUnk331ccc;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientGenerationRequestHandler& operator=(ClientGenerationRequestHandler const&);
    ClientGenerationRequestHandler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ClientGenerationRequestHandler(::ClientGenerationRequestHandler const&);

    MCNAPI_C ~ClientGenerationRequestHandler();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::ClientGenerationRequestHandler const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};
