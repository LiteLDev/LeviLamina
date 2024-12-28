#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class MinEngineVersion;
class SemVersion;
// clang-format on

class ActorAnimationMinEngineVersionUtils {
public:
    // prevent constructor by default
    ActorAnimationMinEngineVersionUtils& operator=(ActorAnimationMinEngineVersionUtils const&);
    ActorAnimationMinEngineVersionUtils(ActorAnimationMinEngineVersionUtils const&);
    ActorAnimationMinEngineVersionUtils();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::MinEngineVersion useFormatVersionOrMinEngineVersionBackCompat(
        ::MinEngineVersion const& minEngineVersion,
        ::SemVersion const&       formatVersion
    );
    // NOLINTEND
};
