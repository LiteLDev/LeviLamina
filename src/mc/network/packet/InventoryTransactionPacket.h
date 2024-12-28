#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/containers/ContainerEnumName.h"
#include "mc/world/inventory/network/TypedClientNetId.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BlockPalette;
class ComplexInventoryTransaction;
class ReadOnlyBinaryStream;
struct ItemStackLegacyRequestIdTag;
// clang-format on

class InventoryTransactionPacket : public ::Packet {
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
    // prevent constructor by default
    InventoryTransactionPacket& operator=(InventoryTransactionPacket const&);
    InventoryTransactionPacket(InventoryTransactionPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    // vIndex: 0
    virtual ~InventoryTransactionPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI InventoryTransactionPacket();

    MCAPI InventoryTransactionPacket(::std::unique_ptr<::ComplexInventoryTransaction> transaction, bool isClientSide);

    MCAPI void postLoadItems(::BlockPalette& blockPalette, bool isClientSide) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

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

    MCAPI ::std::string $getName() const;

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
