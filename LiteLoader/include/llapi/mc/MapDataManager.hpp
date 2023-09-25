/**
 * @file  MapDataManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class MapDataManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPDATAMANAGER
public:
    class MapDataManager& operator=(class MapDataManager const &) = delete;
    MapDataManager(class MapDataManager const &) = delete;
    MapDataManager() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?registerOnCreateMapSavedDataCallback\@MapDataManager\@\@UEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVMapItemSavedData\@\@\@Z\@std\@\@\@Z
     */
    virtual class Bedrock::PubSub::Subscription registerOnCreateMapSavedDataCallback(class std::function<void (class MapItemSavedData &)>);
    /**
     * @vftbl 2
     * @symbol ?registerOnGameplayUserAddedSubscription\@MapDataManager\@\@UEAAXAEAVGameplayUserManager\@\@\@Z
     */
    virtual void registerOnGameplayUserAddedSubscription(class GameplayUserManager &);
    /**
     * @vftbl 3
     * @symbol ?createMapSavedData\@MapDataManager\@\@UEAAAEAVMapItemSavedData\@\@AEBUActorUniqueID\@\@_N\@Z
     */
    virtual class MapItemSavedData & createMapSavedData(struct ActorUniqueID const &, bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_MAPDATAMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~MapDataManager();
#endif
    /**
     * @symbol ??0MapDataManager\@\@QEAA\@AEAVDimensionManager\@\@PEAVLevelStorage\@\@V?$function\@$$A6A?AUActorUniqueID\@\@XZ\@std\@\@\@Z
     */
    MCAPI MapDataManager(class DimensionManager &, class LevelStorage *, class std::function<struct ActorUniqueID (void)>);
    /**
     * @symbol ?createMapSavedData\@MapDataManager\@\@QEAAAEAVMapItemSavedData\@\@AEBV?$vector\@UActorUniqueID\@\@V?$allocator\@UActorUniqueID\@\@\@std\@\@\@std\@\@AEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@H_N331\@Z
     */
    MCAPI class MapItemSavedData & createMapSavedData(std::vector<struct ActorUniqueID> const &, class BlockPos const &, class AutomaticID<class Dimension, int>, int, bool, bool, bool, class BlockPos const &);
    /**
     * @symbol ?createMapSavedData\@MapDataManager\@\@QEAAAEAVMapItemSavedData\@\@AEBUActorUniqueID\@\@AEBVBlockPos\@\@V?$AutomaticID\@VDimension\@\@H\@\@H_N331\@Z
     */
    MCAPI class MapItemSavedData & createMapSavedData(struct ActorUniqueID const &, class BlockPos const &, class AutomaticID<class Dimension, int>, int, bool, bool, bool, class BlockPos const &);
    /**
     * @symbol ?getAllMapData\@MapDataManager\@\@QEAAAEAV?$unordered_map\@UActorUniqueID\@\@V?$unique_ptr\@VMapItemSavedData\@\@U?$default_delete\@VMapItemSavedData\@\@\@std\@\@\@std\@\@U?$hash\@UActorUniqueID\@\@\@3\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@U?$pair\@$$CBUActorUniqueID\@\@V?$unique_ptr\@VMapItemSavedData\@\@U?$default_delete\@VMapItemSavedData\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<struct ActorUniqueID, std::unique_ptr<class MapItemSavedData>, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct std::pair<struct ActorUniqueID const, std::unique_ptr<class MapItemSavedData>>>> & getAllMapData();
    /**
     * @symbol ?getMapSavedData\@MapDataManager\@\@QEAAPEAVMapItemSavedData\@\@UActorUniqueID\@\@_N\@Z
     */
    MCAPI class MapItemSavedData * getMapSavedData(struct ActorUniqueID, bool);
    /**
     * @symbol ?registerOnSaveLevelDataSubscription\@MapDataManager\@\@QEAAXAEAVLevelStorageManager\@\@\@Z
     */
    MCAPI void registerOnSaveLevelDataSubscription(class LevelStorageManager &);

//protected:
    /**
     * @symbol ?_loadMapData\@MapDataManager\@\@IEAAPEAVMapItemSavedData\@\@AEBUActorUniqueID\@\@_N\@Z
     */
    MCAPI class MapItemSavedData * _loadMapData(struct ActorUniqueID const &, bool);
    /**
     * @symbol ?_onSaveLevelData\@MapDataManager\@\@IEAAXAEAVLevelStorage\@\@\@Z
     */
    MCAPI void _onSaveLevelData(class LevelStorage &);

protected:

};
