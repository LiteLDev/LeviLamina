#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ContextMessageLoggerOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 4> mUnk39a32f;
    ::ll::UntypedStorage<1, 4> mUnk99c135;
    ::ll::UntypedStorage<1, 4> mUnk7bae0a;
    ::ll::UntypedStorage<1, 1> mUnk5caf95;
    ::ll::UntypedStorage<1, 1> mUnk393c38;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    ContextMessageLoggerOptions& operator=(ContextMessageLoggerOptions const&);
    ContextMessageLoggerOptions(ContextMessageLoggerOptions const&);
    ContextMessageLoggerOptions();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    ContextMessageLoggerOptions& operator=(ContextMessageLoggerOptions const&);
    ContextMessageLoggerOptions(ContextMessageLoggerOptions const&);

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ContextMessageLoggerOptions();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor();
#endif
    // NOLINTEND
};
