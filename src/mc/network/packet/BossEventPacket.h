#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"
#include "mc/safety/RedactableString.h"
#include "mc/world/actor/ai/util/BossBarColor.h"
#include "mc/world/actor/ai/util/BossBarOverlay.h"
#include "mc/world/actor/ai/util/BossEventUpdateType.h"

// auto generated forward declare list
// clang-format off
class BinaryStream;
class RaidBossComponent;
class ReadOnlyBinaryStream;
struct BossComponent;
// clang-format on

class BossEventPacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int const>                            FLAG_DARKEN;
    ::ll::TypedStorage<4, 4, int const>                            FLAG_FOG;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mBossID;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID>                      mPlayerID;
    ::ll::TypedStorage<4, 4, ::BossEventUpdateType>                mEventType;
    ::ll::TypedStorage<8, 72, ::Bedrock::Safety::RedactableString> mName;
    ::ll::TypedStorage<4, 4, float>                                mHealthPercent;
    ::ll::TypedStorage<4, 4, ::BossBarColor>                       mColor;
    ::ll::TypedStorage<4, 4, ::BossBarOverlay>                     mOverlay;
    ::ll::TypedStorage<1, 1, uchar>                                mDarkenScreen;
    ::ll::TypedStorage<1, 1, uchar>                                mCreateWorldFog;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string_view getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BossEventPacket();

    MCAPI BossEventPacket(::BossEventUpdateType type, ::RaidBossComponent& component);

    MCAPI BossEventPacket(::BossEventUpdateType type, ::ActorUniqueID bossID, ::BossComponent& component);

#ifdef LL_PLAT_C
    MCAPI BossEventPacket(::BossEventUpdateType type, ::ActorUniqueID bossID, ::ActorUniqueID playerID);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(::BossEventUpdateType type, ::RaidBossComponent& component);

    MCAPI void* $ctor(::BossEventUpdateType type, ::ActorUniqueID bossID, ::BossComponent& component);

#ifdef LL_PLAT_C
    MCAPI void* $ctor(::BossEventUpdateType type, ::ActorUniqueID bossID, ::ActorUniqueID playerID);
#endif
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
