#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct EncryptionResult {
public:
    // prevent constructor by default
    EncryptionResult& operator=(EncryptionResult const&);
    EncryptionResult(EncryptionResult const&);
    EncryptionResult();

public:
    // NOLINTBEGIN
    MCAPI ~EncryptionResult();

    // NOLINTEND
};

}; // namespace CodeBuilder
