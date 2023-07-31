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
    // NOLINTBEGIN
    /**
     * @symbol ??1IdentifierString\@CerealHelpers\@\@QEAA\@XZ
     */
    MCAPI ~IdentifierString();
    // NOLINTEND
};

}; // namespace CerealHelpers
