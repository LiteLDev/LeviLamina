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
    virtual void onLand(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const* blockActor) const /*override*/;

    virtual ::mce::Color getDustColor(::Block const&) const /*override*/;

    virtual ::std::string getDustParticleName(::Block const&) const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual bool
    onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const
        /*override*/;

    virtual bool mayConsumeFertilizer(::BlockSource& region) const /*override*/;

    virtual bool canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const
        /*override*/;

    virtual ::Block const& getInitialDefaultState() /*override*/;
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
    MCNAPI void $onLand(::BlockSource& region, ::BlockPos const& pos) const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const* blockActor) const;

    MCNAPI ::mce::Color $getDustColor(::Block const&) const;

    MCNAPI ::std::string $getDustParticleName(::Block const&) const;

    MCNAPI int $getVariant(::Block const& block) const;

    MCNAPI bool
    $onFertilized(::BlockSource& region, ::BlockPos const& pos, ::Actor* actor, ::FertilizerType fType) const;

    MCNAPI bool $mayConsumeFertilizer(::BlockSource& region) const;

    MCNAPI bool $canBeFertilized(::BlockSource& region, ::BlockPos const& pos, ::Block const& aboveBlock) const;

    MCNAPI ::Block const& $getInitialDefaultState();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
