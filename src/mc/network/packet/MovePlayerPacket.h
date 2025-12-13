#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/components/PlayerPositionModeComponent.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Player;
class ReadOnlyBinaryStream;
class Vec3;
// clang-format on

class MovePlayerPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc411d0;
    ::ll::UntypedStorage<4, 12> mUnk58a158;
    ::ll::UntypedStorage<4, 8>  mUnk146e88;
    ::ll::UntypedStorage<4, 4>  mUnkb4cd76;
    ::ll::UntypedStorage<1, 1>  mUnke2b0c8;
    ::ll::UntypedStorage<1, 1>  mUnkf2613d;
    ::ll::UntypedStorage<8, 8>  mUnkc48604;
    ::ll::UntypedStorage<4, 4>  mUnke96e1d;
    ::ll::UntypedStorage<4, 4>  mUnkd891dd;
    ::ll::UntypedStorage<8, 8>  mUnk548c50;
    // NOLINTEND

public:
    // prevent constructor by default
    MovePlayerPacket& operator=(MovePlayerPacket const&);
    MovePlayerPacket(MovePlayerPacket const&);
    MovePlayerPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual bool isValid() const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~MovePlayerPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MovePlayerPacket(::Player const& player, ::Vec3 const& pos);

    MCAPI MovePlayerPacket(
        ::Player const&                             player,
        ::PlayerPositionModeComponent::PositionMode resetPosition,
        int                                         cause,
        int                                         sourceEntityType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Player const& player, ::Vec3 const& pos);

    MCAPI void* $ctor(
        ::Player const&                             player,
        ::PlayerPositionModeComponent::PositionMode resetPosition,
        int                                         cause,
        int                                         sourceEntityType
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI bool $isValid() const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
