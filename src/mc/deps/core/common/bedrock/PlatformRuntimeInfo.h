#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct PlatformRuntimeInfo {

public:
    // prevent constructor by default
    PlatformRuntimeInfo& operator=(PlatformRuntimeInfo const&) = delete;
    PlatformRuntimeInfo(PlatformRuntimeInfo const&)            = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEDROCK_PLATFORMRUNTIMEINFO
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~PlatformRuntimeInfo();
#endif
    /**
     * @symbol ??0PlatformRuntimeInfo\@Bedrock\@\@QEAA\@XZ
     */
    MCAPI PlatformRuntimeInfo();
    // NOLINTEND
};

}; // namespace Bedrock
