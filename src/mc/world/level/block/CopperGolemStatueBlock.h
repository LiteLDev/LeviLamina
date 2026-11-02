#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"
#include "mc/world/level/block/BlockType.h"
#include "mc/world/level/block/CopperBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class BlockPos;
class BlockSource;
class ItemInstance;
struct CopperBlockSet;
namespace BlockEvents { class ActorInternalEvent; }
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class CopperGolemStatueBlock : public ::CopperBlock<::ActorBlock> {
public:
    // prevent constructor by default
    CopperGolemStatueBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isInteractiveBlock() const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const* blockActor) const /*override*/;

    virtual bool hasComparatorSignal() const /*override*/;

    virtual int getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const
        /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CopperGolemStatueBlock(::std::string const& nameId, int id, ::CopperBlockSet const& copperSet);

    MCNAPI void onEvent(::BlockEvents::ActorInternalEvent& event) const;

    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::array<::std::string_view, 4> const& POSES();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::string const& nameId, int id, ::CopperBlockSet const& copperSet);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const* blockActor) const;

    MCNAPI bool $hasComparatorSignal() const;

    MCNAPI int
    $getComparatorSignal(::BlockSource& region, ::BlockPos const& pos, ::Block const& block, uchar dir) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
