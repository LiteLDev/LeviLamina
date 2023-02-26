/**
 * @file  StructureManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
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
    StructureManager() = delete;
#endif

public:
    /**
     * @symbol  ??0StructureManager\@\@QEAA\@AEAVResourcePackManager\@\@\@Z
     */
    MCAPI StructureManager(class ResourcePackManager &);
    /**
     * @symbol  ?clearAndShutdownStructurePlacement\@StructureManager\@\@QEAAXXZ
     */
    MCAPI void clearAndShutdownStructurePlacement();
    /**
     * @symbol  ?createStructureDataExportPacket\@StructureManager\@\@QEAA?AVStructureTemplateDataResponsePacket\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBVResourcePackManager\@\@PEAVLevelStorage\@\@W4StructureTemplateResponseType\@\@\@Z
     */
    MCAPI class StructureTemplateDataResponsePacket createStructureDataExportPacket(std::string const &, class ResourcePackManager const *, class LevelStorage *, enum class StructureTemplateResponseType);
    /**
     * @symbol  ?createStructureDataImportPacket\@StructureManager\@\@QEAA?AVStructureTemplateDataResponsePacket\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4StructureTemplateResponseType\@\@\@Z
     */
    MCAPI class StructureTemplateDataResponsePacket createStructureDataImportPacket(std::string const &, enum class StructureTemplateResponseType);
    /**
     * @symbol  ?deleteStructure\@StructureManager\@\@QEAA?AW4StructureDeleteResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI enum class StructureDeleteResult deleteStructure(std::string const &, class LevelStorage &);
    /**
     * @symbol  ?getOrCreate\@StructureManager\@\@QEAAAEAVStructureTemplate\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class StructureTemplate & getOrCreate(std::string const &);
    /**
     * @symbol  ?getOrCreateLegacy\@StructureManager\@\@QEAAAEAVLegacyStructureTemplate\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class LegacyStructureTemplate & getOrCreateLegacy(std::string const &);
    /**
     * @symbol  ?getStructure\@StructureManager\@\@QEBAPEAVStructureTemplate\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class StructureTemplate * getStructure(std::string const &) const;
    /**
     * @symbol  ?importStructureFromTemplate\@StructureManager\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVStructureTemplate\@\@\@Z
     */
    MCAPI void importStructureFromTemplate(std::string, class StructureTemplate const &);
    /**
     * @symbol  ?load\@StructureManager\@\@QEAA_NAEAVStructureTemplate\@\@PEBVResourcePackManager\@\@PEAVLevelStorage\@\@\@Z
     */
    MCAPI bool load(class StructureTemplate &, class ResourcePackManager const *, class LevelStorage *);
    /**
     * @symbol  ?loadPlacementQueue\@StructureManager\@\@QEAAXAEAVLevelStorage\@\@AEAVLevel\@\@AEAVDimension\@\@\@Z
     */
    MCAPI void loadPlacementQueue(class LevelStorage &, class Level &, class Dimension &);
    /**
     * @symbol  ?loadPlacementQueueItem\@StructureManager\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@AEAVLevel\@\@AEAVDimension\@\@\@Z
     */
    MCAPI void loadPlacementQueueItem(std::string const &, class CompoundTag const &, class Level &, class Dimension &);
    /**
     * @symbol  ?queueLoad\@StructureManager\@\@QEAAXV?$unique_ptr\@VStructureAnimationData\@\@U?$default_delete\@VStructureAnimationData\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void queueLoad(std::unique_ptr<class StructureAnimationData>);
    /**
     * @symbol  ?readStructure\@StructureManager\@\@QEAA_NAEAVStructureTemplate\@\@\@Z
     */
    MCAPI bool readStructure(class StructureTemplate &);
    /**
     * @symbol  ?saveToLevel\@StructureManager\@\@QEAAXAEBVStructureTemplate\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void saveToLevel(class StructureTemplate const &, class LevelStorage &);
    /**
     * @symbol  ?tick\@StructureManager\@\@QEAAXAEBVDimension\@\@\@Z
     */
    MCAPI void tick(class Dimension const &);
    /**
     * @symbol  ?tryPlaceStructureInWorld\@StructureManager\@\@QEAA?AW4QueueRequestResult\@\@V?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEAVServerLevel\@\@AEAVDimension\@\@AEBVBoundingBox\@\@AEBVBlockPos\@\@AEBVStructureSettings\@\@AEBVStructureTemplate\@\@V?$unique_ptr\@VStructureAnimationData\@\@U?$default_delete\@VStructureAnimationData\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI enum class QueueRequestResult tryPlaceStructureInWorld(std::unique_ptr<class CommandArea>, class ServerLevel &, class Dimension &, class BoundingBox const &, class BlockPos const &, class StructureSettings const &, class StructureTemplate const &, std::unique_ptr<class StructureAnimationData>);
    /**
     * @symbol  ?getStructurePath\@StructureManager\@\@SA?AV?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> getStructurePath(std::string const &, std::string const &);
    /**
     * @symbol  ?getStructurePath\@StructureManager\@\@SA?AV?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> getStructurePath(std::string const &);

//private:
    /**
     * @symbol  ?_createLevelStorageId\@StructureManager\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@0\@Z
     */
    MCAPI std::string _createLevelStorageId(std::string const &, std::string const &);
    /**
     * @symbol  ?_findResource\@StructureManager\@\@AEAA_NAEBV?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@AEBVPackInstance\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool _findResource(class Core::PathBuffer<class Core::StackString<char, 1024>> const &, class PackInstance const &, std::string &);
    /**
     * @symbol  ?_findResource\@StructureManager\@\@AEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@1AEBVPackInstance\@\@AEAV23\@\@Z
     */
    MCAPI bool _findResource(std::string const &, class Core::PathBuffer<class Core::StackString<char, 1024>> const &, class Core::PathBuffer<class Core::StackString<char, 1024>> const &, class PackInstance const &, std::string &);
    /**
     * @symbol  ?_placeSegment\@StructureManager\@\@AEAA_NAEAVDimension\@\@AEAVStructureAnimationData\@\@AEAVChunkLoadActionList\@\@AEBVBoundingBox\@\@AEBV?$function\@$$A6A?AW4ChunksLoadedStatus\@\@UTick\@\@\@Z\@std\@\@\@Z
     */
    MCAPI bool _placeSegment(class Dimension &, class StructureAnimationData &, class ChunkLoadActionList &, class BoundingBox const &, class std::function<enum class ChunksLoadedStatus (struct Tick)> const &);
    /**
     * @symbol  ?_placeSegment\@StructureManager\@\@AEAA_NAEAVStructureAnimationData\@\@\@Z
     */
    MCAPI bool _placeSegment(class StructureAnimationData &);
    /**
     * @symbol  ?_readLegacyStructure\@StructureManager\@\@AEAAPEAVLegacyStructureTemplate\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class LegacyStructureTemplate * _readLegacyStructure(std::string const &);
    /**
     * @symbol  ?_removePlacementQueueItem\@StructureManager\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVStructureAnimationData\@\@\@Z
     */
    MCAPI void _removePlacementQueueItem(std::string const &, class StructureAnimationData &);
    /**
     * @symbol  ?_savePlacementQueueItem\@StructureManager\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVStructureAnimationData\@\@\@Z
     */
    MCAPI void _savePlacementQueueItem(std::string const &, class StructureAnimationData &);

private:
    /**
     * @symbol  ?BEHAVIOR_PACK_STRUCTURES_FOLDER\@StructureManager\@\@0PEBDEB
     */
    MCAPI static char const * BEHAVIOR_PACK_STRUCTURES_FOLDER;
    /**
     * @symbol  ?LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX\@StructureManager\@\@0PEBDEB
     */
    MCAPI static char const * LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX;

};