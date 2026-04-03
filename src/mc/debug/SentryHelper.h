#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SentryHelper {
public:
    // SentryHelper inner types declare
    // clang-format off
    struct SentryParameters;
    // clang-format on

    // SentryHelper inner types define
    struct SentryParameters {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnk5bfba7;
        ::ll::UntypedStorage<8, 16> mUnk140301;
        // NOLINTEND

    public:
        // prevent constructor by default
        SentryParameters& operator=(SentryParameters const&);
        SentryParameters(SentryParameters const&);
        SentryParameters();
    };
};
