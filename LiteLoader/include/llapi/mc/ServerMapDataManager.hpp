/**
 * @file  ServerMapDataManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Bedrock.hpp"
#include "MapDataManager.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


class ServerMapDataManager : public MapDataManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERMAPDATAMANAGER
public:
    class ServerMapDataManager& operator=(class ServerMapDataManager const &) = delete;
    ServerMapDataManager(class ServerMapDataManager const &) = delete;
    ServerMapDataManager() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?registerOnCreateMapSavedDataCallback\@ServerMapDataManager\@\@UEAA?AVSubscription\@PubSub\@Bedrock\@\@V?$function\@$$A6AXAEAVMapItemSavedData\@\@\@Z\@std\@\@\@Z
     */
    virtual class Bedrock::PubSub::Subscription registerOnCreateMapSavedDataCallback(class std::function<void (class MapItemSavedData &)>);
    /**
     * @vftbl 2
     * @symbol ?registerOnGameplayUserAddedSubscription\@ServerMapDataManager\@\@UEAAXAEAVGameplayUserManager\@\@\@Z
     */
    virtual void registerOnGameplayUserAddedSubscription(class GameplayUserManager &);
    /**
     * @vftbl 3
     * @symbol ?createMapSavedData\@ServerMapDataManager\@\@UEAAAEAVMapItemSavedData\@\@AEBUActorUniqueID\@\@_N\@Z
     */
    virtual class MapItemSavedData & createMapSavedData(struct ActorUniqueID const &, bool);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERMAPDATAMANAGER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerMapDataManager();
#endif
    /**
     * @symbol ??0ServerMapDataManager\@\@QEAA\@AEAVDimensionManager\@\@PEAVLevelStorage\@\@V?$function\@$$A6A?AUActorUniqueID\@\@XZ\@std\@\@\@Z
     */
    MCAPI ServerMapDataManager(class DimensionManager &, class LevelStorage *, class std::function<struct ActorUniqueID (void)>);

//private:
    /**
     * @symbol ?_onGameplayUserAdded\@ServerMapDataManager\@\@AEAAXAEAVEntityContext\@\@\@Z
     */
    MCAPI void _onGameplayUserAdded(class EntityContext &);

private:

};
