#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class ApplicationInit {
public:
    // ApplicationInit inner types declare
    // clang-format off
    struct Objects;
    // clang-format on

    // ApplicationInit inner types define
    struct Objects {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk82e612;
        ::ll::UntypedStorage<8, 16> mUnkffe70a;
        ::ll::UntypedStorage<8, 16> mUnk18199e;
        // NOLINTEND

    public:
        // prevent constructor by default
        Objects& operator=(Objects const&);
        Objects(Objects const&);
        Objects();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkd026dd;
    ::ll::UntypedStorage<8, 8> mUnk6fe0b1;
    ::ll::UntypedStorage<1, 1> mUnkc6a30f;
    // NOLINTEND

public:
    // prevent constructor by default
    ApplicationInit& operator=(ApplicationInit const&);
    ApplicationInit(ApplicationInit const&);
    ApplicationInit();
};

} // namespace Bedrock
