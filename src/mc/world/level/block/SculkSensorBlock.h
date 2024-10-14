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
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class SculkSensorBlock : public ::ActorBlock {
public:
    // prevent constructor by default
    SculkSensorBlock& operator=(SculkSensorBlock const&);
    SculkSensorBlock(SculkSensorBlock const&);
    SculkSensorBlock();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SculkSensorBlock() = default;

    // vIndex: 19
    virtual bool
    liquidCanFlowIntoFromDirection(uchar flowIntoFacing, std::function<class Block const&(class BlockPos const&)> const&, class BlockPos const&)
        const;

    // vIndex: 23
    virtual bool canProvideSupport(class Block const&, uchar face, ::BlockSupportType) const;

    // vIndex: 47
    virtual bool isSignalSource() const;

    // vIndex: 59
    virtual bool shouldConnectToRedstone(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    // vIndex: 72
    virtual void setupRedstoneComponent(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 111
    virtual bool hasComparatorSignal() const;

    // vIndex: 112
    virtual int
    getComparatorSignal(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar) const;

    // vIndex: 134
    virtual void
    animateTickBedrockLegacy(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 137
    virtual struct Brightness getLightEmission(class Block const& block) const;

    // vIndex: 145
    virtual void onStandOn(class EntityContext& entityContext, class BlockPos const& pos) const;

    // vIndex: 146
    virtual void onPlace(class BlockSource& region, class BlockPos const& pos) const;

    // vIndex: 148
    virtual void tick(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // vIndex: 159
    virtual struct Brightness getEmissiveBrightness(class Block const& block) const;

    MCAPI SculkSensorBlock(std::string const& nameId, int id);

    MCAPI SculkSensorBlock(std::string const& nameId, int id, ::BlockActorType type, int activeTicks);

    MCAPI static bool isActive(class BlockSource& region, class BlockPos const& pos);

    MCAPI static bool isOnCooldown(class BlockSource& region, class BlockPos const& pos);

    MCAPI static void setActivePhase(
        class BlockSource&    region,
        class BlockPos const& pos,
        class Actor*          source,
        int                   redstoneStrength,
        int                   vibrationFrequency
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

    MCAPI void
    animateTickBedrockLegacy$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI bool canProvideSupport$(class Block const&, uchar face, ::BlockSupportType) const;

    MCAPI int
    getComparatorSignal$(class BlockSource& region, class BlockPos const& pos, class Block const& block, uchar) const;

    MCAPI struct Brightness getEmissiveBrightness$(class Block const& block) const;

    MCAPI struct Brightness getLightEmission$(class Block const& block) const;

    MCAPI bool hasComparatorSignal$() const;

    MCAPI bool isSignalSource$() const;

    MCAPI bool
    liquidCanFlowIntoFromDirection$(uchar flowIntoFacing, std::function<class Block const&(class BlockPos const&)> const&, class BlockPos const&)
        const;

    MCAPI void onPlace$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void onStandOn$(class EntityContext& entityContext, class BlockPos const& pos) const;

    MCAPI void setupRedstoneComponent$(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool shouldConnectToRedstone$(class BlockSource&, class BlockPos const&, ::Direction::Type) const;

    MCAPI void tick$(class BlockSource& region, class BlockPos const& pos, class Random&) const;

    // NOLINTEND
};
