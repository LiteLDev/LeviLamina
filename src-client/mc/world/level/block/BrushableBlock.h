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
    // vIndex: 124
    virtual ::BlockType& init() /*override*/;

    // vIndex: 149
    virtual void onLand(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    // vIndex: 89
    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const* blockActor) const /*override*/;

    // vIndex: 146
    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;

    // vIndex: 147
    virtual ::std::string getDustParticleName(::Block const&) const /*override*/;

    // vIndex: 117
    virtual int getVariant(::Block const& block) const /*override*/;

    // vIndex: 73
    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    // vIndex: 74
    virtual bool mayConsumeFertilizer(::BlockSource& region) const /*override*/;

    // vIndex: 75
    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    // vIndex: 130
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~BrushableBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI BrushableBlock(::std::string const& nameID, int id);

    MCAPI void tick(::BlockEvents::BlockQueuedTickEvent& eventData) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::HashedString const& EmptyBrushedBlock();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameID, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::BlockType& $init();

    MCAPI void $onLand(::BlockSource& region, ::BlockPos const& pos) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const* blockActor) const;

    MCAPI ::mce::Color $getDustColor(::Block const&) const;

    MCAPI ::std::string $getDustParticleName(::Block const&) const;

    MCAPI int $getVariant(::Block const& block) const;

    MCFOLD bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCFOLD bool $mayConsumeFertilizer(::BlockSource& region) const;

    MCFOLD bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
