#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/level/chunk/NeighborAwareBlockUpdateType.h"
#include "mc/world/level/levelgen/structure/IStructureTemplate.h"
#include "mc/world/level/levelgen/structure/StructureTemplateData.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPalette;
class BlockPos;
class BlockSource;
class BoundingBox;
class CompoundTag;
class DataLoadHelper;
class IUnknownBlockTypeRegistry;
class JigsawStructureBlockInfo;
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
    ::ll::TypedStorage<8, 176, ::StructureTemplateData>                                mStructureTemplateData;
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
    // vIndex: 0
    virtual ~StructureTemplate() /*override*/;

    // vIndex: 4
    virtual bool load(::CompoundTag const& tag);

    // vIndex: 5
    virtual ::std::unique_ptr<::CompoundTag> save() const;

    // vIndex: 6
    virtual void clear();

    // vIndex: 7
    virtual ::BoundingBox
    getTransformedBounds(::BlockPos loadPosition, ::StructureSettings const& structureSettings) const;

    // vIndex: 8
    virtual void fillEmpty(::BlockPos const& size);

    // vIndex: 3
    virtual ::NeighborAwareBlockUpdateType shouldHandleUpgradeForBlock(::Block const& block) const /*override*/;

    // vIndex: 9
    virtual bool _allowReadBlock(::BlockPos const&, ::Block const& block) const;

    // vIndex: 10
    virtual bool _allowReadActor(::Actor const& actor) const;

    // vIndex: 2
    virtual ::BlockPos rawSize() const /*override*/;

    // vIndex: 1
    virtual ::br::worldgen::StructureTemplateBlockPalette randomPalette(::BlockPos randomPosSeed) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit StructureTemplate(::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry);

    MCAPI StructureTemplate(
        ::std::string_view                                      name,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
    );

    MCAPI StructureTemplate(
        ::StructureTemplate const&                              temp,
        ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry
    );

    MCAPI void _clearStructureData();

    MCAPI void _fillBlockInfo(
        ::BlockSource&    region,
        ::BlockPos const& minCorner,
        ::BlockPos const& maxCorner,
        ::BlockPos const& size
    );

    MCAPI void _fillEntityList(::BlockSource& region, ::BlockPos const& minCorner, ::BlockPos const& maxCorner);

    MCAPI int _getOrCreateIndex(
        ::Block const&                   block,
        ::std::map<::Block const*, int>& indexMap,
        ::StructureBlockPalette&         palette
    );

    MCAPI void _placeEntitiesInWorld(
        ::BlockSource&                 region,
        ::DataLoadHelper&              dataLoadHelper,
        bool                           shouldReloadActorEquipment,
        ::std::optional<::BoundingBox> overlapBB
    ) const;

    MCAPI void _placeNextBlockSegmentInWorld(
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

    MCAPI ::std::vector<::JigsawStructureBlockInfo> getJigsawMarkers() const;

    MCAPI bool const isWaterlogged(::BlockPos const& pos) const;

    MCAPI ::StructureTemplate& operator=(::StructureTemplate&&);

    MCAPI bool operator==(::StructureTemplate const& other) const;

    MCAPI void optimizePalette(::std::string const& paletteName);

    MCAPI void placeEntitiesInWorld(
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

    MCAPI void placeNextSegmentInWorld(
        ::StructureAnimationData& structureAnimationData,
        ::BlockPalette const&     globalBlockPalette
    ) const;

    MCAPI bool setBlock(::BlockPos const& pos, ::Block const* block, bool waterlogged);

    MCAPI void setStructureTemplateData(::StructureTemplateData const& data);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Block const& _mapToRotation(::Block const& curr, ::Rotation rotation);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BlockPos const& INVALID_POSITION();

    MCAPI static int const& NO_BLOCK_INDEX_VALUE();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry);

    MCAPI void*
    $ctor(::std::string_view name, ::Bedrock::NonOwnerPointer<::IUnknownBlockTypeRegistry> unknownBlockRegistry);

    MCAPI void* $ctor(
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

    MCAPI ::std::unique_ptr<::CompoundTag> $save() const;

    MCAPI void $clear();

    MCAPI ::BoundingBox
    $getTransformedBounds(::BlockPos loadPosition, ::StructureSettings const& structureSettings) const;

    MCAPI void $fillEmpty(::BlockPos const& size);

    MCAPI ::NeighborAwareBlockUpdateType $shouldHandleUpgradeForBlock(::Block const& block) const;

    MCAPI bool $_allowReadBlock(::BlockPos const&, ::Block const& block) const;

    MCAPI bool $_allowReadActor(::Actor const& actor) const;

    MCAPI ::BlockPos $rawSize() const;

    MCAPI ::br::worldgen::StructureTemplateBlockPalette $randomPalette(::BlockPos randomPosSeed) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
