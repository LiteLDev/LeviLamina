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

    public:
        // prevent constructor by default
        StartVideoCapture(StartVideoCapture const&);
        StartVideoCapture();

    public:
        // member functions
        // NOLINTBEGIN
        MCFOLD ::PlayerVideoCapturePacketPayload::StartVideoCapture&
        operator=(::PlayerVideoCapturePacketPayload::StartVideoCapture&&);

        MCFOLD ::PlayerVideoCapturePacketPayload::StartVideoCapture&
        operator=(::PlayerVideoCapturePacketPayload::StartVideoCapture const&);

        MCAPI ~StartVideoCapture();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCFOLD void $dtor();
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

public:
    // member functions
    // NOLINTBEGIN
    MCAPI_S ~PlayerVideoCapturePacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD_S void $dtor();
    // NOLINTEND
};
