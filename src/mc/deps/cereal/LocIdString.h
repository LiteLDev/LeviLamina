#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CerealHelpers {

struct LocIdString {

public:
    // prevent constructor by default
    LocIdString& operator=(LocIdString const&) = delete;
    LocIdString(LocIdString const&)            = delete;
    LocIdString()                              = delete;

public:
    /**
     * @symbol ??1LocIdString\@CerealHelpers\@\@QEAA\@XZ
     */
    MCAPI ~LocIdString(); // NOLINT
};

}; // namespace CerealHelpers
