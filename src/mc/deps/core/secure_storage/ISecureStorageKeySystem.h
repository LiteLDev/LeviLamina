#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ISecureStorageKeySystem {
public:
    // prevent constructor by default
    ISecureStorageKeySystem& operator=(ISecureStorageKeySystem const&) = delete;
    ISecureStorageKeySystem(ISecureStorageKeySystem const&)            = delete;
    ISecureStorageKeySystem()                                          = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1ISecureStorageKeySystem@@UEAA@XZ
    MCVAPI ~ISecureStorageKeySystem();

    // NOLINTEND
};
