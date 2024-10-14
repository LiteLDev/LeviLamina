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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace CodeBuilder
