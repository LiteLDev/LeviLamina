/**
 * @file  MC/StructureManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class StructureManager.
 *
 */
class StructureManager {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREMANAGER
public:
    class StructureManager& operator=(class StructureManager const &) = delete;
    StructureManager(class StructureManager const &) = delete;
#endif

public:
    /**
     * @hash   1169905606
     * @symbol ??0StructureManager@@QEAA@XZ
     */
    MCAPI StructureManager();
    /**
     * @hash   -461731931
     * @symbol ?clearAndShutdownStructurePlacement@StructureManager@@QEAAXXZ
     */
    MCAPI void clearAndShutdownStructurePlacement();
    /**
     * @hash   207489968
     * @symbol ?createStructureDataExportPacket@StructureManager@@QEAA?AVStructureTemplateDataResponsePacket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVResourcePackManager@@PEAVLevelStorage@@W4StructureTemplateResponseType@@@Z
     */
    MCAPI class StructureTemplateDataResponsePacket createStructureDataExportPacket(std::string const &, class ResourcePackManager const *, class LevelStorage *, enum StructureTemplateResponseType);
    /**
     * @hash   675013012
     * @symbol ?deleteStructure@StructureManager@@QEAA?AW4StructureDeleteResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLevelStorage@@@Z
     */
    MCAPI enum StructureDeleteResult deleteStructure(std::string const &, class LevelStorage &);
    /**
     * @hash   -964664811
     * @symbol ?getOrCreate@StructureManager@@QEAAAEAVStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class StructureTemplate & getOrCreate(std::string const &);
    /**
     * @hash   1715687459
     * @symbol ?getOrCreateLegacy@StructureManager@@QEAAAEAVLegacyStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class LegacyStructureTemplate & getOrCreateLegacy(std::string const &);
    /**
     * @hash   -904557594
     * @symbol ?getStructure@StructureManager@@QEBAPEAVStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class StructureTemplate * getStructure(std::string const &) const;
    /**
     * @hash   -2107782363
     * @symbol ?load@StructureManager@@QEAA_NAEAVStructureTemplate@@PEBVResourcePackManager@@PEAVLevelStorage@@@Z
     */
    MCAPI bool load(class StructureTemplate &, class ResourcePackManager const *, class LevelStorage *);
    /**
     * @hash   -333507718
     * @symbol ?loadPlacementQueue@StructureManager@@QEAAXAEAVLevelStorage@@AEAVLevel@@AEAVDimension@@@Z
     */
    MCAPI void loadPlacementQueue(class LevelStorage &, class Level &, class Dimension &);
    /**
     * @hash   -1420253681
     * @symbol ?loadPlacementQueueItem@StructureManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@AEAVLevel@@AEAVDimension@@@Z
     */
    MCAPI void loadPlacementQueueItem(std::string const &, class CompoundTag const &, class Level &, class Dimension &);
    /**
     * @hash   -1595163644
     * @symbol ?queueLoad@StructureManager@@QEAAXV?$unique_ptr@VStructureAnimationData@@U?$default_delete@VStructureAnimationData@@@std@@@std@@@Z
     */
    MCAPI void queueLoad(std::unique_ptr<class StructureAnimationData>);
    /**
     * @hash   -117834727
     * @symbol ?readStructure@StructureManager@@QEAA_NAEAVStructureTemplate@@@Z
     */
    MCAPI bool readStructure(class StructureTemplate &);
    /**
     * @hash   1764151213
     * @symbol ?saveToLevel@StructureManager@@QEAAXAEBVStructureTemplate@@AEAVLevelStorage@@@Z
     */
    MCAPI void saveToLevel(class StructureTemplate const &, class LevelStorage &);
    /**
     * @hash   1482760484
     * @symbol ?tick@StructureManager@@QEAAXAEBVDimension@@@Z
     */
    MCAPI void tick(class Dimension const &);
    /**
     * @hash   -1580955679
     * @symbol ?tryPlaceStructureInWorld@StructureManager@@QEAA?AW4QueueRequestResult@@V?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEAVServerLevel@@AEAVDimension@@AEBVBoundingBox@@AEBVBlockPos@@AEBVStructureSettings@@AEBVStructureTemplate@@V?$unique_ptr@VStructureAnimationData@@U?$default_delete@VStructureAnimationData@@@std@@@4@@Z
     */
    MCAPI enum QueueRequestResult tryPlaceStructureInWorld(std::unique_ptr<class CommandArea>, class ServerLevel &, class Dimension &, class BoundingBox const &, class BlockPos const &, class StructureSettings const &, class StructureTemplate const &, std::unique_ptr<class StructureAnimationData>);
    /**
     * @hash   -981668091
     * @symbol ?getStructurePath@StructureManager@@SA?AV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> getStructurePath(std::string const &, std::string const &);
    /**
     * @hash   479977911
     * @symbol ?getStructurePath@StructureManager@@SA?AV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> getStructurePath(std::string const &);

//private:
    /**
     * @hash   -1086910085
     * @symbol ?_createLevelStorageId@StructureManager@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@0@Z
     */
    MCAPI std::string _createLevelStorageId(std::string const &, std::string const &);
    /**
     * @hash   1118631776
     * @symbol ?_placeSegment@StructureManager@@AEAA_NAEAVDimension@@AEAVStructureAnimationData@@AEAVChunkLoadActionList@@AEBVBoundingBox@@AEBV?$function@$$A6A?AW4ChunksLoadedStatus@@UTick@@@Z@std@@@Z
     */
    MCAPI bool _placeSegment(class Dimension &, class StructureAnimationData &, class ChunkLoadActionList &, class BoundingBox const &, class std::function<enum ChunksLoadedStatus (struct Tick)> const &);
    /**
     * @hash   -695502774
     * @symbol ?_placeSegment@StructureManager@@AEAA_NAEAVStructureAnimationData@@@Z
     */
    MCAPI bool _placeSegment(class StructureAnimationData &);
    /**
     * @hash   -691175573
     * @symbol ?_readLegacyStructure@StructureManager@@AEAAPEAVLegacyStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCAPI class LegacyStructureTemplate * _readLegacyStructure(std::string const &);
    /**
     * @hash   579443225
     * @symbol ?_removePlacementQueueItem@StructureManager@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVStructureAnimationData@@@Z
     */
    MCAPI void _removePlacementQueueItem(std::string const &, class StructureAnimationData &);
    /**
     * @hash   -753267166
     * @symbol ?_savePlacementQueueItem@StructureManager@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVStructureAnimationData@@@Z
     */
    MCAPI void _savePlacementQueueItem(std::string const &, class StructureAnimationData &);

private:
    /**
     * @hash   2092646757
     * @symbol ?BEHAVIOR_PACK_STRUCTURES_FOLDER@StructureManager@@0PEBDEB
     */
    MCAPI static char const * BEHAVIOR_PACK_STRUCTURES_FOLDER;
    /**
     * @hash   100312661
     * @symbol ?LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX@StructureManager@@0PEBDEB
     */
    MCAPI static char const * LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX;

};