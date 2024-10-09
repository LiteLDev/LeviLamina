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

class SkullBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    SkullBlock& operator=(SkullBlock const&);
    SkullBlock(SkullBlock const&);
    SkullBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SkullBlock() = default;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const& block, uchar face, ::BlockSupportType type) const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const* blockActor) const;

    // vIndex: 98
    virtual class Block const& getPlacementBlock(
        class Actor const&    by,
        class BlockPos const& pos,
        uchar                 face,
        class Vec3 const&     clickPos,
        int                   itemValue
    ) const;

    // vIndex: 119
    virtual std::string buildDescriptionId(class Block const& block) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI SkullBlock(std::string const& nameId, int id);

    MCAPI bool checkMobSpawn(
        class Level&           level,
        class BlockSource&     region,
        class BlockPos const&  pos,
        class SkullBlockActor& placedSkull
    ) const;

    MCAPI static std::string getTypeDescriptionId(int type);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _updatedDragonCircuit(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
