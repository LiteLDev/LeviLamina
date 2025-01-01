#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class ReadOnlyBinaryStream;
class Vec3;
// clang-format on

class LevelSoundEventPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::SharedTypes::Legacy::LevelSoundEvent> mEventId;
    ::ll::TypedStorage<4, 12, ::Vec3>                                mPos;
    ::ll::TypedStorage<4, 4, int>                                    mData;
    ::ll::TypedStorage<8, 32, ::std::string>                         mEntityIdentifier;
    ::ll::TypedStorage<1, 1, bool>                                   mIsBabyMob;
    ::ll::TypedStorage<1, 1, bool>                                   mIsGlobal;
    // NOLINTEND

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
    virtual ~LevelSoundEventPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LevelSoundEventPacket();

    MCAPI LevelSoundEventPacket(
        ::SharedTypes::Legacy::LevelSoundEvent id,
        ::Vec3 const&                          pos,
        int                                    data,
        ::std::string const&                   entityType,
        bool                                   isBabyMob,
        bool                                   isGlobal
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(
        ::SharedTypes::Legacy::LevelSoundEvent id,
        ::Vec3 const&                          pos,
        int                                    data,
        ::std::string const&                   entityType,
        bool                                   isBabyMob,
        bool                                   isGlobal
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
    MCAPI static void** $vftable();
    // NOLINTEND
};
