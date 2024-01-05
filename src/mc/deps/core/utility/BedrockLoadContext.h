#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BedrockLoadContext {
public:
    // prevent constructor by default
    BedrockLoadContext& operator=(BedrockLoadContext const&);
    BedrockLoadContext(BedrockLoadContext const&);
    BedrockLoadContext();

public:
    // NOLINTBEGIN
    // symbol: ??0BedrockLoadContext@@QEAA@AEBVSemVersion@@@Z
    MCAPI explicit BedrockLoadContext(class SemVersion const& engineVersion);

    // symbol: ??1BedrockLoadContext@@QEAA@XZ
    MCAPI ~BedrockLoadContext();

    // NOLINTEND
};
