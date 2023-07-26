#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CerealHelpers {

struct IdentifierString {

public:
    // prevent constructor by default
    IdentifierString& operator=(IdentifierString const&) = delete;
    IdentifierString(IdentifierString const&)            = delete;
    IdentifierString()                                   = delete;

public:
    /**
     * @symbol ??1IdentifierString\@CerealHelpers\@\@QEAA\@XZ
     */
    MCAPI ~IdentifierString(); // NOLINT
};

}; // namespace CerealHelpers
