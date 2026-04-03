#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct EncryptionResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk25765c;
    ::ll::UntypedStorage<8, 32> mUnkb6f67f;
    ::ll::UntypedStorage<8, 32> mUnke45cf2;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptionResult& operator=(EncryptionResult const&);
    EncryptionResult(EncryptionResult const&);
    EncryptionResult();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~EncryptionResult();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace CodeBuilder
