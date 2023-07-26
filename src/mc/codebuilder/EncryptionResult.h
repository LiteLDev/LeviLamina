#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct EncryptionResult {

public:
    // prevent constructor by default
    EncryptionResult& operator=(EncryptionResult const&) = delete;
    EncryptionResult(EncryptionResult const&)            = delete;
    EncryptionResult()                                   = delete;

public:
    /**
     * @symbol ??1EncryptionResult\@CodeBuilder\@\@QEAA\@XZ
     */
    MCAPI ~EncryptionResult(); // NOLINT
};

}; // namespace CodeBuilder
