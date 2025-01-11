#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"
#include "mc/resources/PackParseErrorType.h"

class PackDiscoveryError : public ::PackError {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual ::std::unordered_map<int, ::std::string> const& getLocErrorMessageMap() const /*override*/;

    // vIndex: 3
    virtual ::std::unordered_map<int, ::std::string> const& getEventErrorMessageMap() const /*override*/;

    // vIndex: 0
    virtual ~PackDiscoveryError() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackDiscoveryError(::PackParseErrorType errorType, ::std::vector<::std::string> const& errorParam);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::PackParseErrorType errorType, ::std::vector<::std::string> const& errorParam);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::std::unordered_map<int, ::std::string> const& $getLocErrorMessageMap() const;

    MCFOLD ::std::unordered_map<int, ::std::string> const& $getEventErrorMessageMap() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
