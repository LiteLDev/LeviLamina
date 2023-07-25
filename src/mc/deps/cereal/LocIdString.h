#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CerealHelpers {

struct LocIdString {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CEREALHELPERS_LOCIDSTRING
public:
    LocIdString& operator=(LocIdString const&) = delete;
    LocIdString(LocIdString const&)            = delete;
    LocIdString()                              = delete;
#endif

public:
    /**
     * @symbol ??1LocIdString\@CerealHelpers\@\@QEAA\@XZ
     */
    MCAPI ~LocIdString();
};

}; // namespace CerealHelpers
