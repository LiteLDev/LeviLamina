#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct DirectoryWihEncryptedBlobAccessStrategyOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkac58fb;
    ::ll::UntypedStorage<8, 8>  mUnkd3b9f4;
    ::ll::UntypedStorage<8, 8>  mUnk7d6b02;
    ::ll::UntypedStorage<8, 24> mUnk393a5d;
    ::ll::UntypedStorage<8, 8>  mUnk5b288c;
    // NOLINTEND

public:
    // prevent constructor by default
    DirectoryWihEncryptedBlobAccessStrategyOptions& operator=(DirectoryWihEncryptedBlobAccessStrategyOptions const&);
    DirectoryWihEncryptedBlobAccessStrategyOptions(DirectoryWihEncryptedBlobAccessStrategyOptions const&);
    DirectoryWihEncryptedBlobAccessStrategyOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~DirectoryWihEncryptedBlobAccessStrategyOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
