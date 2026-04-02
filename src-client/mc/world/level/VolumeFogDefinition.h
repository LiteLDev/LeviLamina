#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct VolumeFogDefinition {
public:
    // VolumeFogDefinition inner types declare
    // clang-format off
    struct ConstrainedString;
    // clang-format on

    // VolumeFogDefinition inner types define
    struct ConstrainedString {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 32> mUnkd64326;
        // NOLINTEND

    public:
        // prevent constructor by default
        ConstrainedString& operator=(ConstrainedString const&);
        ConstrainedString(ConstrainedString const&);
        ConstrainedString();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::VolumeFogDefinition::ConstrainedString> mFogDefintionIdentifier;
    ::ll::TypedStorage<4, 4, int>                                       mPriority;
    // NOLINTEND
};
