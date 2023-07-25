#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MapDataManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MAPDATAMANAGER
public:
    MapDataManager& operator=(MapDataManager const&) = delete;
    MapDataManager(MapDataManager const&)            = delete;
    MapDataManager()                                 = delete;
#endif

public:
    /**
     * @symbol
     * ?getAllMapData\@MapDataManager\@\@QEAAAEAV?$unordered_map\@UActorUniqueID\@\@V?$unique_ptr\@VMapItemSavedData\@\@U?$default_delete\@VMapItemSavedData\@\@\@std\@\@\@std\@\@U?$hash\@UActorUniqueID\@\@\@3\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@U?$pair\@$$CBUActorUniqueID\@\@V?$unique_ptr\@VMapItemSavedData\@\@U?$default_delete\@VMapItemSavedData\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI class std::unordered_map<
        struct ActorUniqueID,
        std::unique_ptr<class MapItemSavedData>,
        struct std::hash<struct ActorUniqueID>,
        struct std::equal_to<struct ActorUniqueID>,
        class std::allocator<struct std::pair<struct ActorUniqueID const, std::unique_ptr<class MapItemSavedData>>>>&
    getAllMapData();
    /**
     * @symbol ??1MapDataManager\@\@QEAA\@XZ
     */
    MCAPI ~MapDataManager();
};
