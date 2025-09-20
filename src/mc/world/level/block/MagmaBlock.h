#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Experiments;
class Random;
struct BlockAnimateTickData;
struct Brightness;
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class MagmaBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 123
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 87
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 143
    virtual ::Brightness getEmissiveBrightness(::Block const&) const /*override*/;

    // vIndex: 135
    virtual bool shouldTickOnSetBlock() const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~MagmaBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void addToTickQueue(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCNAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCNAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCNAPI ::Brightness $getEmissiveBrightness(::Block const&) const;

    MCNAPI bool $shouldTickOnSetBlock() const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
