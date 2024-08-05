#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/secure_storage/SecureStorage.h"

class NullSecureStorage : public ::SecureStorage {
public:
    // prevent constructor by default
    NullSecureStorage& operator=(NullSecureStorage const&);
    NullSecureStorage(NullSecureStorage const&);
    NullSecureStorage();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NullSecureStorage() = default;

    // vIndex: 1
    virtual bool add(std::string const& key, std::string const& value);

    // vIndex: 2
    virtual bool addOrUpdate(std::string const& key, std::string const& value);

    // vIndex: 3
    virtual bool remove(std::string const& key);

    // vIndex: 4
    virtual bool get(std::string const& key, std::string& outValue);

    // NOLINTEND
};
