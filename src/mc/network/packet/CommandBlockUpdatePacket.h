#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockSource;
class CommandBlockActor;
class ReadOnlyBinaryStream;
// clang-format on

class CommandBlockUpdatePacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnke019e8;
    ::ll::UntypedStorage<2, 2>  mUnkacd19c;
    ::ll::UntypedStorage<1, 1>  mUnka24794;
    ::ll::UntypedStorage<1, 1>  mUnk32f5c9;
    ::ll::UntypedStorage<8, 8>  mUnka9b60a;
    ::ll::UntypedStorage<8, 32> mUnk120d9b;
    ::ll::UntypedStorage<8, 32> mUnk420d90;
    ::ll::UntypedStorage<8, 72> mUnk10bc9c;
    ::ll::UntypedStorage<4, 4>  mUnk11a417;
    ::ll::UntypedStorage<1, 1>  mUnkbd3eb9;
    ::ll::UntypedStorage<1, 1>  mUnk559d99;
    ::ll::UntypedStorage<1, 1>  mUnk55adbf;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandBlockUpdatePacket& operator=(CommandBlockUpdatePacket const&);
    CommandBlockUpdatePacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~CommandBlockUpdatePacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandBlockUpdatePacket(::CommandBlockUpdatePacket const&);

    MCAPI_C CommandBlockUpdatePacket(::BlockSource& region, ::CommandBlockActor const& cmdBlock);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::CommandBlockUpdatePacket const&);

    MCAPI_C void* $ctor(::BlockSource& region, ::CommandBlockActor const& cmdBlock);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
