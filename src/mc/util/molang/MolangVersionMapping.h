#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MolangVersionMapping {

public:
    // prevent constructor by default
    MolangVersionMapping& operator=(MolangVersionMapping const&) = delete;
    MolangVersionMapping(MolangVersionMapping const&)            = delete;
    MolangVersionMapping()                                       = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ?getVersion\@MolangVersionMapping\@\@SA?BW4MolangVersion\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI static enum class MolangVersion const getVersion(class SemVersion const&);
    // NOLINTEND
};
