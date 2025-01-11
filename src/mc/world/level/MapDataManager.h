#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Dimension;
class DimensionManager;
class IGameplayUserManagerConnector;
class ILevelStorageManagerConnector;
class IMapDataManagerOptions;
class LevelStorage;
class MapItemSavedData;
class PacketSender;
struct ActorUniqueID;
// clang-format on

class MapDataManager {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk6089a7;
    ::ll::UntypedStorage<8, 8>  mUnk215bd6;
    ::ll::UntypedStorage<8, 8>  mUnk62aa37;
    ::ll::UntypedStorage<8, 64> mUnka44462;
    ::ll::UntypedStorage<8, 16> mUnkda67f0;
    ::ll::UntypedStorage<8, 64> mUnk8ad806;
    ::ll::UntypedStorage<8, 24> mUnke8e6fb;
    // NOLINTEND

public:
    // prevent constructor by default
    MapDataManager& operator=(MapDataManager const&);
    MapDataManager(MapDataManager const&);
    MapDataManager();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MapDataManager();

    // vIndex: 1
    virtual void registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector&);

    // vIndex: 2
    virtual ::MapItemSavedData& createMapSavedData(::ActorUniqueID const& uuid);

    // vIndex: 3
    virtual void requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate);

    // vIndex: 4
    virtual void _copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI MapDataManager(
        ::DimensionManager&                         dimensionManager,
        ::LevelStorage*                             levelStorage,
        ::std::unique_ptr<::IMapDataManagerOptions> mapDataManagerOptions,
        ::std::function<::ActorUniqueID()>          getNewUniqueID
    );

    MCAPI ::MapItemSavedData* _loadMapData(::ActorUniqueID const& uuid);

    MCAPI void _onSaveLevelData(::LevelStorage& levelStorage);

    MCAPI bool copyAndLockMap(::ActorUniqueID originalMapUuid, ::ActorUniqueID newMapUuid);

    MCAPI ::MapItemSavedData& createMapSavedData(
        ::std::vector<::ActorUniqueID> const& mapIds,
        ::BlockPos const&                     origin,
        ::DimensionType                       dimension,
        int                                   returnScaleLevel
    );

    MCAPI ::MapItemSavedData& createMapSavedData(
        ::ActorUniqueID const& uuid,
        ::BlockPos const&      origin,
        ::DimensionType        dimension,
        int                    returnScaleLevel
    );

    MCAPI ::ActorUniqueID expandMapByID(::ActorUniqueID uuid, bool wasInit);

    MCAPI ::MapItemSavedData* getMapSavedData(::ActorUniqueID uuid);

    MCAPI void registerOnSaveLevelDataSubscription(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCAPI void setPacketSender(::PacketSender& packetSender);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::DimensionManager&                         dimensionManager,
        ::LevelStorage*                             levelStorage,
        ::std::unique_ptr<::IMapDataManagerOptions> mapDataManagerOptions,
        ::std::function<::ActorUniqueID()>          getNewUniqueID
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
    MCFOLD void $registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector&);

    MCAPI ::MapItemSavedData& $createMapSavedData(::ActorUniqueID const& uuid);

    MCAPI void $requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate);

    MCAPI void $_copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
