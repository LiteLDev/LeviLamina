#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BedrockLoadContext {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCKLOADCONTEXT
public:
    BedrockLoadContext& operator=(BedrockLoadContext const&) = delete;
    BedrockLoadContext(BedrockLoadContext const&)            = delete;
    BedrockLoadContext()                                     = delete;
#endif

public:
    /**
     * @symbol ??0BedrockLoadContext\@\@QEAA\@AEBVSemVersion\@\@\@Z
     */
    MCAPI BedrockLoadContext(class SemVersion const&);
    /**
     * @symbol ??1BedrockLoadContext\@\@QEAA\@XZ
     */
    MCAPI ~BedrockLoadContext();
};
