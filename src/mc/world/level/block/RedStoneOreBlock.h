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
    // vIndex: 95
    virtual bool attack(::Player* player, ::BlockPos const& pos) const /*override*/;

    // vIndex: 134
    virtual void onStandOn(::EntityContext& entity, ::BlockPos const& pos) const /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 46
    virtual bool canBeOriginalSurface() const /*override*/;

    // vIndex: 147
    virtual void _lightUpBlock(::BlockSource& region, ::BlockPos const& pos) const;

    // vIndex: 148
    virtual void _unlightBlock(::BlockEvents::BlockRandomTickEvent& eventData) const;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~RedStoneOreBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _poofParticles(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $attack(::Player* player, ::BlockPos const& pos) const;

    MCNAPI void $onStandOn(::EntityContext& entity, ::BlockPos const& pos) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCNAPI bool $canBeOriginalSurface() const;

    MCNAPI void $_lightUpBlock(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI void $_unlightBlock(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
