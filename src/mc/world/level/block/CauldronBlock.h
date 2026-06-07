#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/CauldronLiquidType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BaseGameVersion;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class CauldronBlockActor;
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class ItemInstance;
class ItemStack;
class Level;
class Player;
class Random;
class Vec3;
struct BlockAnimateTickData;
struct Brightness;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class CauldronBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    CauldronBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    virtual ::HitResult clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const /*override*/;

    virtual void addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const /*override*/;

    virtual bool canProvideSupport(::Block const& face, uchar type, ::BlockSupportType) const /*override*/;

    virtual void
    handlePrecipitation(::BlockSource& region, ::BlockPos const& pos, float downfallAmount, float temperature) const
        /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource& block, ::BlockPos const&, ::Block const&, uchar) const /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual int getExtraRenderLayers() const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool breaksFallingBlocks(::Block const& version, ::BaseGameVersion const) const /*override*/;

    virtual ::Brightness getLight(::Block const& block) const /*override*/;

    virtual ::Brightness getLightEmission(::Block const& block) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CauldronBlock(::std::string const& nameId, int id);

    MCAPI void _explodeCauldronContents(::BlockSource& region, ::BlockPos const& pos, ushort) const;

    MCAPI void _flushCauldronEvent(::BlockSource& region, ::BlockPos const& pos, int prevColor) const;

    MCAPI void _sendCauldronUsedEventToClient(
        ::Player const&                              player,
        short                                        itemId,
        ::MinecraftEventing::POIBlockInteractionType interactionType
    ) const;

    MCAPI void _spawnCauldronEvent(
        ::BlockSource&                    region,
        ::BlockPos const&                 pos,
        ::SharedTypes::Legacy::LevelEvent levelEvent
    ) const;

    MCAPI bool _useDyeableComponent(
        ::ItemStack&          itemInstance,
        ::Player&             player,
        ::BlockPos const&     pos,
        ::CauldronBlockActor& blockEntity,
        ::BlockSource&        region,
        int                   fillLevel,
        bool                  isEmpty,
        bool                  isWater,
        bool                  isCleanWater
    ) const;

    MCAPI void _useInventory(::Player& player, ::ItemStack& current, ::ItemStack& replaceWith, int useCount) const;

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCAPI void receiveStalactiteDrip(
        ::BlockSource&                        region,
        ::BlockPos const&                     pos,
        ::SharedTypes::v1_26_20::MaterialType liquidType
    ) const;

    MCAPI void
    setLiquidLevel(::BlockSource& region, ::BlockPos const& pos, int liquidLevel, ::CauldronLiquidType type) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool canReceiveStalactiteDrip(
        ::BlockSource&                        region,
        ::BlockPos const&                     pos,
        ::SharedTypes::v1_26_20::MaterialType liquidType
    );

    MCAPI static int clampLiquidLevel(int fillLevel);

#ifdef LL_PLAT_C
    MCAPI static void spawnBubbleParticles(::Level& level, ::Vec3 const& pos, ::Random&, int, int count);

    MCAPI static void spawnLavaParticles(::Level& level, ::Vec3 const& pos, ::Random&, int count);
#endif

    MCAPI static void spawnPotionParticles(::Level& level, ::Vec3 const& pos, ::Random& color, int count, int);

#ifdef LL_PLAT_C
    MCAPI static void spawnSplashParticles(::Level& level, ::Vec3 const& pos, ::Random&, int color, int count);
#endif
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BaseGameVersion const& CAULDRON_DOESNT_BREAK_FALLING_BLOCK_VERSION();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $addCollisionShapes(
        ::Block const&                                     block,
        ::IConstBlockSource const&                         region,
        ::BlockPos const&                                  pos,
        ::AABB const*                                      intersectTestBox,
        ::std::vector<::AABB>&                             inoutBoxes,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCFOLD ::HitResult $clip(
        ::Block const&                                     block,
        ::BlockSource const&                               region,
        ::BlockPos const&                                  pos,
        ::Vec3 const&                                      A,
        ::Vec3 const&                                      B,
        ::ShapeType                                        shapeType,
        ::optional_ref<::GetCollisionShapeInterface const> entity
    ) const;

    MCAPI void $addAABBs(
        ::Block const&             block,
        ::IConstBlockSource const& region,
        ::BlockPos const&          pos,
        ::AABB const*              intersectTestBox,
        ::std::vector<::AABB>&     inoutBoxes
    ) const;

    MCAPI bool $canProvideSupport(::Block const& face, uchar type, ::BlockSupportType) const;

    MCAPI void
    $handlePrecipitation(::BlockSource& region, ::BlockPos const& pos, float downfallAmount, float temperature) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCFOLD bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& block, ::BlockPos const&, ::Block const&, uchar) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD int $getExtraRenderLayers() const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI bool $breaksFallingBlocks(::Block const& version, ::BaseGameVersion const) const;

    MCAPI ::Brightness $getLight(::Block const& block) const;

    MCAPI ::Brightness $getLightEmission(::Block const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
