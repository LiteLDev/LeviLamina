#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class PathString {

public:
    // prevent constructor by default
    PathString& operator=(PathString const&) = delete;
    PathString(PathString const&)            = delete;
    PathString()                             = delete;

    // private:

private:
    /**
     * @symbol ?mPreferedSeparator\@PathString\@SFAT\@\@0DA
     */
    MCAPI static char mPreferedSeparator; // NOLINT
};

}; // namespace SFAT
