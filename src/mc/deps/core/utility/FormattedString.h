#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Util {

struct FormattedString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk2d6350;
    ::ll::UntypedStorage<8, 8> mUnka2047e;
    // NOLINTEND

public:
    // prevent constructor by default
    FormattedString& operator=(FormattedString const&);
    FormattedString(FormattedString const&);
    FormattedString();
};

} // namespace Util
