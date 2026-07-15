#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/secure_storage/SecureStorage.h"

class NullSecureStorage : public ::SecureStorage {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NullSecureStorage() /*override*/ = default;

    virtual bool add(::std::string const&, ::std::string const&) /*override*/;

    virtual bool addOrUpdate(::std::string const&, ::std::string const&) /*override*/;

    virtual bool remove(::std::string const&) /*override*/;

    virtual bool get(::std::string const&, ::std::string&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
