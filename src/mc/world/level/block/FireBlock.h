#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class FireBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    FireBlock& operator=(FireBlock const&);
    FireBlock(FireBlock const&);
    FireBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FireBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 62
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 83
    virtual bool mayPick() const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 134
    virtual void animateTickBedrockLegacy(class BlockSource&, class BlockPos const&, class Random&) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 162
    virtual void entityInside(class BlockSource&, class BlockPos const&, class Actor& entity) const;

    MCAPI FireBlock(std::string const& nameId, int id);

    MCAPI void
    checkBurn(class BlockSource& region, class BlockPos const& pos, int chance, class Randomize& randomize, int age)
        const;

    MCAPI static bool isSolidToppedBlock(class BlockSource& region, class BlockPos const& pos);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _tryAddToTickingQueue(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool _trySpawnSoulFire(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI float getFireOdds(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool isValidFireLocation(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
