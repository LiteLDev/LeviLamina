/**
 * @file  MapDataManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @symbol ?getAllMapData\@MapDataManager\@\@QEAAAEAV?$unordered_map\@UActorUniqueID\@\@V?$unique_ptr\@VMapItemSavedData\@\@U?$default_delete\@VMapItemSavedData\@\@\@std\@\@\@std\@\@U?$hash\@UActorUniqueID\@\@\@3\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@U?$pair\@$$CBUActorUniqueID\@\@V?$unique_ptr\@VMapItemSavedData\@\@U?$default_delete\@VMapItemSavedData\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<struct ActorUniqueID, std::unique_ptr<class MapItemSavedData>, struct std::hash<struct ActorUniqueID>, struct std::equal_to<struct ActorUniqueID>, class std::allocator<struct std::pair<struct ActorUniqueID const, std::unique_ptr<class MapItemSavedData>>>> & getAllMapData();
    /**
     * @symbol ??1MapDataManager\@\@QEAA\@XZ
     */
    MCAPI ~MapDataManager();

};
