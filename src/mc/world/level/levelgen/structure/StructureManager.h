#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/QueueRequestResult.h"
#include "mc/common/wrapper/StructureDeleteResult.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/StackString.h"
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/level/chunk/ChunksLoadedStatus.h"
#include "mc/world/level/levelgen/structure/StructureTemplateResponseType.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
// clang-format on

class StructureManager : public ::Bedrock::EnableNonOwnerReferences {
public:
    std::shared_mutex mRepositoryMutex; // this+0x18
    std::unordered_map<std::string, std::unique_ptr<class LegacyStructureTemplate>>
                                                                              mLegacyStructureRepository; // this+0x20
    std::unordered_map<std::string, std::unique_ptr<class StructureTemplate>> mStructureRepository;       // this+0x60
    std::vector<std::unique_ptr<class StructureAnimationData>>                mStructurePlacementQueue;   // this+0xA0
    uint                                                      mStructurePlacementSaveCounter;             // this+0xB8
    Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry> mUnknownBlockRegistry;                      // this+0xC0
    const Bedrock::NonOwnerPointer<class ResourcePackManager> mPackManager;


    // prevent constructor by default
    StructureManager& operator=(StructureManager const&);
    StructureManager(StructureManager const&);
    StructureManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StructureManager@@UEAA@XZ
    virtual ~StructureManager() = default;

    // symbol: ??0StructureManager@@QEAA@AEAVResourcePackManager@@@Z
    MCAPI explicit StructureManager(class ResourcePackManager&);

    // symbol: ?clearAndShutdownStructurePlacement@StructureManager@@QEAAXXZ
    MCAPI void clearAndShutdownStructurePlacement();

    // symbol:
    // ?createStructureDataExportPacket@StructureManager@@QEAA?AVStructureTemplateDataResponsePacket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBVResourcePackManager@@PEAVLevelStorage@@W4StructureTemplateResponseType@@@Z
    MCAPI class StructureTemplateDataResponsePacket createStructureDataExportPacket(
        std::string const&,
        class ResourcePackManager const*,
        class LevelStorage*,
        ::StructureTemplateResponseType
    );

    // symbol:
    // ?createStructureDataImportPacket@StructureManager@@QEAA?AVStructureTemplateDataResponsePacket@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@W4StructureTemplateResponseType@@@Z
    MCAPI class StructureTemplateDataResponsePacket
    createStructureDataImportPacket(std::string const&, ::StructureTemplateResponseType);

    // symbol:
    // ?deleteStructure@StructureManager@@QEAA?AW4StructureDeleteResult@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVLevelStorage@@@Z
    MCAPI ::StructureDeleteResult deleteStructure(std::string const&, class LevelStorage&);

    // symbol:
    // ?getOrCreate@StructureManager@@QEAAAEAVStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class StructureTemplate& getOrCreate(std::string const&);

    // symbol:
    // ?getOrCreateLegacy@StructureManager@@QEAAAEAVLegacyStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class LegacyStructureTemplate& getOrCreateLegacy(std::string const&);

    // symbol:
    // ?getStructure@StructureManager@@QEBAPEAVStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class StructureTemplate* getStructure(std::string const&) const;

    // symbol:
    // ?importStructureFromTemplate@StructureManager@@QEAAXV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVStructureTemplate@@@Z
    MCAPI void importStructureFromTemplate(std::string, class StructureTemplate const&);

    // symbol: ?load@StructureManager@@QEAA_NAEAVStructureTemplate@@PEBVResourcePackManager@@PEAVLevelStorage@@@Z
    MCAPI bool load(class StructureTemplate&, class ResourcePackManager const*, class LevelStorage*);

    // symbol: ?loadPlacementQueue@StructureManager@@QEAAXAEAVLevelStorage@@AEAVLevel@@AEAVDimension@@@Z
    MCAPI void loadPlacementQueue(class LevelStorage&, class Level&, class Dimension&);

    // symbol:
    // ?loadPlacementQueueItem@StructureManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVCompoundTag@@AEAVLevel@@AEAVDimension@@@Z
    MCAPI void loadPlacementQueueItem(std::string const&, class CompoundTag const&, class Level&, class Dimension&);

    // symbol:
    // ?queueLoad@StructureManager@@QEAAXV?$unique_ptr@VStructureAnimationData@@U?$default_delete@VStructureAnimationData@@@std@@@std@@@Z
    MCAPI void queueLoad(std::unique_ptr<class StructureAnimationData>);

    // symbol: ?readStructure@StructureManager@@QEAA_NAEAVStructureTemplate@@@Z
    MCAPI bool readStructure(class StructureTemplate&);

