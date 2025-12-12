#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SanitizedFormatString {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1024> mUnk5a4969;
    ::ll::UntypedStorage<8, 8>    mUnkbfa87f;
    ::ll::UntypedStorage<8, 8>    mUnkfbcc70;
    // NOLINTEND

public:
    // prevent constructor by default
    SanitizedFormatString& operator=(SanitizedFormatString const&);
    SanitizedFormatString(SanitizedFormatString const&);
    SanitizedFormatString();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _sanitize();
    // NOLINTEND
};

} // namespace Bedrock
