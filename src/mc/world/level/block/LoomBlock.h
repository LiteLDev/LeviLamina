#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FaceDirectionalBlock.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class Player;
// clang-format on

class LoomBlock : public ::FaceDirectionalBlock {
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
    virtual ~LoomBlock() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $use(::Player& player, ::BlockPos const& pos, uchar face) const;

    MCFOLD bool $isCraftingBlock() const;

    MCFOLD bool $isInteractiveBlock() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
