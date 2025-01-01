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
class Dimension;
class ILevelStorageManagerConnector;
class Packet;
class Player;
class Vec3;
struct ActorUniqueID;
// clang-format on

class IDimension {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IDimension();

    // vIndex: 1
    virtual bool isNaturalDimension() const = 0;

    // vIndex: 2
    virtual ::DimensionType getDimensionId() const = 0;

    // vIndex: 3
    virtual void sendPacketForPosition(::BlockPos const&, ::Packet const&, ::Player const*) = 0;

    // vIndex: 4
    virtual void sendPacketForEntity(::Actor const&, ::Packet const&, ::Player const*) = 0;

    // vIndex: 5
    virtual void flushLevelChunkGarbageCollector() = 0;

    // vIndex: 6
    virtual void
    initializeWithLevelStorageManagerConnector(::ILevelStorageManagerConnector& levelStorageManagerConnector) = 0;

    // vIndex: 8
    virtual ::BiomeRegistry& getBiomeRegistry() = 0;

    // vIndex: 7
    virtual ::BiomeRegistry const& getBiomeRegistry() const = 0;

    // vIndex: 9
    virtual ::Vec3 translatePosAcrossDimension(::Vec3 const&, ::DimensionType) const = 0;

    // vIndex: 10
    virtual void forEachPlayer(::brstd::function_ref<bool(::Player&)>) const = 0;

    // vIndex: 11
    virtual ::Actor* fetchEntity(::ActorUniqueID, bool) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
