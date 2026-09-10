#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EncryptedAssetInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk119f0b;
    ::ll::UntypedStorage<1, 1>  mUnk7033fe;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptedAssetInfo& operator=(EncryptedAssetInfo const&);
    EncryptedAssetInfo(EncryptedAssetInfo const&);
    EncryptedAssetInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EncryptedAssetInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
