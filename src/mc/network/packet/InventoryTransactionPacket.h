#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/InventoryPacket.h"
#include "mc/platform/Result.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ComplexInventoryTransaction;
class ReadOnlyBinaryStream;
class ServerPlayer;
struct ActorRotationComponent;
struct ItemStackLegacyRequestIdTag;
struct MoveInputComponent;
// clang-format on

class InventoryTransactionPacket : public ::InventoryPacket {
public:
    // InventoryTransactionPacket inner types define
    using LegacySetSlot = ::std::pair<::ContainerEnumName, ::std::vector<uchar>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::ItemStackLegacyRequestId> mLegacyRequestId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ContainerEnumName, ::std::vector<uchar>>>>
                                                                               mLegacySetItemSlots;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ComplexInventoryTransaction>> mTransaction;
    ::ll::TypedStorage<1, 1, bool>                                             mIsClientSide;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~InventoryTransactionPacket() /*override*/;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 6
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 17
    virtual void handle(
        ::ServerPlayer&             player,
        ::BlockPalette&             blockPalette,
        ::MoveInputComponent const& moveInput,
        ::ActorRotationComponent&   actorRotation,
        bool                        isAimAssist
    ) const /*override*/;

    // vIndex: 15
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
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

    MCAPI void $handle(
        ::ServerPlayer&             player,
        ::BlockPalette&             blockPalette,
        ::MoveInputComponent const& moveInput,
        ::ActorRotationComponent&   actorRotation,
        bool                        isAimAssist
    ) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
