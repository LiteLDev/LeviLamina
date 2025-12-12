#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct EncryptionResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkfc51c2;
    ::ll::UntypedStorage<8, 32> mUnk8af72f;
    ::ll::UntypedStorage<8, 32> mUnk338842;
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
