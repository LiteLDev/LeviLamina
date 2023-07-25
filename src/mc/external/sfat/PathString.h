#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class PathString {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SFAT_PATHSTRING
public:
    PathString& operator=(PathString const&) = delete;
    PathString(PathString const&)            = delete;
    PathString()                             = delete;
#endif

public:
    // private:

private:
    /**
     * @symbol ?mPreferedSeparator\@PathString\@SFAT\@\@0DA
     */
    MCAPI static char mPreferedSeparator;
};

}; // namespace SFAT
