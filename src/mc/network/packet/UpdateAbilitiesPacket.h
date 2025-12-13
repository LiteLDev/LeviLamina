#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/SerializedAbilitiesData.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class UpdateAbilitiesPacket : public ::Packet {
public:
    UpdateAbilitiesPacket(::ActorUniqueID targetPlayer, ::LayeredAbilities const& layeredAbilities)
    : mData(targetPlayer, layeredAbilities) {}

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk92c2ba;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateAbilitiesPacket& operator=(UpdateAbilitiesPacket const&);
    UpdateAbilitiesPacket(UpdateAbilitiesPacket const&);
    UpdateAbilitiesPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~UpdateAbilitiesPacket() /*override*/;
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
