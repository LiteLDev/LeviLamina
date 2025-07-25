#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/deps/shared_types/legacy/ContainerType.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/platform/Result.h"
#include "mc/world/ContainerID.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class UpdateTradePacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ContainerID>                        mContainerId;
    ::ll::TypedStorage<1, 1, ::SharedTypes::Legacy::ContainerType> mType;
    ::ll::TypedStorage<8, 32, ::std::string>                       mDisplayName;
    ::ll::TypedStorage<4, 4, int>                                  mSize;
    ::ll::TypedStorage<4, 4, int>                                  mTraderTier;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mEntityUniqueID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mLastTradingPlayer;
    ::ll::TypedStorage<8, 24, ::CompoundTag>                       mData;
    ::ll::TypedStorage<1, 1, bool>                                 mUseNewTradeScreen;
    ::ll::TypedStorage<1, 1, bool>                                 mUsingEconomyTrade;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& bitStream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~UpdateTradePacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UpdateTradePacket();

    MCAPI UpdateTradePacket(
        ::ContainerID                        containerID,
        ::SharedTypes::Legacy::ContainerType type,
        int                                  size,
        ::std::string const&                 displayName,
        ::CompoundTag&&                      tag,
        ::ActorUniqueID const&               entityID,
        ::ActorUniqueID const&               playerID,
        int                                  traderTier,
        bool                                 useNewTradeScreen,
        bool                                 usingEconomyTrade
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(
        ::ContainerID                        containerID,
        ::SharedTypes::Legacy::ContainerType type,
        int                                  size,
        ::std::string const&                 displayName,
        ::CompoundTag&&                      tag,
        ::ActorUniqueID const&               entityID,
        ::ActorUniqueID const&               playerID,
        int                                  traderTier,
        bool                                 useNewTradeScreen,
        bool                                 usingEconomyTrade
    );
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

    MCAPI void $write(::BinaryStream& bitStream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
