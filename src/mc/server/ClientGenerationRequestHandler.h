#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ClientGenerationRequestHandler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkd8e231;
    ::ll::UntypedStorage<8, 8>  mUnkee5718;
    ::ll::UntypedStorage<4, 4>  mUnkf1db40;
    ::ll::UntypedStorage<4, 12> mUnk5915c9;
    ::ll::UntypedStorage<1, 1>  mUnk331ccc;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientGenerationRequestHandler& operator=(ClientGenerationRequestHandler const&);
    ClientGenerationRequestHandler(ClientGenerationRequestHandler const&);
    ClientGenerationRequestHandler();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ~ClientGenerationRequestHandler();
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
