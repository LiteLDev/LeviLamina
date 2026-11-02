#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockSupportType.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class StonecutterBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isCraftingBlock() const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;

    virtual bool canProvideSupport(::Block const&, uchar face, ::BlockSupportType) const /*override*/;

    virtual ::Block const& getInitialDefaultState() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isCraftingBlock() const;

    MCNAPI bool $isInteractiveBlock() const;

    MCNAPI bool $canProvideSupport(::Block const&, uchar face, ::BlockSupportType) const;

    MCNAPI ::Block const& $getInitialDefaultState();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
