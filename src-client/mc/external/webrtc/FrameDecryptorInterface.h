#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace webrtc {

struct FrameDecryptorInterface {
public:
    // FrameDecryptorInterface inner types declare
    // clang-format off
    struct Result;
    // clang-format on

    // FrameDecryptorInterface inner types define
    enum class Status : uint {};

    struct Result {};
};

} // namespace webrtc
