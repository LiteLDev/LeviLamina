#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CerealHelpers {

struct IdentifierString {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREALHELPERS_IDENTIFIERSTRING
public:
    IdentifierString& operator=(IdentifierString const&) = delete;
    IdentifierString(IdentifierString const&)            = delete;
    IdentifierString()                                   = delete;
#endif

public:
    /**
     * @symbol ??1IdentifierString\@CerealHelpers\@\@QEAA\@XZ
     */
    MCAPI ~IdentifierString();
};

}; // namespace CerealHelpers
