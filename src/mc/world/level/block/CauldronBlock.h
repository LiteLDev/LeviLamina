#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/shared_types/v1_26_20/block/MaterialType.h"
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
class GetCollisionShapeInterface;
class HitResult;
class IConstBlockSource;
class ItemInstance;
class Level;
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

    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const /*override*/;

    virtual void
    handlePrecipitation(::BlockSource& region, ::BlockPos const& pos, float downfallAmount, float temperature) const
        /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual int getExtraRenderLayers() const /*override*/;

    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    virtual bool breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const /*override*/;

    virtual ::Brightness getLight(::Block const& block) const /*override*/;

    virtual ::Brightness getLightEmission(::Block const& block) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CauldronBlock(::std::string const& nameId, int id);

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

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

#ifdef LL_PLAT_C
    MCAPI static void spawnBubbleParticles(::Level& level, ::Vec3 const& pos, ::Random&, int, int count);

    MCAPI static void spawnLavaParticles(::Level& level, ::Vec3 const& pos, ::Random&, int count);

    MCAPI static void spawnPotionParticles(::Level& level, ::Vec3 const& pos, ::Random&, int color, int count);

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

    MCAPI bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType type) const;

    MCAPI void
    $handlePrecipitation(::BlockSource& region, ::BlockPos const& pos, float downfallAmount, float temperature) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCFOLD bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD int $getExtraRenderLayers() const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI bool $breaksFallingBlocks(::Block const& block, ::BaseGameVersion const version) const;

    MCAPI ::Brightness $getLight(::Block const& block) const;

    MCAPI ::Brightness $getLightEmission(::Block const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
