#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MapDataManager {

public:
    // prevent constructor by default
    MapDataManager& operator=(MapDataManager const&) = delete;
    MapDataManager(MapDataManager const&)            = delete;
    MapDataManager()                                 = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?getAllMapData\@MapDataManager\@\@QEAAAEAV?$unordered_map\@UActorUniqueID\@\@V?$unique_ptr\@VMapItemSavedData\@\@U?$default_delete\@VMapItemSavedData\@\@\@std\@\@\@std\@\@U?$hash\@UActorUniqueID\@\@\@3\@U?$equal_to\@UActorUniqueID\@\@\@3\@V?$allocator\@U?$pair\@$$CBUActorUniqueID\@\@V?$unique_ptr\@VMapItemSavedData\@\@U?$default_delete\@VMapItemSavedData\@\@\@std\@\@\@std\@\@\@std\@\@\@3\@\@std\@\@XZ
     */
    MCAPI std::unordered_map<struct ActorUniqueID, std::unique_ptr<class MapItemSavedData>>& getAllMapData();
    /**
     * @symbol ??1MapDataManager\@\@QEAA\@XZ
     */
    MCAPI ~MapDataManager();
    // NOLINTEND
};
