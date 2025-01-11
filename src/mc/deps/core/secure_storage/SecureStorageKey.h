#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SecureStorageKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9e78ac;
    ::ll::UntypedStorage<1, 1>  mUnke00a50;
    // NOLINTEND

public:
    // prevent constructor by default
    SecureStorageKey& operator=(SecureStorageKey const&);
    SecureStorageKey(SecureStorageKey const&);
    SecureStorageKey();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~SecureStorageKey();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
