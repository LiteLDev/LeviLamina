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

class VineBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    VineBlock& operator=(VineBlock const&);
    VineBlock(VineBlock const&);
    VineBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VineBlock() = default;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const&
    getOutline(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 10
    virtual class AABB const&
    getVisualShapeInWorld(class Block const&, class IConstBlockSource const&, class BlockPos const&, class AABB&) const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 85
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 98
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 121
    virtual int getColor(class Block const& block) const;

    // vIndex: 122
    virtual int getColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 149
    virtual void randomTick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 160
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    MCAPI VineBlock(std::string const& nameId, int id);

    MCAPI void growDown(class BlockSource& region, class BlockPos const& pos, int) const;

    MCAPI void growSideways(class BlockSource& region, class BlockPos const& pos, int) const;

    MCAPI void growUp(class BlockSource& region, class BlockPos const& pos, int) const;

    MCAPI static class Block const& getBlockForFace(uchar face);

    MCAPI static bool isAcceptableNeighbour(class Block const& block);

    MCAPI static int const VINE_ALL;

    MCAPI static int const VINE_EAST;

    MCAPI static int const VINE_NORTH;

    MCAPI static int const VINE_SOUTH;

    MCAPI static int const VINE_WEST;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _canGrowDown(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool _canGrowUp(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool _canSideSpread(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI int _nextVineDirections(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
