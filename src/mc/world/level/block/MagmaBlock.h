#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

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

class MagmaBlock : public ::BlockLegacy {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 117
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 122
    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    // vIndex: 86
    virtual void neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const
        /*override*/;

    // vIndex: 142
    virtual ::Brightness getEmissiveBrightness(::Block const&) const /*override*/;

    // vIndex: 134
    virtual bool shouldTickOnSetBlock() const /*override*/;

    // vIndex: 130
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~MagmaBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void addToTickQueue(::BlockSource& region, ::BlockPos const& pos, ::Random& random) const;

    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;

    MCFOLD void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD int $getVariant(::Block const& block) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCAPI void $neighborChanged(::BlockSource& region, ::BlockPos const& pos, ::BlockPos const& neighborPos) const;

    MCAPI ::Brightness $getEmissiveBrightness(::Block const&) const;

    MCFOLD bool $shouldTickOnSetBlock() const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
