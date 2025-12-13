#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Actor;
// clang-format on

class RedstoneBlock : public ::BlockType {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool canSpawnOn(::Actor*) const /*override*/;

    virtual ~RedstoneBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $canSpawnOn(::Actor*) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
