#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SecureStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkae0628;
    // NOLINTEND

public:
    // prevent constructor by default
    SecureStorage& operator=(SecureStorage const&);
    SecureStorage(SecureStorage const&);
    SecureStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SecureStorage();

    // vIndex: 1
    virtual bool add(::std::string const&, ::std::string const&) = 0;

    // vIndex: 2
    virtual bool addOrUpdate(::std::string const&, ::std::string const&) = 0;

    // vIndex: 3
    virtual bool remove(::std::string const&) = 0;

    // vIndex: 4
    virtual bool get(::std::string const&, ::std::string&) = 0;
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
