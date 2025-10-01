#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class PlayerVideoCapturePacket : public ::Packet {
public:
    // PlayerVideoCapturePacket inner types declare
    // clang-format off
    struct StartVideoCapture;
    struct StopVideoCapture;
    // clang-format on

    // PlayerVideoCapturePacket inner types define
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
        ::std::variant<::PlayerVideoCapturePacket::StartVideoCapture, ::PlayerVideoCapturePacket::StopVideoCapture>>
        mParams;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 5
    virtual void write(::BinaryStream&) const /*override*/;

    // vIndex: 14
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream&) /*override*/;

    // vIndex: 0
    virtual ~PlayerVideoCapturePacket() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
