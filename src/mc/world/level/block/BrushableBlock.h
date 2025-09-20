#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/item/FertilizerType.h"
#include "mc/world/level/block/FallingBlock.h"

// auto generated forward declare list
// clang-format off
class Actor;
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class BlockType;
class Experiments;
class HashedString;
class ItemInstance;
namespace BlockEvents { class BlockQueuedTickEvent; }
namespace mce { class Color; }
// clang-format on

class BrushableBlock : public ::FallingBlock {
public:
    // BrushableBlock inner types define
    enum class Type : int {
        Sand   = 0,
        Gravel = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::BrushableBlock::Type> mType;
    // NOLINTEND

public:
    // prevent constructor by default
    BrushableBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 125
    virtual ::BlockType& init() /*override*/;

    // vIndex: 150
    virtual void onLand(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 90
    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const* blockActor) const /*override*/;

    // vIndex: 147
    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;

    // vIndex: 148
    virtual ::std::string getDustParticleName(::Block const&) const /*override*/;

    // vIndex: 118
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 74
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    // vIndex: 75
    virtual bool mayConsumeFertilizer(::BlockSource& region) const /*override*/;

    // vIndex: 76
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~BrushableBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI BrushableBlock(::std::string const& nameID, int id);

    MCNAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::HashedString const& EmptyBrushedBlock();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& nameID, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockType& $init();

    MCNAPI void $onLand(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const* blockActor) const;

    MCNAPI ::mce::Color $getDustColor(::Block const&) const;

    MCNAPI ::std::string $getDustParticleName(::Block const&) const;

    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCNAPI bool $mayConsumeFertilizer(::BlockSource& region) const;

    MCNAPI bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
