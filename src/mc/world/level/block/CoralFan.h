#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BushBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CoralFan : public ::BushBlock {
public:
    // prevent constructor by default
    CoralFan& operator=(CoralFan const&);
    CoralFan(CoralFan const&);
    CoralFan();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CoralFan();

    // vIndex: 5
    virtual class AABB
    getCollisionShape(class Block const&, class IConstBlockSource const&, class BlockPos const&, class optional_ref<class GetCollisionShapeInterface const>)
        const;

    // vIndex: 9
    virtual class AABB const& getOutline(
        class Block const& block,
        class IConstBlockSource const&,
        class BlockPos const& pos,
        class AABB&           bufferValue
    ) const;

    // vIndex: 16
    virtual class Vec3 randomlyModifyPosition(class BlockPos const& pos) const;

    // vIndex: 33
    virtual bool isWaterBlocking() const;

    // vIndex: 50
    virtual bool isValidAuxValue(int auxValue) const;

    // vIndex: 57
    virtual bool canContainLiquid() const;

    // vIndex: 62
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 81
    virtual bool mayConsumeFertilizer(class BlockSource&) const;

    // vIndex: 87
    virtual bool mayPlaceOn(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const&) const;

    // vIndex: 121
    virtual int getColor(class Block const&) const;

    // vIndex: 122
    virtual int getColor(class BlockSource&, class BlockPos const&, class Block const&) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 160
    virtual class mce::Color
    getMapColor(class BlockSource& region, class BlockPos const& pos, class Block const& block) const;

    // vIndex: 163
    virtual void checkAlive(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI CoralFan(std::string const& nameId, int id, class HashedString const& deadVersion);

    MCAPI class HashedString const& getDeadVersion() const;

    // NOLINTEND
};
