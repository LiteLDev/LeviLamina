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
    ::ll::UntypedStorage<1, 1>  mUnk6fe983;
    // NOLINTEND

public:
    // prevent constructor by default
    SaveGameSecureStorage& operator=(SaveGameSecureStorage const&);
    SaveGameSecureStorage(SaveGameSecureStorage const&);
    SaveGameSecureStorage();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SaveGameSecureStorage() /*override*/ = default;

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
