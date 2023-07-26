#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SanitizedFormatString {

public:
    // prevent constructor by default
    SanitizedFormatString& operator=(SanitizedFormatString const&) = delete;
    SanitizedFormatString(SanitizedFormatString const&)            = delete;
    SanitizedFormatString()                                        = delete;

public:
    /**
     * @symbol ??0SanitizedFormatString\@Bedrock\@\@QEAA\@PEBD\@Z
     */
    MCAPI SanitizedFormatString(char const*); // NOLINT
    /**
     * @symbol ?getOriginalWithoutFlag\@SanitizedFormatString\@Bedrock\@\@QEBAPEBDXZ
     */
    MCAPI char const* getOriginalWithoutFlag() const; // NOLINT

    // private:
    /**
     * @symbol ?_sanitize\@SanitizedFormatString\@Bedrock\@\@AEAAXXZ
     */
    MCAPI void _sanitize(); // NOLINT

private:
};

}; // namespace Bedrock
