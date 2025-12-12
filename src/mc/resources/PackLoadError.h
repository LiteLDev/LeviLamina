#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"

class PackLoadError : public ::PackError {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::unordered_map<int, ::std::string> const& getLocErrorMessageMap() const /*override*/;

    virtual ::std::unordered_map<int, ::std::string> const& getEventErrorMessageMap() const /*override*/;

    virtual ~PackLoadError() /*override*/;
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
