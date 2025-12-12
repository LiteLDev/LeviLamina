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

class AnimatePacket : public ::Packet {
public:
    // AnimatePacket inner types define
    enum class Action : int {
        NoAction         = 0,
        Swing            = 1,
        WakeUp           = 3,
        CriticalHit      = 4,
        MagicCriticalHit = 5,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk95703f;
    ::ll::UntypedStorage<4, 4> mUnk7046d1;
    ::ll::UntypedStorage<4, 4> mUnk2225d1;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimatePacket& operator=(AnimatePacket const&);
    AnimatePacket(AnimatePacket const&);
    AnimatePacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~AnimatePacket() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
