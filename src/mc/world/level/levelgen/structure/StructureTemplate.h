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
class Block;

class StructureTemplate {
public:
    std::string                                         mName;                  // this+0x8
    StructureTemplateData                               mStructureTemplateData; // this+0x28
    uchar                                               mStructureVersion;      // this+0xD8
    Bedrock::NonOwnerPointer<IUnknownBlockTypeRegistry> mUnknownBlockRegistry;  // this+0xE0
    uchar                                               mRemovable;             // this+0xF0
    std::map<Block const*, int>                         mBlockToIndex;          // this+0xF8
    uchar                                               mUnoptimized;           // this+0x108

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
    // vIndex: 0
    virtual ~StructureTemplate();

    // vIndex: 1
    virtual void clear();

    // vIndex: 2
    virtual bool _allowReadBlock(class BlockPos const&, class Block const& block) const;

    // vIndex: 3
    virtual bool _allowReadActor(class Actor const& actor) const;

    MCAPI
    StructureTemplate(class StructureTemplate const& temp, class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry>);

    MCAPI StructureTemplate(std::string_view name, class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry>);

    MCAPI void fillEmpty(class BlockPos const&);

    MCAPI void fillFromWorld(
        class BlockSource&             region,
        class BlockPos const&          capturePosition,
        class StructureSettings const& structureSettings
    );

    MCAPI std::vector<class JigsawStructureBlockInfo> getJigsawMarkers() const;

    MCAPI std::string const& getName() const;

    MCAPI bool getRemovable() const;

    MCAPI class BlockPos const& getSize() const;

    MCAPI class BoundingBox
    getTransformedBounds(class BlockPos loadPosition, class StructureSettings const& structureSettings) const;

    MCAPI bool isLoaded() const;

    MCAPI bool const isWaterlogged(class BlockPos const&) const;

    MCAPI void optimizePalette(std::string const&);

    MCAPI void placeInWorld(
        class BlockSource&                  region,
        class BlockPalette const&           globalBlockPalette,
        class BlockPos const&               position,
        class StructureSettings const&      structureSettings,
        class StructureTelemetryServerData* telemetryServerData = nullptr,
        bool                                updateItemData      = true
    ) const;

    MCAPI void placeNextSegmentInWorld(
        class StructureAnimationData& structureAnimationData,
        class BlockPalette const&     globalBlockPalette
    ) const;

    MCAPI std::unique_ptr<class CompoundTag> save() const;

    MCAPI bool setBlock(class BlockPos const&, class Block const*, bool);

    MCAPI void setStructureTemplateData(class StructureTemplateData const& data);

    MCAPI bool
    structureTemplateDataIsValid(class BlockSource const&, std::string const&, class BlockPos const&, class StructureSettings const&)
        const;

    MCAPI class Block const* tryGetBlockAtPos(class BlockPos const&) const;

    MCAPI static class BlockPos const INVALID_POSITION;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _clearStructureData();

    MCAPI void _fillBlockInfo(
        class BlockSource&    region,
        class BlockPos const& minCorner,
        class BlockPos const& maxCorner,
        class BlockPos const& size
    );

    MCAPI void
    _fillEntityList(class BlockSource& region, class BlockPos const& minCorner, class BlockPos const& maxCorner);

    MCAPI int _getOrCreateIndex(class Block const&, std::map<class Block const*, int>&, class StructureBlockPalette&);

    MCAPI void _placeEntitiesInWorld(
        class BlockSource&    region,
        class DataLoadHelper& dataLoadHelper,
        bool                  shouldReloadActorEquipment
    ) const;

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

    // private:
    // NOLINTBEGIN
    MCAPI static int const NO_BLOCK_INDEX_VALUE;

    // NOLINTEND
};
