#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"
#include "mc/resources/PackParseErrorType.h"

class PackDiscoveryError : public ::PackError {
public:
    // prevent constructor by default
    PackDiscoveryError();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unordered_map<int, ::std::string> const& getLocErrorMessageMap() const /*override*/;

    virtual ::std::unordered_map<int, ::std::string> const& getEventErrorMessageMap() const /*override*/;

    virtual ~PackDiscoveryError() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackDiscoveryError(::PackParseErrorType errorType, ::std::vector<::std::string> const& errorParam);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::PackParseErrorType errorType, ::std::vector<::std::string> const& errorParam);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::std::unordered_map<int, ::std::string> const& $getLocErrorMessageMap() const;

    MCNAPI ::std::unordered_map<int, ::std::string> const& $getEventErrorMessageMap() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
