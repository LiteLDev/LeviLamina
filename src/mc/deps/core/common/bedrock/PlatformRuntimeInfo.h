#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct PlatformRuntimeInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_PLATFORMRUNTIMEINFO
public:
    PlatformRuntimeInfo& operator=(PlatformRuntimeInfo const&) = delete;
    PlatformRuntimeInfo(PlatformRuntimeInfo const&)            = delete;
#endif

public:
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
};

}; // namespace Bedrock
