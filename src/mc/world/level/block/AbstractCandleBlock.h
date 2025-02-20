#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class Vec3;
struct BlockAnimateTickData;
struct Brightness;
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class AbstractCandleBlock : public ::BlockLegacy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 20
    virtual bool hasVariableLighting() const /*override*/;

    // vIndex: 138
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 31
    virtual bool isLavaBlocking() const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 126
    virtual ::Brightness getLightEmission(::Block const& block) const /*override*/;

    // vIndex: 149
    virtual void entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const /*override*/;

    // vIndex: 148
    virtual void _onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 150
    virtual int _getNumCandles(::Block const&) const;

    // vIndex: 151
    virtual void _iterateCandles(::Block const&, ::BlockPos const&, ::std::function<void(::Vec3 const&, int)>) const;

    // vIndex: 152
    virtual void _tryLightOnFire(::BlockSource&, ::BlockPos const&, ::Actor*) const;

    // vIndex: 0
    virtual ~AbstractCandleBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addExtinguishEffects(::Block const& region, ::BlockSource& pos, ::BlockPos const&) const;

    MCAPI void _checkForWaterlogging(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void
    _extinguish(::Actor* extinguisher, ::Block const& block, ::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $hasVariableLighting() const;

    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD bool $isLavaBlocking() const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCAPI ::Brightness $getLightEmission(::Block const& block) const;

    MCAPI void $entityInside(::BlockSource& region, ::BlockPos const& pos, ::Actor& entity) const;

    MCAPI void $_onHitByActivatingAttack(::BlockSource& region, ::BlockPos const& pos, ::Actor*) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND
};
