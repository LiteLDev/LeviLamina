#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
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
struct ItemStackLegacyRequestIdTag;
// clang-format on

class InventoryTransactionPacket : public ::Packet {
public:
    // InventoryTransactionPacket inner types define
    using LegacySetSlot = ::std::pair<::ContainerEnumName, ::std::vector<uchar>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::ItemStackLegacyRequestId> mLegacyRequestId;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::ContainerEnumName, ::std::vector<uchar>>>>
                                                                               mLegacySetItemSlots;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ComplexInventoryTransaction>> mTransaction;
    ::ll::TypedStorage<1, 1, bool>                                             mIsClientSide;
    // NOLINTEND

public:
    // prevent constructor by default
    InventoryTransactionPacket& operator=(InventoryTransactionPacket const&);
    InventoryTransactionPacket(InventoryTransactionPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~InventoryTransactionPacket() /*override*/;

    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string_view getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InventoryTransactionPacket();

    MCAPI InventoryTransactionPacket(::InventoryTransactionPacket&&);

    MCAPI InventoryTransactionPacket(::std::unique_ptr<::ComplexInventoryTransaction> transaction, bool isClientSide);

    MCAPI void handle(::ServerPlayer& player, ::BlockPalette& blockPalette) const;

    MCAPI void postLoadItems(::BlockPalette& blockPalette, bool isClientSide) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::InventoryTransactionPacket&&);

    MCAPI void* $ctor(::std::unique_ptr<::ComplexInventoryTransaction> transaction, bool isClientSide);
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
