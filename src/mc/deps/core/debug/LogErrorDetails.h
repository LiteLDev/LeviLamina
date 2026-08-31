#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class LogErrorDetails {
public:
    // LogErrorDetails inner types declare
    // clang-format off
    struct AddFrameToErrorContext;
    // clang-format on

    // LogErrorDetails inner types define
    struct AddFrameToErrorContext {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk6fe97c;
        ::ll::UntypedStorage<8, 8> mUnk334eb5;
        ::ll::UntypedStorage<1, 2> mUnk9c83bf;
        ::ll::UntypedStorage<4, 4> mUnk4780b3;
        // NOLINTEND

    public:
        // prevent constructor by default
        AddFrameToErrorContext& operator=(AddFrameToErrorContext const&);
        AddFrameToErrorContext(AddFrameToErrorContext const&);
        AddFrameToErrorContext();
    };
};

} // namespace Bedrock
