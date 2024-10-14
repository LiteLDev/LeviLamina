#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/world/Direction.h"
#include "mc/world/Flip.h"
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/ShapeType.h"
#include "mc/world/level/block/AbstractCandleBlock.h"
#include "mc/world/level/block/BlockProperty.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/BlockSupportType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class CandleBlock : public ::AbstractCandleBlock {
public:
    // prevent constructor by default
    CandleBlock& operator=(CandleBlock const&);
    CandleBlock(CandleBlock const&);
    CandleBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CandleBlock() = default;

    // vIndex: 11
    virtual class AABB const& getVisualShape(class Block const& block, class AABB& bufferAABB) const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType type) const;

    // vIndex: 56
    virtual bool waterSpreadCausesSpawn() const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const& block, class BlockActor const*) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar) const;

    // vIndex: 163
    virtual int _getNumCandles(class Block const& block) const;

    // vIndex: 164
    virtual void _iterateCandles(
        class Block const&                          block,
        class BlockPos const&                       pos,
        std::function<void(class Vec3 const&, int)> callback
    ) const;

    // vIndex: 165
    virtual void _tryLightOnFire(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor) const;

    // vIndex: 166
    virtual void onLand(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 167
    virtual bool isFreeToFall(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 168
    virtual void
    startFalling(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    // vIndex: 169
    virtual int getInputSignal(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI CandleBlock(std::string const& nameId, int id);

    MCAPI static bool tryLightFire(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static void _forEachCandle(
        class Block const&                          block,
        class BlockPos const&                       pos,
        std::function<void(class Vec3 const&, int)> callback
    );

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI int _getNumCandles$(class Block const& block) const;

    MCAPI void _iterateCandles$(
        class Block const&                          block,
        class BlockPos const&                       pos,
        std::function<void(class Vec3 const&, int)> callback
    ) const;

    MCAPI void _tryLightOnFire$(class BlockSource& region, class BlockPos const& pos, class Actor* sourceActor) const;

    MCAPI class ItemInstance asItemInstance$(class Block const& block, class BlockActor const*) const;

    MCAPI bool canProvideSupport$(class Block const&, uchar face, ::BlockSupportType type) const;

    MCAPI int getInputSignal$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class AABB const& getVisualShape$(class Block const& block, class AABB& bufferAABB) const;

    MCAPI bool isFreeToFall$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI void onLand$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    startFalling$(class BlockSource& region, class BlockPos const& pos, class Block const& oldBlock, bool creative)
        const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar) const;

    MCAPI bool waterSpreadCausesSpawn$() const;

    // NOLINTEND
};
