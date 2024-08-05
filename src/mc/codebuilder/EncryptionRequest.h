#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct EncryptionRequest {
public:
    // prevent constructor by default
    EncryptionRequest& operator=(EncryptionRequest const&);
    EncryptionRequest(EncryptionRequest const&);
    EncryptionRequest();

public:
    // NOLINTBEGIN
    MCAPI ~EncryptionRequest();

    // NOLINTEND
};

}; // namespace CodeBuilder
