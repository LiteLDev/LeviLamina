#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class SanitizedFormatString {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_SANITIZEDFORMATSTRING
public:
    SanitizedFormatString& operator=(SanitizedFormatString const&) = delete;
    SanitizedFormatString(SanitizedFormatString const&)            = delete;
    SanitizedFormatString()                                        = delete;
#endif

public:
    /**
     * @symbol ??0SanitizedFormatString\@Bedrock\@\@QEAA\@PEBD\@Z
     */
    MCAPI SanitizedFormatString(char const*);
    /**
     * @symbol ?getOriginalWithoutFlag\@SanitizedFormatString\@Bedrock\@\@QEBAPEBDXZ
     */
    MCAPI char const* getOriginalWithoutFlag() const;

    // private:
    /**
     * @symbol ?_sanitize\@SanitizedFormatString\@Bedrock\@\@AEAAXXZ
     */
    MCAPI void _sanitize();

private:
};

}; // namespace Bedrock
