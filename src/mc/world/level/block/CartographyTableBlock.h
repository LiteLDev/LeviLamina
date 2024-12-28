#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Player;
// clang-format on

class CartographyTableBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    CartographyTableBlock& operator=(CartographyTableBlock const&);
    CartographyTableBlock(CartographyTableBlock const&);
    CartographyTableBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 139
    virtual bool use(::Player& player, ::BlockPos const& pos, uchar face) const /*override*/;

    // vIndex: 30
    virtual bool isCraftingBlock() const /*override*/;

    // vIndex: 138
    virtual bool isInteractiveBlock() const /*override*/;

    // vIndex: 0
    virtual ~CartographyTableBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CartographyTableBlock(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $use(::Player& player, ::BlockPos const& pos, uchar face) const;

    MCAPI bool $isCraftingBlock() const;

    MCAPI bool $isInteractiveBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
