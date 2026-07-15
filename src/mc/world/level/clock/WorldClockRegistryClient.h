#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/SyncWorldClocksPacketPayload.h"
#include "mc/world/level/clock/WorldClockRegistry.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class PacketSender;
// clang-format on

class WorldClockRegistryClient : public ::WorldClockRegistry {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldClockRegistryClient() /*override*/ = default;

#ifdef LL_PLAT_S
    virtual void tick(::PacketSender&, ::LevelData const&) /*override*/;
#else // LL_PLAT_C
    virtual void tick(::PacketSender&, ::LevelData const& levelData) /*override*/;
#endif

    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void _addTimeMarker(::SyncWorldClocksPacketPayload::AddTimeMarkerData const& data);

    MCAPI void _initializeRegistry(::SyncWorldClocksPacketPayload::InitializeRegistryData const& data);

    MCAPI void _removeTimeMarker(::SyncWorldClocksPacketPayload::RemoveTimeMarkerData const& data);

    MCAPI void _syncWorldClocksState(::SyncWorldClocksPacketPayload::SyncStateData const& data);
#endif
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void $tick(::PacketSender&, ::LevelData const& levelData);
#endif


    // NOLINTEND
};
