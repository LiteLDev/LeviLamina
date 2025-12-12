#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/store/DisplayLoggedErrorType.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
struct DisplayLoggedError;
// clang-format on

class DisplayLoggedErrorManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk787867;
    ::ll::UntypedStorage<8, 24> mUnk9c3ab5;
    ::ll::UntypedStorage<8, 32> mUnk306e9c;
    ::ll::UntypedStorage<1, 1>  mUnkc38836;
    ::ll::UntypedStorage<1, 1>  mUnk772ab0;
    ::ll::UntypedStorage<8, 80> mUnkf3e4dd;
    // NOLINTEND

public:
    // prevent constructor by default
    DisplayLoggedErrorManager& operator=(DisplayLoggedErrorManager const&);
    DisplayLoggedErrorManager(DisplayLoggedErrorManager const&);
    DisplayLoggedErrorManager();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~DisplayLoggedErrorManager() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~DisplayLoggedErrorManager() /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C explicit DisplayLoggedErrorManager(bool writeToLogFile);

    MCNAPI_C void _writeLogMessage(::std::string const& logMessage);

    MCNAPI_C ::std::string buildFullErrorLogMessage(::DisplayLoggedError error) const;

    MCNAPI_C void logErrorImpl(
        ::DisplayLoggedErrorType errorType,
        bool                     isAutomationRun,
        ::std::string const&     errorMessage,
        ::std::string const&     messageTemplate,
        ::std::string const&     errorParameters,
        char const*              fileName,
        int                      lineNumber,
        bool                     sendTelemetry
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static bool isAutomationRun();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(bool writeToLogFile);
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
