#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/volume/VolumeEntityManager.h"

// auto generated forward declare list
// clang-format off
class ChunkPos;
class Dimension;
class EntityContext;
class NetworkIdentifier;
class PacketSender;
class UserEntityIdentifierComponent;
// clang-format on

class VolumeEntityManagerServer : public ::VolumeEntityManager {
public:
    // VolumeEntityManagerServer inner types define
    enum class CreateVolumeResult : int {
        Success               = 0,
        EntityCreationFailed  = 1,
        ExceededVolumeLimit   = 2,
        DefinitionDoesntExist = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 88> mUnk6e629a;
    ::ll::UntypedStorage<1, 1>  mUnk3d4c19;
    // NOLINTEND

public:
    // prevent constructor by default
    VolumeEntityManagerServer& operator=(VolumeEntityManagerServer const&);
    VolumeEntityManagerServer(VolumeEntityManagerServer const&);
    VolumeEntityManagerServer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VolumeEntityManagerServer() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _sendVolumeToClient(
        ::EntityContext const&                 entity,
        ::UserEntityIdentifierComponent const& userIdentifier,
        ::NetworkIdentifier const&             source,
        ::PacketSender&                        packetSender
    ) const;

    MCAPI ::std::vector<::WeakRef<::EntityContext>>
    getAllVolumesOverlappingChunkPosition(::ChunkPos const& pos, ::DimensionType chunkDimension) const;

    MCAPI void sendAllVolumesToClient(
        ::UserEntityIdentifierComponent const& userIdentifier,
        ::NetworkIdentifier const&             source,
        ::PacketSender&                        packetSender
    ) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND
};
