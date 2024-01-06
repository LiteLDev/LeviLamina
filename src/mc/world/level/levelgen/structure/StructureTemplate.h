#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"
#include "mc/world/level/block/registry/IUnknownBlockTypeRegistry.h"
#include "mc/world/level/levelgen/structure/BoundingBox.h"
#include "mc/world/level/levelgen/structure/StructureTemplateData.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/enums/Mirror.h"
#include "mc/enums/Rotation.h"

class BlockSource;
class BlockPos;

class StructureTemplate {
public:
    std::string                                         mName;                  // this+0x0
    StructureTemplateData                               mStructureTemplateData; // this+0x20
    uchar                                               mStructureVersion;      // this+0xD0
    Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry> mUnknownBlockRegistry;

    inline bool load(class CompoundTag const& nbt) { return mStructureTemplateData.load(nbt); }

    LLAPI void placeInWorld(
        BlockSource&    blockSource,
        BlockPos const& minCorner,
        Mirror          mirror         = Mirror::None,
        Rotation        rotation       = Rotation::None,
        bool            ignoreBlocks   = false,
        bool            ignoreEntities = false
    ) const;

    LLNDAPI static std::unique_ptr<StructureTemplate> create(const std::string& name, CompoundTag const& tag);

    LLNDAPI static std::unique_ptr<StructureTemplate> create(
        const std::string& name,
        BlockSource&       blockSource,
        BoundingBox const& boundingBox,
        bool               ignoreBlocks   = false,
        bool               ignoreEntities = false
    );

    // prevent constructor by default
    StructureTemplate& operator=(StructureTemplate const&);
    StructureTemplate(StructureTemplate const&);
    StructureTemplate();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1StructureTemplate@@UEAA@XZ
    virtual ~StructureTemplate();

    // vIndex: 1, symbol: ?clear@StructureTemplate@@UEAAXXZ
    virtual void clear();

    // vIndex: 2, symbol: ?_allowReadBlock@StructureTemplate@@MEBA_NAEBVBlockPos@@AEBVBlock@@@Z
    virtual bool _allowReadBlock(class BlockPos const&, class Block const& block) const;

    // vIndex: 3, symbol: ?_allowReadActor@StructureTemplate@@MEBA_NAEBVActor@@@Z
    virtual bool _allowReadActor(class Actor const& actor) const;

    // symbol:
    // ??0StructureTemplate@@QEAA@V?$basic_string_view@DU?$char_traits@D@std@@@std@@V?$NonOwnerPointer@VIUnknownBlockTypeRegistry@@@Bedrock@@@Z
    MCAPI StructureTemplate(std::string_view name, class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry>);

    // symbol: ?fillFromWorld@StructureTemplate@@QEAAXAEAVBlockSource@@AEBVBlockPos@@AEBVStructureSettings@@@Z
    MCAPI void fillFromWorld(
        class BlockSource&             region,
        class BlockPos const&          capturePosition,
        class StructureSettings const& structureSettings
    );

    // symbol: ?getBlockAtPos@StructureTemplate@@QEBAAEBVBlock@@AEBVBlockPos@@@Z
    MCAPI class Block const& getBlockAtPos(class BlockPos const& pos) const;

    // symbol:
    // ?getJigsawMarkers@StructureTemplate@@QEBA?AV?$vector@VJigsawStructureBlockInfo@@V?$allocator@VJigsawStructureBlockInfo@@@std@@@std@@XZ
    MCAPI std::vector<class JigsawStructureBlockInfo> getJigsawMarkers() const;

    // symbol: ?getName@StructureTemplate@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string const& getName() const;

    // symbol: ?getSize@StructureTemplate@@QEBAAEBVBlockPos@@XZ
    MCAPI class BlockPos const& getSize() const;

    // symbol: ?getTransformedBounds@StructureTemplate@@QEBA?AVBoundingBox@@VBlockPos@@AEBVStructureSettings@@@Z
    MCAPI class BoundingBox
    getTransformedBounds(class BlockPos, class StructureSettings const& structureSettings) const;

