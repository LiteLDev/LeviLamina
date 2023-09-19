#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SanitizedFormatString {
public:
    // prevent constructor by default
    SanitizedFormatString& operator=(SanitizedFormatString const&);
    SanitizedFormatString(SanitizedFormatString const&);
    SanitizedFormatString();

public:
    // NOLINTBEGIN
    // symbol: ??0SanitizedFormatString@Bedrock@@QEAA@PEBD@Z
    MCAPI explicit SanitizedFormatString(char const*);

    // symbol: ?getOriginalWithoutFlag@SanitizedFormatString@Bedrock@@QEBAPEBDXZ
    MCAPI char const* getOriginalWithoutFlag() const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_sanitize@SanitizedFormatString@Bedrock@@AEAAXXZ
    MCAPI void _sanitize();

    // NOLINTEND
};

}; // namespace Bedrock
