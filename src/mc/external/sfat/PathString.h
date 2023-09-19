#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class PathString {
public:
    // prevent constructor by default
    PathString& operator=(PathString const&);
    PathString(PathString const&);
    PathString();

private:
    // NOLINTBEGIN
    // symbol: ?mPreferedSeparator@PathString@SFAT@@0DA
    MCAPI static char mPreferedSeparator;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $mPreferedSeparator() { return mPreferedSeparator; }

    // NOLINTEND
};

}; // namespace SFAT
