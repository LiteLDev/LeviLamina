#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ISecureStorageKeySystem {
public:
    // prevent constructor by default
    ISecureStorageKeySystem& operator=(ISecureStorageKeySystem const&);
    ISecureStorageKeySystem(ISecureStorageKeySystem const&);
    ISecureStorageKeySystem();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ISecureStorageKeySystem();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