    // symbol: ?reset@StructureManager@@QEAAXXZ
    MCAPI void reset();

    // symbol: ?saveToLevel@StructureManager@@QEAAXAEBVStructureTemplate@@AEAVLevelStorage@@@Z
    MCAPI void saveToLevel(class StructureTemplate const&, class LevelStorage&);

    // symbol:
    // ?setUnknownBlockRegistry@StructureManager@@QEAAXV?$NonOwnerPointer@VIUnknownBlockTypeRegistry@@@Bedrock@@@Z
    MCAPI void setUnknownBlockRegistry(class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry>);

    // symbol: ?tick@StructureManager@@QEAAXAEBVDimension@@@Z
    MCAPI void tick(class Dimension const&);

    // symbol:
    // ?tryPlaceStructureInWorld@StructureManager@@QEAA?AW4QueueRequestResult@@V?$unique_ptr@VCommandArea@@U?$default_delete@VCommandArea@@@std@@@std@@AEAVServerLevel@@AEAVDimension@@AEBVBoundingBox@@AEBVBlockPos@@AEBVStructureSettings@@AEBVStructureTemplate@@V?$unique_ptr@VStructureAnimationData@@U?$default_delete@VStructureAnimationData@@@std@@@4@@Z
    MCAPI ::QueueRequestResult
    tryPlaceStructureInWorld(std::unique_ptr<class CommandArea>, class ServerLevel&, class Dimension&, class BoundingBox const&, class BlockPos const&, class StructureSettings const&, class StructureTemplate const&, std::unique_ptr<class StructureAnimationData>);

    // symbol:
    // ?getStructurePath@StructureManager@@SA?AV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>> getStructurePath(std::string const&);

    // symbol:
    // ?getStructurePath@StructureManager@@SA?AV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@0@Z
    MCAPI static class Core::PathBuffer<class Core::StackString<char, 1024>>
    getStructurePath(std::string const&, std::string const&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_createLevelStorageId@StructureManager@@AEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@0@Z
    MCAPI std::string _createLevelStorageId(std::string const&, std::string const&);

    // symbol:
    // ?_findResource@StructureManager@@AEAA_NAEBV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@AEBVPackInstance@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI bool
    _findResource(class Core::PathBuffer<class Core::StackString<char, 1024>> const&, class PackInstance const&, std::string&);

    // symbol:
    // ?_findResource@StructureManager@@AEAA_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$PathBuffer@V?$StackString@D$0EAA@@Core@@@Core@@1AEBVPackInstance@@AEAV23@@Z
    MCAPI bool
    _findResource(std::string const&, class Core::PathBuffer<class Core::StackString<char, 1024>> const&, class Core::PathBuffer<class Core::StackString<char, 1024>> const&, class PackInstance const&, std::string&);

    // symbol: ?_placeSegment@StructureManager@@AEAA_NAEAVStructureAnimationData@@@Z
    MCAPI bool _placeSegment(class StructureAnimationData&);

    // symbol:
    // ?_placeSegment@StructureManager@@AEAA_NAEAVDimension@@AEAVStructureAnimationData@@AEAVChunkLoadActionList@@AEBVBoundingBox@@AEBV?$function@$$A6A?AW4ChunksLoadedStatus@@UTick@@@Z@std@@@Z
    MCAPI bool
    _placeSegment(class Dimension&, class StructureAnimationData&, class ChunkLoadActionList&, class BoundingBox const&, std::function<::ChunksLoadedStatus(struct Tick)> const&);

    // symbol:
    // ?_readLegacyStructure@StructureManager@@AEAAPEAVLegacyStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class LegacyStructureTemplate* _readLegacyStructure(std::string const&);

    // symbol:
    // ?_removePlacementQueueItem@StructureManager@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVStructureAnimationData@@@Z
    MCAPI void _removePlacementQueueItem(std::string const&, class StructureAnimationData&);

    // symbol:
    // ?_savePlacementQueueItem@StructureManager@@AEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVStructureAnimationData@@@Z
    MCAPI void _savePlacementQueueItem(std::string const&, class StructureAnimationData&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?BEHAVIOR_PACK_STRUCTURES_FOLDER@StructureManager@@0PEBDEB
    MCAPI static char const* BEHAVIOR_PACK_STRUCTURES_FOLDER;

    // symbol: ?LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX@StructureManager@@0PEBDEB
    MCAPI static char const* LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $BEHAVIOR_PACK_STRUCTURES_FOLDER() { return BEHAVIOR_PACK_STRUCTURES_FOLDER; }

    static auto& $LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX() { return LEVEL_STORAGE_STRUCTURE_TEMPLATE_PREFIX; }

    // NOLINTEND
};
