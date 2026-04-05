#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BiomeRegistry;
class Block;
class BlockPos;
class BlockSource;
class Dimension;
class ILevelStorageManagerConnector;
class Packet;
class Player;
class Vec3;
struct ActorUniqueID;
struct NetworkIdentifierWithSubId;
// clang-format on

class IDimension {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IDimension();

    virtual bool isNaturalDimension() const = 0;

    virtual ::DimensionType getDimensionId() const = 0;

    virtual void sendPacketForPosition(::BlockPos const& position, ::Packet const& packet, ::Player const* except) = 0;

    virtual void sendPacketForEntity(::Actor const& actor, ::Packet const& packet, ::Player const* except) = 0;

    virtual void flushLevelChunkGarbageCollector() = 0;

    virtual void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector) = 0;

    virtual ::BiomeRegistry& getBiomeRegistry() = 0;

    virtual ::BiomeRegistry const& getBiomeRegistry() const = 0;

    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const& originalPos, ::DimensionType fromId) const = 0;

    virtual void forEachPlayer(::brstd::function_ref<bool(::Player&)> callback) const = 0;

    virtual ::Actor* fetchEntity(::ActorUniqueID actorID, bool getRemoved) const = 0;

    virtual ::BlockSource& getBlockSourceFromMainChunkSource() const = 0;

    virtual void buildPlayersForPositionPacket(
        ::BlockPos const&                            position,
        ::Player const*                              except,
        ::std::vector<::NetworkIdentifierWithSubId>& result
    ) const = 0;

    virtual void updatePoiBlockStateChange(::BlockPos pos, ::Block const& removed, ::Block const& placed) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD void $updatePoiBlockStateChange(::BlockPos pos, ::Block const& removed, ::Block const& placed) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
