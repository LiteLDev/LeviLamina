#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/actor/BlockActorType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class Experiments;
class ItemInstance;
struct BlockAnimateTickData;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class FurnaceBlock : public ::ActorBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool const> mLit;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual uchar getMappedFace(uchar face, ::Block const& block) const /*override*/;

    virtual void animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    virtual void onRemove(::BlockSource& region, ::BlockPos const& pos) const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual bool isContainerBlock() const /*override*/;

    virtual bool isCraftingBlock() const /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;

    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ~FurnaceBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void setLit(
        bool              lit,
        ::BlockSource&    region,
        ::BlockPos const& pos,
        ::BlockActorType  blockActorType,
        ::Block const&    unlitFurnace,
        ::Block const&    litFurnace
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI uchar $getMappedFace(uchar face, ::Block const& block) const;

    MCAPI void $animateTickBedrockLegacy(::BlockAnimateTickData const& tickData) const;

    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCAPI void $onRemove(::BlockSource& region, ::BlockPos const& pos) const;

    MCFOLD bool $isInteractiveBlock() const;

    MCFOLD bool $isContainerBlock() const;

    MCFOLD bool $isCraftingBlock() const;

    MCFOLD bool $hasComparatorSignal() const;

    MCFOLD int
    $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
