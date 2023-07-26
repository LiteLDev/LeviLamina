#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/StackString.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class StructureManager {

public:
    // prevent constructor by default
    StructureManager& operator=(StructureManager const&) = delete;
    StructureManager(StructureManager const&)            = delete;
    StructureManager()                                   = delete;

public:
    /**
     * @symbol ??0StructureManager\@\@QEAA\@AEAVResourcePackManager\@\@\@Z
     */
    MCAPI StructureManager(class ResourcePackManager&); // NOLINT
    /**
     * @symbol ?clearAndShutdownStructurePlacement\@StructureManager\@\@QEAAXXZ
     */
    MCAPI void clearAndShutdownStructurePlacement(); // NOLINT
    /**
     * @symbol
     * ?createStructureDataExportPacket\@StructureManager\@\@QEAA?AVStructureTemplateDataResponsePacket\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBVResourcePackManager\@\@PEAVLevelStorage\@\@W4StructureTemplateResponseType\@\@\@Z
     */
    MCAPI class StructureTemplateDataResponsePacket createStructureDataExportPacket(
        std::string const&,
        class ResourcePackManager const*,
        class LevelStorage*,
        enum class StructureTemplateResponseType
    ); // NOLINT
    /**
     * @symbol
     * ?createStructureDataImportPacket\@StructureManager\@\@QEAA?AVStructureTemplateDataResponsePacket\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@W4StructureTemplateResponseType\@\@\@Z
     */
    MCAPI class StructureTemplateDataResponsePacket
    createStructureDataImportPacket(std::string const&, enum class StructureTemplateResponseType); // NOLINT
    /**
     * @symbol
     * ?deleteStructure\@StructureManager\@\@QEAA?AW4StructureDeleteResult\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI enum class StructureDeleteResult deleteStructure(std::string const&, class LevelStorage&); // NOLINT
    /**
     * @symbol
     * ?getOrCreate\@StructureManager\@\@QEAAAEAVStructureTemplate\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class StructureTemplate& getOrCreate(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getOrCreateLegacy\@StructureManager\@\@QEAAAEAVLegacyStructureTemplate\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class LegacyStructureTemplate& getOrCreateLegacy(std::string const&); // NOLINT
    /**
     * @symbol
     * ?getStructure\@StructureManager\@\@QEBAPEAVStructureTemplate\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class StructureTemplate* getStructure(std::string const&) const; // NOLINT
    /**
     * @symbol
     * ?importStructureFromTemplate\@StructureManager\@\@QEAAXV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVStructureTemplate\@\@\@Z
     */
    MCAPI void importStructureFromTemplate(std::string, class StructureTemplate const&); // NOLINT
    /**
     * @symbol
     * ?load\@StructureManager\@\@QEAA_NAEAVStructureTemplate\@\@PEBVResourcePackManager\@\@PEAVLevelStorage\@\@\@Z
     */
    MCAPI bool load(class StructureTemplate&, class ResourcePackManager const*, class LevelStorage*); // NOLINT
    /**
     * @symbol ?loadPlacementQueue\@StructureManager\@\@QEAAXAEAVLevelStorage\@\@AEAVLevel\@\@AEAVDimension\@\@\@Z
     */
    MCAPI void loadPlacementQueue(class LevelStorage&, class Level&, class Dimension&); // NOLINT
    /**
     * @symbol
     * ?loadPlacementQueueItem\@StructureManager\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVCompoundTag\@\@AEAVLevel\@\@AEAVDimension\@\@\@Z
     */
    MCAPI void
    loadPlacementQueueItem(std::string const&, class CompoundTag const&, class Level&, class Dimension&); // NOLINT
    /**
     * @symbol
     * ?queueLoad\@StructureManager\@\@QEAAXV?$unique_ptr\@VStructureAnimationData\@\@U?$default_delete\@VStructureAnimationData\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI void queueLoad(std::unique_ptr<class StructureAnimationData>); // NOLINT
    /**
     * @symbol ?readStructure\@StructureManager\@\@QEAA_NAEAVStructureTemplate\@\@\@Z
     */
    MCAPI bool readStructure(class StructureTemplate&); // NOLINT
    /**
     * @symbol ?reset\@StructureManager\@\@QEAAXXZ
     */
    MCAPI void reset(); // NOLINT
    /**
     * @symbol ?saveToLevel\@StructureManager\@\@QEAAXAEBVStructureTemplate\@\@AEAVLevelStorage\@\@\@Z
     */
    MCAPI void saveToLevel(class StructureTemplate const&, class LevelStorage&); // NOLINT
    /**
     * @symbol
     * ?setUnknownBlockRegistry\@StructureManager\@\@QEAAXV?$NonOwnerPointer\@VIUnknownBlockTypeRegistry\@\@\@Bedrock\@\@\@Z
     */
    MCAPI void setUnknownBlockRegistry(class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry>); // NOLINT
    /**
     * @symbol ?tick\@StructureManager\@\@QEAAXAEBVDimension\@\@\@Z
     */
    MCAPI void tick(class Dimension const&); // NOLINT
    /**
     * @symbol
     * ?tryPlaceStructureInWorld\@StructureManager\@\@QEAA?AW4QueueRequestResult\@\@V?$unique_ptr\@VCommandArea\@\@U?$default_delete\@VCommandArea\@\@\@std\@\@\@std\@\@AEAVServerLevel\@\@AEAVDimension\@\@AEBVBoundingBox\@\@AEBVBlockPos\@\@AEBVStructureSettings\@\@AEBVStructureTemplate\@\@V?$unique_ptr\@VStructureAnimationData\@\@U?$default_delete\@VStructureAnimationData\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI enum class QueueRequestResult
    tryPlaceStructureInWorld(std::unique_ptr<class CommandArea>, class ServerLevel&, class Dimension&, class BoundingBox const&, class BlockPos const&, class StructureSettings const&, class StructureTemplate const&, std::unique_ptr<class StructureAnimationData>); // NOLINT
    /**
     * @symbol
     * ?getStructurePath\@StructureManager\@\@SA?AV?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>>
    getStructurePath(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?getStructurePath\@StructureManager\@\@SA?AV?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>>
    getStructurePath(std::string const&); // NOLINT

    // private:
    /**
     * @symbol
     * ?_createLevelStorageId\@StructureManager\@\@AEAA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV23\@0\@Z
     */
    MCAPI std::string _createLevelStorageId(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol
     * ?_findResource\@StructureManager\@\@AEAA_NAEBV?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@AEBVPackInstance\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI bool
    _findResource(class Core::PathBuffer<class Core::StackString<char, 1024>> const&, class PackInstance const&, std::string&); // NOLINT
    /**
     * @symbol
     * ?_findResource\@StructureManager\@\@AEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$PathBuffer\@V?$StackString\@D$0EAA\@\@Core\@\@\@Core\@\@1AEBVPackInstance\@\@AEAV23\@\@Z
     */
    MCAPI bool
    _findResource(std::string const&, class Core::PathBuffer<class Core::StackString<char, 1024>> const&, class Core::PathBuffer<class Core::StackString<char, 1024>> const&, class PackInstance const&, std::string&); // NOLINT
    /**
     * @symbol ?_placeSegment\@StructureManager\@\@AEAA_NAEAVStructureAnimationData\@\@\@Z
     */
    MCAPI bool _placeSegment(class StructureAnimationData&); // NOLINT
    /**
     * @symbol
     * ?_placeSegment\@StructureManager\@\@AEAA_NAEAVDimension\@\@AEAVStructureAnimationData\@\@AEAVChunkLoadActionList\@\@AEBVBoundingBox\@\@AEBV?$function\@$$A6A?AW4ChunksLoadedStatus\@\@UTick\@\@\@Z\@std\@\@\@Z
     */
    MCAPI bool
    _placeSegment(class Dimension&, class StructureAnimationData&, class ChunkLoadActionList&, class BoundingBox const&, class std::function<enum class ChunksLoadedStatus(struct Tick)> const&); // NOLINT
    /**
     * @symbol
     * ?_readLegacyStructure\@StructureManager\@\@AEAAPEAVLegacyStructureTemplate\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI class LegacyStructureTemplate* _readLegacyStructure(std::string const&); // NOLINT
    /**
     * @symbol
     * ?_removePlacementQueueItem\@StructureManager\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVStructureAnimationData\@\@\@Z
     */
    MCAPI void _removePlacementQueueItem(std::string const&, class StructureAnimationData&); // NOLINT
    /**
     * @symbol
     * ?_savePlacementQueueItem\@StructureManager\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAVStructureAnimationData\@\@\@Z
     */
    MCAPI void _savePlacementQueueItem(std::string const&, class StructureAnimationData&); // NOLINT

private:
    /**
     * @symbol ?BEHAVIOR_PACK_STRUCTURES_FOLDER\@StructureManager\@\@0PEBDEB
     */
    MCAPI static char const* BEHAVIOR_PACK_STRUCTURES_FOLDER; // NOLINT
    /**
     * @symbol ?LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX\@StructureManager\@\@0PEBDEB
     */
    MCAPI static char const* LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX; // NOLINT
};
