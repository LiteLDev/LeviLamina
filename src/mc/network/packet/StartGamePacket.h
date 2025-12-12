#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/MinecraftPacketIds.h"
#include "mc/network/Packet.h"
#include "mc/platform/Result.h"
#include "mc/world/level/GameType.h"

// auto generated forward declare list
// clang-format off
class ActorRuntimeID;
class BinaryStream;
class BlockDefinitionGroup;
class CompoundTag;
class ContentIdentity;
class LevelSettings;
class ReadOnlyBinaryStream;
class Vec2;
class Vec3;
struct ActorUniqueID;
struct PlayerMovementSettings;
namespace mce { class UUID; }
// clang-format on

class StartGamePacket : public ::Packet {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 1440> mUnke0fdbe;
    ::ll::UntypedStorage<8, 8>    mUnk83e619;
    ::ll::UntypedStorage<8, 8>    mUnkc51da8;
    ::ll::UntypedStorage<4, 4>    mUnkbeaa1e;
    ::ll::UntypedStorage<4, 12>   mUnk91c4b3;
    ::ll::UntypedStorage<4, 8>    mUnka7dd7d;
    ::ll::UntypedStorage<8, 32>   mUnk56e19d;
    ::ll::UntypedStorage<8, 32>   mUnk9e02c7;
    ::ll::UntypedStorage<8, 24>   mUnkc57ccf;
    ::ll::UntypedStorage<8, 16>   mUnk55b3a0;
    ::ll::UntypedStorage<1, 1>    mUnkcf48ae;
    ::ll::UntypedStorage<4, 8>    mUnkad44af;
    ::ll::UntypedStorage<8, 8>    mUnk930d3b;
    ::ll::UntypedStorage<4, 4>    mUnk124f7d;
    ::ll::UntypedStorage<8, 32>   mUnk6fa8b3;
    ::ll::UntypedStorage<1, 1>    mUnk18d75b;
    ::ll::UntypedStorage<8, 32>   mUnkb170ec;
    ::ll::UntypedStorage<8, 24>   mUnk763adb;
    ::ll::UntypedStorage<8, 8>    mUnk6731d1;
    ::ll::UntypedStorage<1, 1>    mUnkbf0f86;
    ::ll::UntypedStorage<1, 1>    mUnkc74fc4;
    ::ll::UntypedStorage<1, 1>    mUnk43842c;
    ::ll::UntypedStorage<1, 1>    mUnkdf3686;
    ::ll::UntypedStorage<8, 24>   mUnkea9ce3;
    // NOLINTEND

public:
    // prevent constructor by default
    StartGamePacket& operator=(StartGamePacket const&);
    StartGamePacket(StartGamePacket const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::MinecraftPacketIds getId() const /*override*/;

    virtual ::std::string getName() const /*override*/;

    virtual void write(::BinaryStream& stream) const /*override*/;

    virtual ::Bedrock::Result<void> _read(::ReadOnlyBinaryStream& stream) /*override*/;

    virtual ~StartGamePacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StartGamePacket();

    MCAPI StartGamePacket(
        ::LevelSettings const&          settings,
        ::ActorUniqueID                 entityId,
        ::ActorRuntimeID                runtimeId,
        ::GameType                      entityGameType,
        bool                            enableItemStackNetManager,
        ::Vec3 const&                   pos,
        ::Vec2 const&                   rot,
        ::std::string const&            levelId,
        ::std::string const&            levelName,
        ::ContentIdentity const&        premiumTemplateContentIdentity,
        ::std::string const&            multiplayerCorrelationId,
        ::BlockDefinitionGroup const&   blockDefinitionGroup,
        bool                            isTrial,
        ::CompoundTag                   playerPropertyData,
        ::PlayerMovementSettings const& movementSettings,
        bool                            enableTickDeathSystems,
        ::std::string const&            serverVersion,
        ::mce::UUID const&              worldTemplateId,
        uint64                          levelCurrentTime,
        int                             enchantmentSeed,
        uint64                          blockTypeRegistryChecksum
    );

    MCAPI_C void _prepareBlockPropertiesTags(::BlockDefinitionGroup const& blockDefinitionGroup);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();

    MCAPI void* $ctor(
        ::LevelSettings const&          settings,
        ::ActorUniqueID                 entityId,
        ::ActorRuntimeID                runtimeId,
        ::GameType                      entityGameType,
        bool                            enableItemStackNetManager,
        ::Vec3 const&                   pos,
        ::Vec2 const&                   rot,
        ::std::string const&            levelId,
        ::std::string const&            levelName,
        ::ContentIdentity const&        premiumTemplateContentIdentity,
        ::std::string const&            multiplayerCorrelationId,
        ::BlockDefinitionGroup const&   blockDefinitionGroup,
        bool                            isTrial,
        ::CompoundTag                   playerPropertyData,
        ::PlayerMovementSettings const& movementSettings,
        bool                            enableTickDeathSystems,
        ::std::string const&            serverVersion,
        ::mce::UUID const&              worldTemplateId,
        uint64                          levelCurrentTime,
        int                             enchantmentSeed,
        uint64                          blockTypeRegistryChecksum
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
