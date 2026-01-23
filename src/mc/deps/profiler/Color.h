#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Profiler::details {

struct Color {
public:
    // Color inner types declare
    // clang-format off
    struct Predefined;
    // clang-format on

    // Color inner types define
    struct Predefined {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4> mUnkb4eb98;
        // NOLINTEND

    public:
        // prevent constructor by default
        Predefined& operator=(Predefined const&);
        Predefined(Predefined const&);
        Predefined();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk7a08d5;
    // NOLINTEND

public:
    // prevent constructor by default
    Color& operator=(Color const&);
    Color(Color const&);
    Color();
};

} // namespace Bedrock::Profiler::details
