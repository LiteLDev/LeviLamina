/**
 * @file  TickingAreasManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class TickingAreasManager.
 *
 */
class TickingAreasManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TICKINGAREASMANAGER
public:
    class TickingAreasManager& operator=(class TickingAreasManager const &) = delete;
    TickingAreasManager(class TickingAreasManager const &) = delete;
#endif

public:
    /**
     * @symbol  ??0TickingAreasManager\@\@QEAA\@XZ
     */
    MCAPI TickingAreasManager();
    /**
     * @symbol  ?addArea\@TickingAreasManager\@\@QEAA?AW4AddTickingAreaStatus\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@2W4AreaLimitCheck\@1\@_NW4TickingAreaLoadMode\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI enum class AddTickingAreaStatus addArea(class AutomaticID<class Dimension, int>, std::string const &, class BlockPos const &, class BlockPos const &, enum class TickingAreasManager::AreaLimitCheck, bool, enum class TickingAreaLoadMode, class LevelStorage &);
    /**
     * @symbol  ?addArea\@TickingAreasManager\@\@QEAA?AW4AddTickingAreaStatus\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVBlockPos\@\@HW4AreaLimitCheck\@1\@_NW4TickingAreaLoadMode\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI enum class AddTickingAreaStatus addArea(class AutomaticID<class Dimension, int>, std::string const &, class BlockPos const &, int, enum class TickingAreasManager::AreaLimitCheck, bool, enum class TickingAreaLoadMode, class LevelStorage &);
    /**
     * @symbol  ?addEntityArea\@TickingAreasManager\@\@QEAAXV?$AutomaticID\@VDimension\@\@H\@\@AEBUActorUniqueID\@\@AEBUBounds\@\@_NMAEAVLevelStorage\@\@\@Z
     */
    MCAPI void addEntityArea(class AutomaticID<class Dimension, int>, struct ActorUniqueID const &, struct Bounds const &, bool, float, class LevelStorage &);
    /**
     * @symbol  ?addEntityArea\@TickingAreasManager\@\@QEAAXV?$AutomaticID\@VDimension\@\@H\@\@AEBVActor\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void addEntityArea(class AutomaticID<class Dimension, int>, class Actor const &, class LevelStorage &);
    /**
     * @symbol  ?addTickingAreaListForDimension\@TickingAreasManager\@\@QEAAXV?$AutomaticID\@VDimension\@\@H\@\@AEBV?$shared_ptr\@VTickingAreaList\@\@\@std\@\@\@Z
     */
    MCAPI void addTickingAreaListForDimension(class AutomaticID<class Dimension, int>, class std::shared_ptr<class TickingAreaList> const &);
    /**
     * @symbol  ?countActiveStandaloneTickingAreas\@TickingAreasManager\@\@QEBAIXZ
     */
    MCAPI unsigned int countActiveStandaloneTickingAreas() const;
    /**
     * @symbol  ?countStandaloneTickingAreas\@TickingAreasManager\@\@QEBAIXZ
     */
    MCAPI unsigned int countStandaloneTickingAreas() const;
    /**
     * @symbol  ?getPendingStandaloneAreaDescriptions\@TickingAreasManager\@\@QEBA?AV?$vector\@UTickingAreaDescription\@\@V?$allocator\@UTickingAreaDescription\@\@\@std\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI std::vector<struct TickingAreaDescription> getPendingStandaloneAreaDescriptions(class AutomaticID<class Dimension, int>) const;
    /**
     * @symbol  ?getPendingStandaloneAreaDescriptionsByName\@TickingAreasManager\@\@QEBA?AV?$vector\@UTickingAreaDescription\@\@V?$allocator\@UTickingAreaDescription\@\@\@std\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@\@Z
     */
    MCAPI std::vector<struct TickingAreaDescription> getPendingStandaloneAreaDescriptionsByName(class AutomaticID<class Dimension, int>, std::string const &) const;
    /**
     * @symbol  ?getPendingStandaloneAreaDescriptionsByPosition\@TickingAreasManager\@\@QEBA?AV?$vector\@UTickingAreaDescription\@\@V?$allocator\@UTickingAreaDescription\@\@\@std\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI std::vector<struct TickingAreaDescription> getPendingStandaloneAreaDescriptionsByPosition(class AutomaticID<class Dimension, int>, class BlockPos const &) const;
    /**
     * @symbol  ?hasActiveAreas\@TickingAreasManager\@\@QEBA_NXZ
     */
    MCAPI bool hasActiveAreas() const;
    /**
     * @symbol  ?isPreloadDone\@TickingAreasManager\@\@QEBA_NXZ
     */
    MCAPI bool isPreloadDone() const;
    /**
     * @symbol  ?loadArea\@TickingAreasManager\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBVCompoundTag\@\@\@Z
     */
    MCAPI void loadArea(std::string const &, class CompoundTag const *);
    /**
     * @symbol  ?onTickingEntityAdded\@TickingAreasManager\@\@QEAAXV?$AutomaticID\@VDimension\@\@H\@\@AEAVActor\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void onTickingEntityAdded(class AutomaticID<class Dimension, int>, class Actor &, class LevelStorage &);
    /**
     * @symbol  ?removePendingAreaByName\@TickingAreasManager\@\@QEAA?AV?$vector\@UTickingAreaDescription\@\@V?$allocator\@UTickingAreaDescription\@\@\@std\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI std::vector<struct TickingAreaDescription> removePendingAreaByName(class AutomaticID<class Dimension, int>, std::string const &, class LevelStorage &);
    /**
     * @symbol  ?removePendingAreaByPosition\@TickingAreasManager\@\@QEAA?AV?$vector\@UTickingAreaDescription\@\@V?$allocator\@UTickingAreaDescription\@\@\@std\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVBlockPos\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI std::vector<struct TickingAreaDescription> removePendingAreaByPosition(class AutomaticID<class Dimension, int>, class BlockPos const &, class LevelStorage &);
    /**
     * @symbol  ?setPendingAreaLoadModeByName\@TickingAreasManager\@\@QEAA?AV?$vector\@UTickingAreaDescription\@\@V?$allocator\@UTickingAreaDescription\@\@\@std\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@3\@W4TickingAreaLoadMode\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI std::vector<struct TickingAreaDescription> setPendingAreaLoadModeByName(class AutomaticID<class Dimension, int>, std::string const &, enum class TickingAreaLoadMode, class LevelStorage &);
    /**
     * @symbol  ?setPendingAreaLoadModeByPosition\@TickingAreasManager\@\@QEAA?AV?$vector\@UTickingAreaDescription\@\@V?$allocator\@UTickingAreaDescription\@\@\@std\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBVBlockPos\@\@W4TickingAreaLoadMode\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI std::vector<struct TickingAreaDescription> setPendingAreaLoadModeByPosition(class AutomaticID<class Dimension, int>, class BlockPos const &, enum class TickingAreaLoadMode, class LevelStorage &);
    /**
     * @symbol  ?tick\@TickingAreasManager\@\@QEAAXAEBUTick\@\@\@Z
     */
    MCAPI void tick(struct Tick const &);
    /**
     * @symbol  ?update\@TickingAreasManager\@\@QEAAXAEAVLevel\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void update(class Level &, class LevelStorage &);
    /**
     * @symbol  ?getLimitCheck\@TickingAreasManager\@\@SA?AW4AreaLimitCheck\@1\@AEBVLevel\@\@_N\@Z
     */
    MCAPI static enum class TickingAreasManager::AreaLimitCheck getLimitCheck(class Level const &, bool);

