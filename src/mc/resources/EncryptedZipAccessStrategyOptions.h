#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct EncryptedZipAccessStrategyOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6a7448;
    ::ll::UntypedStorage<8, 24> mUnkf8d237;
    ::ll::UntypedStorage<8, 8>  mUnk164bb0;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptedZipAccessStrategyOptions& operator=(EncryptedZipAccessStrategyOptions const&);
    EncryptedZipAccessStrategyOptions(EncryptedZipAccessStrategyOptions const&);
    EncryptedZipAccessStrategyOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EncryptedZipAccessStrategyOptions();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
