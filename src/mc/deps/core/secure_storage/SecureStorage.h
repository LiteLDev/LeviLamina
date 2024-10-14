#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SecureStorage {
public:
    // prevent constructor by default
    SecureStorage& operator=(SecureStorage const&);
    SecureStorage(SecureStorage const&);
    SecureStorage();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SecureStorage();

    // vIndex: 1
    virtual bool add(std::string const& key, std::string const& value) = 0;

    // vIndex: 2
    virtual bool addOrUpdate(std::string const& key, std::string const& value) = 0;

    // vIndex: 3
    virtual bool remove(std::string const& key) = 0;

    // vIndex: 4
    virtual bool get(std::string const& key, std::string& outValue) = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
