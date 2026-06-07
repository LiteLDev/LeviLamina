#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerVideoCapturePacketPayload {
public:
    // PlayerVideoCapturePacketPayload inner types declare
    // clang-format off
    struct StartVideoCapture;
    struct StopVideoCapture;
    // clang-format on

    // PlayerVideoCapturePacketPayload inner types define
    struct StartVideoCapture {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, uint>           mFrameRate;
        ::ll::TypedStorage<8, 32, ::std::string> mFilePrefix;
        // NOLINTEND
    };

    struct StopVideoCapture {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        48,
        ::std::variant<
            ::PlayerVideoCapturePacketPayload::StartVideoCapture,
            ::PlayerVideoCapturePacketPayload::StopVideoCapture>>
        mParams;
    // NOLINTEND
};
