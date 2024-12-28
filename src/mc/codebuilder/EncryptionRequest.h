#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct EncryptionRequest {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkfec9d1;
    ::ll::UntypedStorage<8, 32> mUnk27b769;
    ::ll::UntypedStorage<8, 32> mUnk8e1db5;
    // NOLINTEND

public:
    // prevent constructor by default
    EncryptionRequest& operator=(EncryptionRequest const&);
    EncryptionRequest(EncryptionRequest const&);
    EncryptionRequest();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~EncryptionRequest();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace CodeBuilder
