#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SanitizedFormatString {
public:
    // prevent constructor by default
    SanitizedFormatString& operator=(SanitizedFormatString const&);
    SanitizedFormatString(SanitizedFormatString const&);
    SanitizedFormatString();

    // private:
    // NOLINTBEGIN
    MCAPI void _sanitize();

    // NOLINTEND
};

}; // namespace Bedrock
