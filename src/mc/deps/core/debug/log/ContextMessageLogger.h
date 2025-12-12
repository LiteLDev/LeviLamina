#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContextMessageLoggerOptions;
// clang-format on

class ContextMessageLogger {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk7692d5;
    ::ll::UntypedStorage<1, 5>  mUnk522f81;
    ::ll::UntypedStorage<1, 14> mUnk15d953;
    // NOLINTEND

public:
    // prevent constructor by default
    ContextMessageLogger& operator=(ContextMessageLogger const&);
    ContextMessageLogger(ContextMessageLogger const&);
    ContextMessageLogger();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~ContextMessageLogger() = default;
#else // LL_PLAT_C
    virtual ~ContextMessageLogger();
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit ContextMessageLogger(::ContextMessageLoggerOptions const& options);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::ContextMessageLoggerOptions const& options);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
