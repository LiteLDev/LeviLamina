#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/network/packet/SyncWorldClocksPacketPayload.h"
#include "mc/world/level/clock/WorldClockRegistry.h"

// auto generated forward declare list
// clang-format off
class LevelData;
class LevelEventCoordinator;
class PacketSender;
// clang-format on

class WorldClockRegistryClient : public ::WorldClockRegistry {
#ifdef LL_PLAT_S
#else // LL_PLAT_C
public:
    // prevent constructor by default
    WorldClockRegistryClient();

#endif
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WorldClockRegistryClient() /*override*/ = default;

    virtual void tick(::PacketSender&, ::LevelData const& levelData) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI explicit WorldClockRegistryClient(::Bedrock::NonOwnerPointer<::LevelEventCoordinator> eventCoordinator);

    MCAPI void _addTimeMarker(::SyncWorldClocksPacketPayload::AddTimeMarkerData const& data);

    MCAPI void _initializeRegistry(::SyncWorldClocksPacketPayload::InitializeRegistryData const& data);

    MCAPI void _removeTimeMarker(::SyncWorldClocksPacketPayload::RemoveTimeMarkerData const& data);

    MCAPI void _syncWorldClocksState(::SyncWorldClocksPacketPayload::SyncStateData const& data);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::LevelEventCoordinator> eventCoordinator);
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
