#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/ActorBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CampfireBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    CampfireBlock& operator=(CampfireBlock const&);
    CampfireBlock(CampfireBlock const&);
    CampfireBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CampfireBlock() = default;

    // vIndex: 20
    virtual bool hasVariableLighting() const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType) const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 62
    virtual bool checkIsPathable(class Actor& entity, class BlockPos const&, class BlockPos const& pathPos) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 130
    virtual bool canSpawnOn(class Actor*) const;

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 137
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 162
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    MCAPI CampfireBlock(std::string const& nameId, int id, bool spawnRandomParticles, bool setsOnFire);

    MCAPI static bool isLit(class Block const& block);

    MCAPI static bool
    tryDouseFire(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor, bool needsWater);

    MCAPI static bool tryLightFire(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(std::string const& nameId, int id, bool spawnRandomParticles, bool setsOnFire);

    MCAPI void
    animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI class ItemInstance asItemInstance$(class Block const& block, class BlockActor const*) const;

    MCAPI bool canContainLiquid$() const;

    MCAPI bool canProvideSupport$(class Block const&, uchar face, ::BlockSupportType) const;

    MCAPI bool canSpawnOn$(class Actor*) const;

    MCAPI bool checkIsPathable$(class Actor& entity, class BlockPos const&, class BlockPos const& pathPos) const;

    MCAPI void entityInside$(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    MCAPI struct Brightness getLightEmission$(class Block const& block) const;

    MCAPI bool hasVariableLighting$() const;

    MCAPI bool isWaterBlocking$() const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onRemove$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI bool waterSpreadCausesSpawn$() const;

    // NOLINTEND
};
