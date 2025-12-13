#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/RotatedPillarBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class Experiments;
class ItemInstance;
namespace BlockEvents { class BlockEntityFallOnEvent; }
// clang-format on

class HayBlock : public ::RotatedPillarBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const*) const /*override*/;

    virtual int getVariant(::Block const& block) const /*override*/;

    virtual ~HayBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void onFallOn(::BlockEvents::BlockEntityFallOnEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);

    MCFOLD ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const*) const;

    MCFOLD int $getVariant(::Block const& block) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
