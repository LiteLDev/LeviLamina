#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/ecs/EntityNetId.h"
#include "mc/nbt/CompoundTag.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/NetworkBlockPosition.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"
#include "mc/resources/MinEngineVersion.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class Dimension;
class EntityContext;
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
    ::ll::TypedStorage<8, 32, ::MinEngineVersion>     mMinEngineVersion;
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

    // vIndex: 5
    virtual void write(::BinaryStream& stream) const /*override*/;

    // vIndex: 13
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
