#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class PathString {
public:
    // prevent constructor by default
    PathString& operator=(PathString const&);
    PathString(PathString const&);
    PathString();

    // private:
    // NOLINTBEGIN
    MCAPI static char mPreferedSeparator;

    // NOLINTEND
};

}; // namespace SFAT
