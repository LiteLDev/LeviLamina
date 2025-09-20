#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/LevelEvent.h"
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockPos;
class BlockSource;
class Experiments;
namespace BlockEvents { class BlockPlaceEvent; }
namespace BlockEvents { class BlockQueuedTickEvent; }
// clang-format on

class SnifferEggBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 79
    virtual bool mayPlace(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 22
    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const /*override*/;

    // vIndex: 57
    virtual bool checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const
        /*override*/;

    // vIndex: 112
    virtual ::std::string buildDescriptionId(::Block const&) const /*override*/;

    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~SnifferEggBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void onPlace(::BlockEvents::BlockPlaceEvent& eventData) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void _addToRandomTickingQueue(::BlockSource& region, ::BlockPos const& pos);

    MCNAPI static void
    _spawnParticles(::SharedTypes::Legacy::LevelEvent particleEvent, ::BlockSource& region, ::BlockPos const& pos);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $mayPlace(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI bool $checkIsPathable(::Actor& entity, ::BlockPos const& lastPathPos, ::BlockPos const& pathPos) const;

    MCNAPI ::std::string $buildDescriptionId(::Block const&) const;

    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
