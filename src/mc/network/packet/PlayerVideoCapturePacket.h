#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
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
        ::ll::UntypedStorage<4, 4>  mUnk43f159;
        ::ll::UntypedStorage<8, 32> mUnk6b0e79;
        // NOLINTEND

    public:
        // prevent constructor by default
        StartVideoCapture& operator=(StartVideoCapture const&);
        StartVideoCapture(StartVideoCapture const&);
        StartVideoCapture();
    };

    struct StopVideoCapture {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnk964563;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerVideoCapturePacket& operator=(PlayerVideoCapturePacket const&);
    PlayerVideoCapturePacket(PlayerVideoCapturePacket const&);
    PlayerVideoCapturePacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream&) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream&) /*override*/;

    // vIndex: 0
    virtual ~PlayerVideoCapturePacket() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
