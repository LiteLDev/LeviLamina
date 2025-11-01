#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/secure_storage/SecureStorage.h"

class NullSecureStorage : public ::SecureStorage {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NullSecureStorage() /*override*/ = default;

    // vIndex: 1
    virtual bool add(::std::string const& key, ::std::string const& value) /*override*/;

    // vIndex: 2
    virtual bool addOrUpdate(::std::string const& key, ::std::string const& value) /*override*/;

    // vIndex: 3
    virtual bool remove(::std::string const& key) /*override*/;

    // vIndex: 4
    virtual bool get(::std::string const& key, ::std::string& outValue) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $add(::std::string const& key, ::std::string const& value);

    MCNAPI bool $addOrUpdate(::std::string const& key, ::std::string const& value);

    MCNAPI bool $remove(::std::string const& key);

    MCNAPI bool $get(::std::string const& key, ::std::string& outValue);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
