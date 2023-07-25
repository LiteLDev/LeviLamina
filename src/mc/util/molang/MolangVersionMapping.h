#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MolangVersionMapping {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGVERSIONMAPPING
public:
    MolangVersionMapping& operator=(MolangVersionMapping const&) = delete;
    MolangVersionMapping(MolangVersionMapping const&)            = delete;
    MolangVersionMapping()                                       = delete;
#endif

public:
    /**
     * @symbol ?getVersion\@MolangVersionMapping\@\@SA?BW4MolangVersion\@\@AEBVSemVersion\@\@\@Z
     */
    MCAPI static enum class MolangVersion const getVersion(class SemVersion const&);
};
