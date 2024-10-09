#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockLegacy.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class MultifaceBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    MultifaceBlock& operator=(MultifaceBlock const&);
    MultifaceBlock(MultifaceBlock const&);
    MultifaceBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MultifaceBlock() = default;

    // vIndex: 4
    virtual class HitResult
    clip(class Block const& block, class BlockSource const&, class BlockPos const& pos, class Vec3 const& origin, class Vec3 const& end, ::ShapeType, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const&             block,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB&                    bufferValue
    ) const;

    // vIndex: 10
    virtual class AABB const& getVisualShapeInWorld(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const&,
        class AABB& bufferAABB
    ) const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 46
    virtual bool isMultifaceBlock() const;

    // vIndex: 52
    virtual class Block const& sanitizeFillBlock(class Block const& block) const;

    // vIndex: 85
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 98
    virtual class Block const&
    getPlacementBlock(class Actor const& by, class BlockPos const& pos, uchar face, class Vec3 const&, int) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI MultifaceBlock(std::string const& nameId, int id, class Material const& material);

    MCAPI void removeFace(
        class IBlockWorldGenAPI& target,
        class BlockSource*       region,
        class Block const&       block,
        class BlockPos const&    pos,
        uchar                    faceDirection,
        bool                     canSpawnParticles
    ) const;

    MCAPI static int _getNumSides(class Block const& block);

    MCAPI static int convertOldMultifaceToNewMultifaceValue(int oldMultifaceDirections);

    MCAPI static class Block const& getBlockForPlacement(
        class Block const&    oldBlock,
        class Block const&    placementBlock,
        class BlockSource&    region,
        class BlockPos const& placementPos,
        uchar                 placementDirection
    );

    MCAPI static class Block const& getBlockForPlacementWorldGen(
        class Block const&       oldBlock,
        class Block const&       placementBlock,
        class IBlockWorldGenAPI& region,
        class BlockPos const&    placementPos,
        uchar                    placementDirection
    );

    MCAPI static int getMultifaceValueFromFace(uchar face);

    MCAPI static bool hasFace(class Block const& block, uchar faceDirection);

    MCAPI static int const MULTIFACE_ALL;

    MCAPI static int const MULTIFACE_DOWN;

    MCAPI static int const MULTIFACE_EAST;

    MCAPI static int const MULTIFACE_NORTH;

    MCAPI static int const MULTIFACE_SIDES;

    MCAPI static int const MULTIFACE_SOUTH;

    MCAPI static int const MULTIFACE_UP;

    MCAPI static int const MULTIFACE_WEST;

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI bool
    _canSpread(class IBlockWorldGenAPI& target, class Block const& block, class BlockPos const& pos, uchar startingFace)
        const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _removeBlock(
        class IBlockWorldGenAPI& target,
        class BlockSource*       region,
        class BlockPos const&    pos,
        bool                     canSpawnParticles
    ) const;

    // NOLINTEND
};
