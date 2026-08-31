#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackErrorType.h"

class PackError {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>> mErrorParameters;
    ::ll::TypedStorage<4, 4, int>                           mErrorValue;
    ::ll::TypedStorage<4, 4, ::PackErrorType>               mPackErrorType;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~PackError() = default;
#else // LL_PLAT_C
    virtual ~PackError();
#endif

    virtual ::std::string getLocErrorMessage() const;

    virtual ::std::unordered_map<int, ::std::string> const& getLocErrorMessageMap() const = 0;

    virtual ::std::unordered_map<int, ::std::string> const& getEventErrorMessageMap() const = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::std::string getEventErrorMessage() const;
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::string $getLocErrorMessage() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
