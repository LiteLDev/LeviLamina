#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

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
    ::ll::TypedStorage<8, 8, ::DimensionManager&>                                          mDimensionManager;
    ::ll::TypedStorage<8, 8, ::LevelStorage*>                                              mLevelStorage;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::std::unique_ptr<::IMapDataManagerOptions>>> mMapDataManagerOptions;
    ::ll::TypedStorage<8, 64, ::std::function<::ActorUniqueID()>>                          mGetNewUniqueID;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                             mOnSaveLevelData;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::ActorUniqueID, ::std::unique_ptr<::MapItemSavedData>>> mMapData;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::PacketSender>> mPacketSender;
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

    MCAPI void tick();
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
    MCNAPI static void** $vftable();
    // NOLINTEND
};
