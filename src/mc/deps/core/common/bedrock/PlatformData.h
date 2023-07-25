#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::PlatformUtils {

struct PlatformData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PLATFORMUTILS_PLATFORMDATA
public:
    PlatformData& operator=(PlatformData const&) = delete;
    PlatformData(PlatformData const&)            = delete;
    PlatformData()                               = delete;
#endif

public:
    /**
     * @symbol ?get\@PlatformData\@PlatformUtils\@Bedrock\@\@SAAEAU123\@XZ
     */
    MCAPI static struct Bedrock::PlatformUtils::PlatformData& get();
};

}; // namespace Bedrock::PlatformUtils
