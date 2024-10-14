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

class ObserverBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    ObserverBlock& operator=(ObserverBlock const&);
    ObserverBlock(ObserverBlock const&);
    ObserverBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ObserverBlock() = default;

    // vIndex: 47
    virtual bool isSignalSource() const;

    // vIndex: 50
    virtual bool isValidAuxValue(int value) const;

    // vIndex: 59
    virtual bool
    shouldConnectToRedstone(class BlockSource& region, class BlockPos const& pos, ::Direction::Type direction) const;

    // vIndex: 66
    virtual void
    onRedstoneUpdate(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    // vIndex: 69
    virtual void movedByPiston(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 93
    virtual void
    neighborChanged(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    // vIndex: 129
    virtual int getVariant(class Block const& block) const;

    // vIndex: 131
    virtual class Block const& getRenderBlock() const;

    // vIndex: 132
    virtual uchar getMappedFace(uchar face, class Block const& block) const;

    // vIndex: 133
    virtual ::Flip getFaceFlip(uchar face, class Block const& block) const;

    // vIndex: 143
    virtual void onRemove(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 153
    virtual bool allowStateMismatchOnPlacement(class Block const& clientTarget, class Block const& serverTarget) const;

    MCAPI ObserverBlock(std::string const& nameId, int id);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _installCircuit(class BlockSource& region, class BlockPos const& pos, bool calledFromLoad, bool turnOn) const;

    MCAPI void
    _updateState(class BlockSource& region, class BlockPos const& pos, class PulseCapacitor& component, bool turnOn)
        const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI bool allowStateMismatchOnPlacement$(class Block const& clientTarget, class Block const& serverTarget) const;

    MCAPI ::Flip getFaceFlip$(uchar face, class Block const& block) const;

    MCAPI uchar getMappedFace$(uchar face, class Block const& block) const;

    MCAPI class Block const& getRenderBlock$() const;

    MCAPI int getVariant$(class Block const& block) const;

    MCAPI bool isSignalSource$() const;

    MCAPI bool isValidAuxValue$(int value) const;

    MCAPI void movedByPiston$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    neighborChanged$(class BlockSource& region, class BlockPos const& pos, class BlockPos const& neighborPos) const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void
    onRedstoneUpdate$(class BlockSource& region, class BlockPos const& pos, int strength, bool isFirstTime) const;

    MCAPI void onRemove$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool
    shouldConnectToRedstone$(class BlockSource& region, class BlockPos const& pos, ::Direction::Type direction) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI static struct Tick const& MAX_TICK_DELAY();

    // NOLINTEND
};
