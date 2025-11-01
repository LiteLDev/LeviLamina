#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/secure_storage/SecureStorage.h"

class MemorySecureStorage : public ::SecureStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnka8e7ac;
    // NOLINTEND

public:
    // prevent constructor by default
    MemorySecureStorage& operator=(MemorySecureStorage const&);
    MemorySecureStorage(MemorySecureStorage const&);
    MemorySecureStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MemorySecureStorage() /*override*/ = default;

    // vIndex: 1
    virtual bool add(::std::string const&, ::std::string const&) /*override*/;

    // vIndex: 2
    virtual bool addOrUpdate(::std::string const&, ::std::string const&) /*override*/;

    // vIndex: 3
    virtual bool remove(::std::string const&) /*override*/;

    // vIndex: 4
    virtual bool get(::std::string const&, ::std::string&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};
