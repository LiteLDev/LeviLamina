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
    // symbol: ?_sanitize@SanitizedFormatString@Bedrock@@AEAAXXZ
    MCAPI void _sanitize();

    // NOLINTEND
};

}; // namespace Bedrock
