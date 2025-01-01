#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/network/packet/ServerboundLoadingScreenPacketType.h"
#include "mc/platform/Result.h"
#include "mc/util/NewType.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class ServerboundLoadingScreenPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ServerboundLoadingScreenPacketType> mServerboundLoadingScreenPacketType;
    ::ll::TypedStorage<4, 8, ::NewType<::std::optional<uint>>>     mLoadingScreenId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerboundLoadingScreenPacket() /*override*/ = default;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& bitStream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& bitStream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ServerboundLoadingScreenPacket();

    MCAPI ::NewType<::std::optional<uint>> getLoadingScreenId() const;

    MCAPI ::ServerboundLoadingScreenPacketType getServerboundLoadingScreenPacketType() const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& bitStream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& bitStream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
