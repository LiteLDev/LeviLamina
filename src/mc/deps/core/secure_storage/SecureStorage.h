#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SecureStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9a5d0b;
    // NOLINTEND

public:
    // prevent constructor by default
    SecureStorage& operator=(SecureStorage const&);
    SecureStorage(SecureStorage const&);
    SecureStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SecureStorage();

    virtual bool add(::std::string const& key, ::std::string const& value) = 0;

    virtual bool addOrUpdate(::std::string const& key, ::std::string const& value) = 0;

    virtual bool remove(::std::string const& key) = 0;

    virtual bool get(::std::string const& key, ::std::string& outValue) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
