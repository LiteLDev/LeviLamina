#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BinaryStream;
class ReadOnlyBinaryStream;
// clang-format on

class MobArmorEquipmentPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 96> mUnk1e227c;
    ::ll::UntypedStorage<8, 96> mUnk71585c;
    ::ll::UntypedStorage<8, 96> mUnk8be8ab;
    ::ll::UntypedStorage<8, 96> mUnk3a6f13;
    ::ll::UntypedStorage<8, 96> mUnke95bdf;
    ::ll::UntypedStorage<8, 8>  mUnkc8c4a0;
    // NOLINTEND

public:
    // prevent constructor by default
    MobArmorEquipmentPacket& operator=(MobArmorEquipmentPacket const&);
    MobArmorEquipmentPacket(MobArmorEquipmentPacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~MobArmorEquipmentPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MobArmorEquipmentPacket();

    MCAPI explicit MobArmorEquipmentPacket(::Actor const& e);

    MCAPI_C void fillIn(::Actor& e) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::Actor const& e);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::MinecraftPacketIds $getId() const;

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
