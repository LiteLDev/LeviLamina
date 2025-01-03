#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/Direction.h"
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockLegacy;
class BlockPos;
class BlockSource;
class EntityContext;
class Experiments;
class Random;
struct Brightness;
namespace BlockEvents { class BlockPlaceEvent; }
// clang-format on

class SculkSensorBlock : public ::ActorBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mActiveTicks;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 23
    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType) const /*override*/;

    // vIndex: 134
    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const /*override*/;

    // vIndex: 67
    virtual void setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 44
    virtual bool isSignalSource() const /*override*/;

    // vIndex: 54
    virtual bool
    shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const
        /*override*/;

    // vIndex: 136
    virtual void tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const
        /*override*/;

    // vIndex: 126
    virtual ::Brightness getLightEmission(::Block const& block) const /*override*/;

    // vIndex: 147
    virtual ::Brightness getEmissiveBrightness(::Block const& block) const /*override*/;

    // vIndex: 105
    virtual bool hasComparatorSignal() const /*override*/;

    // vIndex: 106
    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    // vIndex: 19
    virtual bool liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~SculkSensorBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SculkSensorBlock(::std::string const& nameId, int id);

    MCAPI SculkSensorBlock(::std::string const& nameId, int id, ::BlockActorType type, int activeTicks);

    MCAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _setCooldownPhase(::BlockSource& region, ::Block const& block, ::BlockPos const& pos);

    MCAPI static void _setInactivePhase(::BlockSource& region, ::Block const& block, ::BlockPos const& pos);

    MCAPI static bool isActive(::Block const& block);

    MCAPI static bool isActive(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static bool isOnCooldown(::Block const& block);

    MCAPI static bool isOnCooldown(::BlockSource& region, ::BlockPos const& pos);

    MCAPI static void setActivePhase(
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::Actor*          source,
        int               redstoneStrength,
        int               vibrationFrequency
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);

    MCAPI void* $ctor(::std::string const& nameId, int id, ::BlockActorType type, int activeTicks);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType) const;

    MCAPI void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCAPI void $setupRedstoneComponent(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI bool $isSignalSource() const;

    MCAPI bool
    $shouldConnectToRedstone(::BlockSource& region, ::BlockPos const& pos, ::Direction::Type direction) const;

    MCAPI void $tick(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void $animateTickBedrockLegacy(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI ::Brightness $getLightEmission(::Block const& block) const;

    MCAPI ::Brightness $getEmissiveBrightness(::Block const& block) const;

    MCAPI bool $hasComparatorSignal() const;

    MCAPI int $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCAPI bool $liquidCanFlowIntoFromDirection(
        uchar                                                     flowIntoFacing,
        ::std::function<::Block const&(::BlockPos const&)> const& getBlock,
        ::BlockPos const&                                         pos
    ) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
