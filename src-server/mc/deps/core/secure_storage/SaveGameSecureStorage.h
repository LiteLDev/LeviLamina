#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/secure_storage/SecureStorage.h"

class SaveGameSecureStorage : public ::SecureStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka87d76;
    ::ll::UntypedStorage<8, 16> mUnkbdcba3;
    ::ll::UntypedStorage<1, 1> mUnk6fe983;
    // NOLINTEND

public:
    // prevent constructor by default
    SaveGameSecureStorage& operator=(SaveGameSecureStorage const&);
    SaveGameSecureStorage(SaveGameSecureStorage const&);
    SaveGameSecureStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SaveGameSecureStorage() /*override*/ = default;

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
