#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/rendergraph/Packet.h"
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/PlayerInputTick.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AttributeInstanceHandle;
class BaseAttributeMap;
class BinaryStream;
class ReadOnlyBinaryStream;
struct AttributeData;
// clang-format on

class UpdateAttributesPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>                mRuntimeId;
    ::ll::TypedStorage<8, 24, ::std::vector<::AttributeData>> mAttributeData;
    ::ll::TypedStorage<8, 8, ::PlayerInputTick>               mTick;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateAttributesPacket();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~UpdateAttributesPacket() /*override*/;

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const /*override*/;

    // vIndex: 2
    virtual ::std::string getName() const /*override*/;

    // vIndex: 4
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 8
    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI UpdateAttributesPacket(::Actor const& entity, ::std::vector<::AttributeInstanceHandle> const& dirtyData);

    MCAPI UpdateAttributesPacket(
        ::ActorRuntimeID const&                         id,
        ::BaseAttributeMap const&                       map,
        ::std::vector<::AttributeInstanceHandle> const& dirtyData,
        ::PlayerInputTick                               tick
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Actor const& entity, ::std::vector<::AttributeInstanceHandle> const& dirtyData);

    MCAPI void* $ctor(
        ::ActorRuntimeID const&                         id,
        ::BaseAttributeMap const&                       map,
        ::std::vector<::AttributeInstanceHandle> const& dirtyData,
        ::PlayerInputTick                               tick
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

    MCAPI void $write(::BinaryStream& stream) const;

    MCAPI ::Bedrock::Result<void> $_read(::ReadOnlyBinaryStream& stream);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
