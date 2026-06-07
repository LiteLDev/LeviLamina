#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/actor/SerializedAbilitiesData.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/actor/SerializedAbilitiesData.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class LayeredAbilities;
class ReadOnlyBinaryStream;
struct ActorUniqueID;
// clang-format on

class UpdateAbilitiesPacket : public ::Packet {
public:
    UpdateAbilitiesPacket(::ActorUniqueID targetPlayer, ::LayeredAbilities const& layeredAbilities)
    : mData(targetPlayer, layeredAbilities) {}

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::SerializedAbilitiesData> mData;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string_view getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UpdateAbilitiesPacket();

    MCAPI UpdateAbilitiesPacket(::ActorUniqueID targetPlayer, ::LayeredAbilities const& layeredAbilities);

#ifdef LL_PLAT_C
    MCAPI void fillIn(::LayeredAbilities& layeredAbilities) const;

    MCAPI ::ActorUniqueID getTargetPlayer() const;
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::ActorUniqueID targetPlayer, ::LayeredAbilities const& layeredAbilities);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::MinecraftPacketIds $getId() const;

    MCAPI ::std::string_view $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
