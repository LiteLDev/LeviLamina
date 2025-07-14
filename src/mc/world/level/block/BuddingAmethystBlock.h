#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/AmethystBlock.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class Experiments;
class ItemInstance;
namespace BlockEvents { class BlockRandomTickEvent; }
// clang-format on

class BuddingAmethystBlock : public ::AmethystBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 89
    virtual ::ItemInstance asItemInstance(::Block const&, ::BlockActor const*) const /*override*/;

    // vIndex: 46
    virtual bool isSilentWhenJumpingOff() const /*override*/;

    // vIndex: 130
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~BuddingAmethystBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void randomTick(::BlockEvents::BlockRandomTickEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::ItemInstance $asItemInstance(::Block const&, ::BlockActor const*) const;

    MCFOLD bool $isSilentWhenJumpingOff() const;

    MCAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
