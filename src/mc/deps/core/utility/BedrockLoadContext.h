#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BedrockLoadContext {

public:
    // prevent constructor by default
    BedrockLoadContext& operator=(BedrockLoadContext const&) = delete;
    BedrockLoadContext(BedrockLoadContext const&)            = delete;
    BedrockLoadContext()                                     = delete;

public:
    /**
     * @symbol ??0BedrockLoadContext\@\@QEAA\@AEBVSemVersion\@\@\@Z
     */
    MCAPI BedrockLoadContext(class SemVersion const&); // NOLINT
    /**
     * @symbol ??1BedrockLoadContext\@\@QEAA\@XZ
     */
    MCAPI ~BedrockLoadContext(); // NOLINT
};
