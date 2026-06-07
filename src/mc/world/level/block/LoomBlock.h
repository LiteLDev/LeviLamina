#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/FaceDirectionalBlock.h"

// auto generated forward declare list
// clang-format off
namespace BlockEvents { class BlockPlayerInteractEvent; }
// clang-format on

class LoomBlock : public ::FaceDirectionalBlock {
public:
    // prevent constructor by default
    LoomBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool isCraftingBlock() const /*override*/;

    virtual bool isInteractiveBlock() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LoomBlock(::std::string const& nameId, int id);

    MCFOLD void use(::BlockEvents::BlockPlayerInteractEvent& eventData) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $isCraftingBlock() const;

    MCFOLD bool $isInteractiveBlock() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
