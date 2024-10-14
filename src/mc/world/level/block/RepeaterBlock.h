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
#include "mc/world/level/block/DiodeBlock.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class RepeaterBlock : public ::DiodeBlock {
public:
    // prevent constructor by default
    RepeaterBlock& operator=(RepeaterBlock const&);
    RepeaterBlock(RepeaterBlock const&);
    RepeaterBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~RepeaterBlock() = default;

    // vIndex: 59
    virtual bool
    shouldConnectToRedstone(class BlockSource& region, class BlockPos const& pos, ::Direction::Type direction) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 76
    virtual bool isPreservingMediumWhenPlaced(class BlockLegacy const* medium) const;

    // vIndex: 86
    virtual bool mayPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 96
    virtual class ItemInstance asItemInstance(class Block const&, class BlockActor const*) const;

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 150
    virtual bool isInteractiveBlock() const;

    // vIndex: 152
    virtual bool use(class Player& player, class BlockPos const& pos, uchar face) const;

    // vIndex: 154
    virtual bool canSurvive(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 164
    virtual bool isLocked(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 170
    virtual bool isAlternateInput(class Block const& block) const;

    // vIndex: 174
    virtual int getTurnOnDelay(class Block const& block) const;

    // vIndex: 175
    virtual class Block const* getOnBlock(class Block const* block) const;

    // vIndex: 176
    virtual class Block const* getOffBlock(class Block const* block) const;

    MCAPI RepeaterBlock(std::string const& nameId, int id, bool on);

    MCAPI void updateDelay(class BlockSource& region, class BlockPos const& pos, bool doIncrement) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void
    animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI class ItemInstance asItemInstance$(class Block const&, class BlockActor const*) const;

    MCAPI bool canSurvive$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI class Block const* getOffBlock$(class Block const* block) const;

    MCAPI class Block const* getOnBlock$(class Block const* block) const;

    MCAPI int getTurnOnDelay$(class Block const& block) const;

    MCAPI bool isAlternateInput$(class Block const& block) const;

    MCAPI bool isInteractiveBlock$() const;

    MCAPI bool isLocked$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool isPreservingMediumWhenPlaced$(class BlockLegacy const* medium) const;

    MCAPI bool mayPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onRemove$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool
    shouldConnectToRedstone$(class BlockSource& region, class BlockPos const& pos, ::Direction::Type direction) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool use$(class Player& player, class BlockPos const& pos, uchar face) const;

    MCAPI static ::ll::CArrayT<int const>& DELAYS();

    MCAPI static ::ll::CArrayT<float const>& DELAY_RENDER_OFFSETS();

    // NOLINTEND
};