    // symbol: ?isLoaded@StructureTemplate@@QEBA_NXZ
    MCAPI bool isLoaded() const;

    // symbol:
    // ?placeInWorld@StructureTemplate@@QEBAXAEAVBlockSource@@AEBVBlockPalette@@AEBVBlockPos@@AEBVStructureSettings@@PEAVStructureTelemetryServerData@@_N@Z
    MCAPI void placeInWorld(
        class BlockSource&                  region,
        class BlockPalette const&           globalBlockPalette,
        class BlockPos const&               position,
        class StructureSettings const&      structureSettings,
        class StructureTelemetryServerData* telemetryServerData = nullptr,
        bool                                updateItemData      = true
    ) const;

    // symbol: ?placeNextSegmentInWorld@StructureTemplate@@QEBAXAEAVStructureAnimationData@@AEBVBlockPalette@@@Z
    MCAPI void
    placeNextSegmentInWorld(class StructureAnimationData&, class BlockPalette const& globalBlockPalette) const;

    // symbol: ?save@StructureTemplate@@QEBA?AV?$unique_ptr@VCompoundTag@@U?$default_delete@VCompoundTag@@@std@@@std@@XZ
    MCAPI std::unique_ptr<class CompoundTag> save() const;

    // symbol: ?setStructureTemplateData@StructureTemplate@@QEAAXAEBVStructureTemplateData@@@Z
    MCAPI void setStructureTemplateData(class StructureTemplateData const& data);

    // symbol:
    // ?structureTemplateDataIsValid@StructureTemplate@@QEBA_NAEBVBlockSource@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBVBlockPos@@AEBVStructureSettings@@@Z
    MCAPI bool
    structureTemplateDataIsValid(class BlockSource const&, std::string const&, class BlockPos const&, class StructureSettings const&)
        const;

    // symbol: ?INVALID_POSITION@StructureTemplate@@2VBlockPos@@B
    MCAPI static class BlockPos const INVALID_POSITION;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_fillBlockInfo@StructureTemplate@@AEAAXAEAVBlockSource@@AEBVBlockPos@@11@Z
    MCAPI void _fillBlockInfo(
        class BlockSource&    region,
        class BlockPos const& minCorner,
        class BlockPos const& maxCorner,
        class BlockPos const& size
    );

    // symbol: ?_fillEntityList@StructureTemplate@@AEAAXAEAVBlockSource@@AEBVBlockPos@@1@Z
    MCAPI void
    _fillEntityList(class BlockSource& region, class BlockPos const& minCorner, class BlockPos const& maxCorner);

    // symbol: ?_placeEntitiesInWorld@StructureTemplate@@AEBAXAEAVBlockSource@@AEAVDataLoadHelper@@_N@Z
    MCAPI void _placeEntitiesInWorld(
        class BlockSource&    region,
        class DataLoadHelper& dataLoadHelper,
        bool                  shouldReloadActorEquipment
    ) const;

    // symbol:
    // ?_placeNextBlockSegmentInWorld@StructureTemplate@@AEBAXAEAVBlockSource@@_K1AEBVStructureSettings@@AEAVDataLoadHelper@@AEBVStructureBlockPalette@@AEBVBlockPalette@@VBlockPos@@AEBV7@AEBVVec3@@W4Rotation@@W4Mirror@@MIPEAVStructureTelemetryServerData@@_N_N@Z
    MCAPI void _placeNextBlockSegmentInWorld(
        class BlockSource&                 region,
        uint64                             startPlacement,
        uint64                             endPlacement,
        class StructureSettings const&     structureSettings,
        class DataLoadHelper&              dataLoadHelper,
        class StructureBlockPalette const& structureBlockPalette,
        class BlockPalette const&          globalBlockPalette,
        class BlockPos                     position,
        class BlockPos const&              offset,
        class Vec3 const&                  pivot,
        ::Rotation                         rotation,
        ::Mirror                           mirror,
        float                              integrityValue,
        uint                               integritySeed,
        class StructureTelemetryServerData*,
        bool updateItemData,
        bool ignoreJigsawBlocks
    ) const;

    // NOLINTEND
};
