#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class EntityContext;
class Experiments;
class ItemInstance;
class Player;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlayerInteractEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class RedStoneOreBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool> mLit;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool attack(::Player* player, ::BlockPos const& pos) const /*override*/;

    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual bool canBeOriginalSurface(bool) const /*override*/;

    virtual void _lightUpBlock(::BlockSource& region, ::BlockPos const& pos) const;

    virtual void _unlightBlock(::BlockEvents::BlockRandomTickEvent& eventData) const;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ~RedStoneOreBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _poofParticles(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $attack(::Player* player, ::BlockPos const& pos) const;

    MCAPI void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCFOLD bool $canBeOriginalSurface(bool) const;

    MCAPI void $_lightUpBlock(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI void $_unlightBlock(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
