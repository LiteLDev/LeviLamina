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

class DoorBlock : public ::BlockLegacy {
public:
    // DoorBlock inner types define
    enum class DoorType {};

public:
    // prevent constructor by default
    DoorBlock& operator=(DoorBlock const&);
    DoorBlock(DoorBlock const&);
    DoorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DoorBlock();

    // vIndex: 2
    virtual class Block const* getNextBlockPermutation(class Block const&) const;

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const& block, class IConstBlockSource const& region, class BlockPos const& pos, class optional_ref<class GetCollisionShapeInterface const>)
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
        class Block const&,
        class IConstBlockSource const& region,
        class BlockPos const&          pos,
        class AABB&                    bufferAABB
    ) const;

    // vIndex: 13
    virtual bool getLiquidClipVolume(
        class Block const&    block,
        class BlockSource&    region,
        class BlockPos const& pos,
        class AABB&           includeBox
    ) const;

    // vIndex: 41
    virtual bool isDoorBlock() const;

    // vIndex: 51
    virtual bool canFillAtPos(class BlockSource& region, class BlockPos const& pos, class Block const&) const;

    // vIndex: 53
    virtual void onFillBlock(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 62
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 66
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 94
    virtual bool
    getSecondPart(class IConstBlockSource const& region, class BlockPos const& pos, class BlockPos& out) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 129
    virtual int getVariant(class Block const&) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 161
    virtual void _onHitByActivatingAttack(class BlockSource& region, class BlockPos const& pos, class Actor*) const;

    // vIndex: 162
    virtual void entityInside(class BlockSource& region, class BlockPos const& pos, class Actor& entity) const;

    MCAPI DoorBlock(std::string const& nameId, int id, class Material const& material, ::DoorBlock::DoorType type);

    MCAPI ::Direction::Type getBlockedDirection(class IConstBlockSource const& region, class BlockPos const& pos) const;

    MCAPI float getDoorThickness() const;

    MCAPI bool isToggled(class IConstBlockSource const& region, class BlockPos const& pos) const;

    MCAPI void
    setToggled(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor, bool toggled) const;

    MCAPI static void getDoorBlocks(
        class IConstBlockSource const& region,
        class BlockLegacy const&       expectedDoorBlockLegacy,
        class BlockPos const&          pos,
        class Block const*&            outLowerBlock,
        class Block const*&            outUpperBlock
    );

    MCAPI static uchar getDoorFacing(int facing);

    // NOLINTEND
};
