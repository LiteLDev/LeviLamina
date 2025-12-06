#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct EncodedImageCallback {
public:
    // EncodedImageCallback inner types declare
    // clang-format off
    struct Result;
    // clang-format on

    // EncodedImageCallback inner types define
    enum class DropReason : uint {};

    struct Result {
    public:
        // Result inner types define
        enum class Error : uint {};
    };
};

} // namespace webrtc
