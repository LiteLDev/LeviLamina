#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class CompoundTag;
class Dimension;
class EntityContext;
class EntityNetId;
class MinEngineVersion;
class NetworkBlockPosition;
class ReadOnlyBinaryStream;
// clang-format on

class AddVolumeEntityPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::CompoundTag>          mComponents;
    ::ll::TypedStorage<8, 32, ::std::string>          mJsonIdentifier;
    ::ll::TypedStorage<8, 32, ::std::string>          mInstanceName;
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mMinBounds;
    ::ll::TypedStorage<4, 12, ::NetworkBlockPosition> mMaxBounds;
    ::ll::TypedStorage<4, 4, ::DimensionType>         mDimensionType;
    ::ll::TypedStorage<8, 120, ::MinEngineVersion>    mMinEngineVersion;
    ::ll::TypedStorage<4, 4, ::EntityNetId>           mEntityNetId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AddVolumeEntityPacket() /*override*/;

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
    MCAPI AddVolumeEntityPacket();

    MCAPI AddVolumeEntityPacket(
        ::EntityContext const&    entity,
        ::CompoundTag             components,
        ::MinEngineVersion const& minEngineVersion
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void*
    $ctor(::EntityContext const& entity, ::CompoundTag components, ::MinEngineVersion const& minEngineVersion);
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
