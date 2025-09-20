#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class Experiments;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class StonecutterBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 125
    virtual ::BlockType& init() /*override*/;

    // vIndex: 29
    virtual bool isCraftingBlock() const /*override*/;

    // vIndex: 136
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 22
    virtual bool canProvideSupport(::Block const&, uchar, ::BlockSupportType) const /*override*/;

    // vIndex: 131
    virtual void _addHardCodedBlockComponents(::Experiments const&) /*override*/;

    // vIndex: 0
    virtual ~StonecutterBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockType& $init();

    MCNAPI bool $isCraftingBlock() const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI void $_addHardCodedBlockComponents(::Experiments const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
