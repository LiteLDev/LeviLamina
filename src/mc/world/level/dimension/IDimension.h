#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/platform/brstd/function_ref.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BiomeRegistry;
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

    virtual void sendPacketForPosition(::BlockPos const&, ::Packet const&, ::Player const*) = 0;

    virtual void sendPacketForEntity(::Actor const&, ::Packet const&, ::Player const*) = 0;

    virtual void flushLevelChunkGarbageCollector() = 0;

    virtual void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector) = 0;

    virtual ::BiomeRegistry& getBiomeRegistry() = 0;

    virtual ::BiomeRegistry const& getBiomeRegistry() const = 0;

    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const&, ::DimensionType) const = 0;

    virtual void forEachPlayer(::brstd::function_ref<bool(::Player&)>) const = 0;

    virtual ::Actor* fetchEntity(::ActorUniqueID, bool) const = 0;

    virtual ::BlockSource& getBlockSourceFromMainChunkSource() const = 0;

    virtual void buildPlayersForPositionPacket(
        ::BlockPos const&,
        ::Player const*,
        ::std::vector<::NetworkIdentifierWithSubId>&
    ) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
