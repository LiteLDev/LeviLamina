#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/optional_ref.h"
#include "mc/enums/FertilizerType.h"
#include "mc/enums/Flip.h"
#include "mc/enums/ShapeType.h"
#include "mc/world/Direction.h"
#include "mc/world/level/block/AbstractCandleBlock.h"
#include "mc/world/level/block/utils/BlockProperty.h"
#include "mc/world/level/block/utils/BlockRenderLayer.h"
#include "mc/world/level/block/utils/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CandleCakeBlock : public ::AbstractCandleBlock {
public:
    // prevent constructor by default
    CandleCakeBlock& operator=(CandleCakeBlock const&);
    CandleCakeBlock(CandleCakeBlock const&);
    CandleCakeBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CandleCakeBlock() = default;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const&, class AABB&) const;

    // vIndex: 45
    virtual bool isCandleCakeBlock() const;

    // vIndex: 62
    virtual bool
    checkIsPathable(class Actor& entity, class BlockPos const& lastPathPos, class BlockPos const& pathPos) const;

    // vIndex: 85
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos, uchar face) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar dir)
        const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 163
    virtual int _getNumCandles(class Block const&) const;

    // vIndex: 164
    virtual void _iterateCandles(
        class Block const&                          block,
        class BlockPos const&                       pos,
        std::function<void(class Vec3 const&, int)> callback
    ) const;

    // vIndex: 165
    virtual void _tryLightOnFire(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor) const;

    MCAPI CandleCakeBlock(std::string const& nameId, int id);

    MCAPI static class Block const& getCandleCakeFromCandle(class Block const&);

    MCAPI static class Block const& getCandleFromCandleCake(class Block const&);

    MCAPI static bool tryLightFire(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void
    _forEachCandle(class Block const&, class BlockPos const& pos, std::function<void(class Vec3 const&, int)> callback);

    // NOLINTEND
};
