#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/block/Block.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpdateType.h"
#include "mc/world/level/levelgen/structure/IStructureTemplate.h"
#include "mc/world/level/levelgen/structure/StructureTemplateData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class BlockPalette;
class BlockPos;
class BlockSource;
class BoundingBox;
class CompoundTag;
class DataLoadHelper;
class Dimension;
class IUnknownBlockTypeRegistry;
class JigsawStructureBlockInfo;
class LevelChunk;
class StructureAnimationData;
class StructureBlockPalette;
class StructureSettings;
class StructureTelemetryServerData;
class Vec3;
namespace br::worldgen { struct StructureTemplateBlockPalette; }
// clang-format on

class StructureTemplate : public ::IStructureTemplate {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                           mName;
    ::ll::TypedStorage<8, 184, ::StructureTemplateData>                                mStructureTemplateData;
    ::ll::TypedStorage<1, 1, uchar>                                                    mStructureVersion;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry>> mUnknownBlockRegistry;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsRemovable;
    ::ll::TypedStorage<8, 16, ::std::map<::Block const*, int>>                         mBlockToIndex;
    ::ll::TypedStorage<1, 1, bool>                                                     mNeedsOptimize;
    // NOLINTEND

public:
    // prevent constructor by default
    StructureTemplate& operator=(StructureTemplate const&);
    StructureTemplate(StructureTemplate const&);
    StructureTemplate();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StructureTemplate() /*override*/;

    virtual bool load(::CompoundTag const& tag);

    virtual ::std::unique_ptr<::CompoundTag> save() const;

    virtual void clear();

    virtual ::BoundingBox
    getTransformedBounds(::BlockPos loadPosition, ::StructureSettings const& structureSettings) const;

    virtual void fillEmpty(::BlockPos const& size);

    virtual ::NeighborAwareBlockUpdateType shouldHandleUpgradeForBlock(::Block const& block) const /*override*/;

    virtual bool _allowReadBlock(::BlockPos const& position, ::Block const& block) const;

    virtual bool _allowReadActor(::Actor const& actor) const;

    virtual ::BlockPos rawSize() const /*override*/;

    virtual ::br::worldgen::StructureTemplateBlockPalette randomPalette(::BlockPos randomPosSeed) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StructureTemplate(::StructureTemplate&& other);

    MCNAPI explicit StructureTemplate(::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry);

    MCAPI StructureTemplate(
        ::std::string_view                                      name,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
    );

    MCNAPI StructureTemplate(
        ::StructureTemplate const&                              temp,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
    );

    MCNAPI void _fillBlockInfo(
        ::BlockSource&    region,
        ::BlockPos const& minCorner,
        ::BlockPos const& maxCorner,
        ::BlockPos const& size
    );

    MCNAPI void _fillEntityList(::BlockSource& region, ::BlockPos const& minCorner, ::BlockPos const& maxCorner);

    MCNAPI int _getOrCreateIndex(
        ::Block const&                   block,
        ::std::map<::Block const*, int>& indexMap,
        ::StructureBlockPalette&         palette
    );

    MCNAPI void _placeEntitiesInWorld(
        ::BlockSource&                 region,
        ::DataLoadHelper&              dataLoadHelper,
        bool                           shouldReloadActorEquipment,
        ::std::optional<::BoundingBox> overlapBB
    ) const;

    MCNAPI void _placeNextBlockSegmentInWorld(
        ::BlockSource&                 region,
        uint64                         startPlacement,
        uint64                         endPlacement,
        ::StructureSettings const&     structureSettings,
        ::DataLoadHelper&              dataLoadHelper,
        ::StructureBlockPalette const& structureBlockPalette,
        ::BlockPalette const&          globalBlockPalette,
        ::BlockPos                     position,
        ::BlockPos const&              offset,
        ::Vec3 const&                  pivot,
        ::Rotation                     rotation,
        ::Mirror                       mirror,
        float                          integrityValue,
        uint                           integritySeed,
        ::StructureTelemetryServerData*,
        bool updateItemData,
        bool ignoreJigsawBlocks
    ) const;

    MCAPI void fillFromWorld(
        ::BlockSource&             region,
        ::BlockPos const&          capturePosition,
        ::StructureSettings const& structureSettings
    );

    MCNAPI ::std::vector<::JigsawStructureBlockInfo> getJigsawMarkers() const;

    MCNAPI bool const isWaterlogged(::BlockPos const& pos) const;

    MCNAPI ::StructureTemplate& operator=(::StructureTemplate&& other);

    MCNAPI bool operator==(::StructureTemplate const& other) const;

    MCNAPI void optimizePalette(::std::string const& paletteName);

    MCNAPI void placeEntitiesInWorld(
        ::BlockSource&             region,
        ::BlockPos const&          position,
        ::StructureSettings const& structureSettings,
        ::BoundingBox              overlapBB
    ) const;

    MCAPI void placeInWorld(
        ::BlockSource&                  region,
        ::BlockPalette const&           globalBlockPalette,
        ::BlockPos const&               position,
        ::StructureSettings const&      structureSettings,
        ::StructureTelemetryServerData* telemetryServerData,
        bool                            updateItemData
    ) const;

#ifdef LL_PLAT_C
    MCNAPI void placeNextSegmentInWorld(
        ::StructureAnimationData& structureAnimationData,
        ::BlockPalette const&     globalBlockPalette
    ) const;
#endif

    MCNAPI bool setBlock(::BlockPos const& pos, ::Block const* block, bool waterlogged);

    MCNAPI bool structureTemplateDataIsValid(
        ::BlockSource const&       region,
        ::std::string const&       structureName,
        ::BlockPos const&          capturePosition,
        ::StructureSettings const& structureSettings
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Block const& _mapToRotation(::Block const& curr, ::Rotation rotation);

#ifdef LL_PLAT_C
    MCNAPI static ::std::vector<::std::unique_ptr<::LevelChunk>> constructTransformedLevelChunks(
        ::Dimension&                                            targetDimension,
        ::StructureSettings const&                              settings,
        ::StructureTemplateData const&                          structureTemplateData,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> blockRegistry
    );
#endif

    MCNAPI static ::Block const* tryGetBlockAtPos(
        ::BlockPos const&                                       pos,
        ::StructureTemplateData const&                          structureTemplateData,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> blockRegistry
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::StructureTemplate&& other);

    MCNAPI void* $ctor(::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry);

    MCAPI void*
    $ctor(::std::string_view name, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry);

    MCNAPI void* $ctor(
        ::StructureTemplate const&                              temp,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $load(::CompoundTag const& tag);

    MCNAPI ::std::unique_ptr<::CompoundTag> $save() const;

    MCNAPI void $clear();

    MCNAPI ::BoundingBox
    $getTransformedBounds(::BlockPos loadPosition, ::StructureSettings const& structureSettings) const;

    MCNAPI void $fillEmpty(::BlockPos const& size);

    MCNAPI ::NeighborAwareBlockUpdateType $shouldHandleUpgradeForBlock(::Block const& block) const;

    MCNAPI bool $_allowReadBlock(::BlockPos const& position, ::Block const& block) const;

    MCNAPI bool $_allowReadActor(::Actor const& actor) const;

    MCNAPI ::BlockPos $rawSize() const;

    MCNAPI ::br::worldgen::StructureTemplateBlockPalette $randomPalette(::BlockPos randomPosSeed) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
