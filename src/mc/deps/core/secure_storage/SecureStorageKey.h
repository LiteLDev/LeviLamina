#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SecureStorageKey {
public:
    // prevent constructor by default
    SecureStorageKey& operator=(SecureStorageKey const&);
    SecureStorageKey(SecureStorageKey const&);
    SecureStorageKey();

public:
    // NOLINTBEGIN
    MCAPI ~SecureStorageKey();

    // NOLINTEND
};