//private:
    /**
     * @symbol  ?_addArea\@TickingAreasManager\@\@AEAA?AW4AddTickingAreaStatus\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBUBounds\@\@_NW4AreaLimitCheck\@1\@3W4TickingAreaLoadMode\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI enum class AddTickingAreaStatus _addArea(class AutomaticID<class Dimension, int>, std::string const &, struct Bounds const &, bool, enum class TickingAreasManager::AreaLimitCheck, bool, enum class TickingAreaLoadMode, class LevelStorage &);
    /**
     * @symbol  ?_deletePendingArea\@TickingAreasManager\@\@AEAAXAEAVLevelStorage\@\@AEBUPendingArea\@\@\@Z
     */
    MCAPI void _deletePendingArea(class LevelStorage &, struct PendingArea const &);
    /**
     * @symbol  ?_getPendingAreaDescriptionsFiltered\@TickingAreasManager\@\@AEBA?AV?$vector\@UTickingAreaDescription\@\@V?$allocator\@UTickingAreaDescription\@\@\@std\@\@\@std\@\@V?$AutomaticID\@VDimension\@\@H\@\@V?$function\@$$A6A_NAEBUPendingArea\@\@\@Z\@3\@\@Z
     */
    MCAPI std::vector<struct TickingAreaDescription> _getPendingAreaDescriptionsFiltered(class AutomaticID<class Dimension, int>, class std::function<bool (struct PendingArea const &)>) const;
    /**
     * @symbol  ?_hasPendingTickingAreaNamed\@TickingAreasManager\@\@AEBA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@UPendingArea\@\@V?$allocator\@UPendingArea\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI bool _hasPendingTickingAreaNamed(std::string const &, std::vector<struct PendingArea> const &) const;
    /**
     * @symbol  ?_processAdds\@TickingAreasManager\@\@AEAAXAEAVLevel\@\@\@Z
     */
    MCAPI void _processAdds(class Level &);
    /**
     * @symbol  ?_processRemoves\@TickingAreasManager\@\@AEAAXV?$AutomaticID\@VDimension\@\@H\@\@AEAVTickingAreaList\@\@AEAVLevel\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void _processRemoves(class AutomaticID<class Dimension, int>, class TickingAreaList &, class Level &, class LevelStorage &);
    /**
     * @symbol  ?_savePendingArea\@TickingAreasManager\@\@AEAAXAEAVLevelStorage\@\@V?$AutomaticID\@VDimension\@\@H\@\@AEBUPendingArea\@\@\@Z
     */
    MCAPI void _savePendingArea(class LevelStorage &, class AutomaticID<class Dimension, int>, struct PendingArea const &);

private:

};