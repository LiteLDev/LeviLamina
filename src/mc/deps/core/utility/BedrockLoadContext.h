#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BedrockLoadContext {

public:
    // prevent constructor by default
    BedrockLoadContext& operator=(BedrockLoadContext const&) = delete;
    BedrockLoadContext(BedrockLoadContext const&)            = delete;
    BedrockLoadContext()                                     = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0BedrockLoadContext\@\@QEAA\@AEBVSemVersion\@\@\@Z
     */
    MCAPI BedrockLoadContext(class SemVersion const&);
    /**
     * @symbol ??1BedrockLoadContext\@\@QEAA\@XZ
     */
    MCAPI ~BedrockLoadContext();
    // NOLINTEND
};
