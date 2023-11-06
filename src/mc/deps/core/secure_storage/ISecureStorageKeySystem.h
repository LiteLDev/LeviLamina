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
    // vIndex: 0, symbol: ??1ISecureStorageKeySystem@@UEAA@XZ
    virtual ~ISecureStorageKeySystem();

    // NOLINTEND
};
