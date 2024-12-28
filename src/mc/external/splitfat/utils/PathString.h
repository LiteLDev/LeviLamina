#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class PathString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk51a6c6;
    ::ll::UntypedStorage<8, 8>  mUnkc690c7;
    // NOLINTEND

public:
    // prevent constructor by default
    PathString& operator=(PathString const&);
    PathString(PathString const&);
    PathString();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static char& mPreferedSeparator();
    // NOLINTEND
};

} // namespace SFAT
