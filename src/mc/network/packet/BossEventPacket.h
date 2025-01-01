#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/packet/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/actor/ai/util/BossBarColor.h"
#include "mc/world/actor/ai/util/BossBarOverlay.h"
#include "mc/world/actor/ai/util/BossEventUpdateType.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class BossComponent;
class RaidBossComponent;
class ReadOnlyBinaryStream;
struct ActorUniqueID;
// clang-format on

class BossEventPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>             FLAG_DARKEN;
    ::ll::TypedStorage<4, 4, int const>             FLAG_FOG;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>       mBossID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>       mPlayerID;
    ::ll::TypedStorage<4, 4, ::BossEventUpdateType> mEventType;
    ::ll::TypedStorage<8, 32, ::std::string>        mName;
    ::ll::TypedStorage<4, 4, float>                 mHealthPercent;
    ::ll::TypedStorage<4, 4, ::BossBarColor>        mColor;
    ::ll::TypedStorage<4, 4, ::BossBarOverlay>      mOverlay;
    ::ll::TypedStorage<1, 1, uchar>                 mDarkenScreen;
    ::ll::TypedStorage<1, 1, uchar>                 mCreateWorldFog;
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
    virtual ~BossEventPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BossEventPacket();

    MCAPI BossEventPacket(::BossEventUpdateType type, ::RaidBossComponent& component);

    MCAPI BossEventPacket(::BossEventUpdateType type, ::ActorUniqueID bossID, ::BossComponent& component);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BossEventUpdateType type, ::RaidBossComponent& component);

    MCAPI void* $ctor(::BossEventUpdateType type, ::ActorUniqueID bossID, ::BossComponent& component);
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
