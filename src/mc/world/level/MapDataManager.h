#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/legacy/ActorUniqueID.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class DimensionManager;
class IGameplayUserManagerConnector;
class ILevelStorageManagerConnector;
class IMapDataManagerOptions;
class LevelStorage;
class MapItemSavedData;
class PacketSender;
class Player;
struct DimensionType;
// clang-format on

class MapDataManager {
public:
    // MapDataManager inner types declare
    // clang-format off
    struct DeferredLoadData;
    // clang-format on

    // MapDataManager inner types define
    struct DeferredLoadData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 80> mUnk1433ac;
        ::ll::UntypedStorage<8, 64> mUnk15de5b;
        ::ll::UntypedStorage<8, 64> mUnk948872;
        // NOLINTEND

    public:
        // prevent constructor by default
        DeferredLoadData& operator=(DeferredLoadData const&);
        DeferredLoadData(DeferredLoadData const&);
        DeferredLoadData();
    };

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
    ::ll::TypedStorage<8, 208, ::MapDataManager::DeferredLoadData>        mDeferredLoadData;
    // NOLINTEND

public:
    // prevent constructor by default
    MapDataManager& operator=(MapDataManager const&);
    MapDataManager(MapDataManager const&);
    MapDataManager();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MapDataManager();

    virtual void registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    virtual ::MapItemSavedData& createMapSavedData(::ActorUniqueID const& uuid);

    virtual void requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate);

    virtual void _copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI MapDataManager(
        ::DimensionManager&                         dimensionManager,
        ::LevelStorage*                             levelStorage,
        ::std::unique_ptr<::IMapDataManagerOptions> mapDataManagerOptions,
        ::std::function<::ActorUniqueID()>          getNewUniqueID
    );

    MCNAPI ::std::unique_ptr<::MapItemSavedData> _deserializeMapData(::ActorUniqueID const& uuid);

    MCNAPI void _onSaveLevelData(::LevelStorage& levelStorage);

    MCNAPI ::MapItemSavedData*
    _publishMapData(::ActorUniqueID const& uuid, ::std::unique_ptr<::MapItemSavedData> loadedMap);

    MCNAPI bool copyAndLockMap(::ActorUniqueID originalMapUuid, ::ActorUniqueID newMapUuid);

    MCNAPI ::MapItemSavedData& createMapSavedData(
        ::std::vector<::ActorUniqueID> const& mapIds,
        ::BlockPos const&                     origin,
        ::DimensionType                       dimension,
        int                                   returnScaleLevel
    );

    MCNAPI ::MapItemSavedData& createMapSavedData(
        ::ActorUniqueID const& uuid,
        ::BlockPos const&      origin,
        ::DimensionType        dimension,
        int                    returnScaleLevel
    );

    MCNAPI ::ActorUniqueID expandMapByID(::ActorUniqueID uuid, bool wasInit);

    MCNAPI ::MapItemSavedData* getMapSavedData(::ActorUniqueID uuid);

    MCNAPI void loadMapDataForDeferredPublish(::ActorUniqueID uuid);

    MCNAPI void onStartLeaveGame();

    MCNAPI void publishDeferredMapData();

    MCNAPI void registerOnSaveLevelDataSubscription(::ILevelStorageManagerConnector& levelStorageManagerConnector);

    MCNAPI void tick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool hasMapToCopy(::Player& player, ::ActorUniqueID const& uuid);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::DimensionManager&                         dimensionManager,
        ::LevelStorage*                             levelStorage,
        ::std::unique_ptr<::IMapDataManagerOptions> mapDataManagerOptions,
        ::std::function<::ActorUniqueID()>          getNewUniqueID
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $registerOnGameplayUserAddedSubscription(::IGameplayUserManagerConnector& gameplayUserManagerConnector);

    MCNAPI ::MapItemSavedData& $createMapSavedData(::ActorUniqueID const& uuid);

    MCNAPI void $requestMapInfo(::ActorUniqueID const uuid, bool forceUpdate);

    MCNAPI void $_copyAndLockMap(::ActorUniqueID const originalMapUuid, ::ActorUniqueID const newMapUuid);


    // NOLINTEND
};
