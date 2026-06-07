#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ItemFrameBlock.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

class GlowItemFrameBlock : public ::ItemFrameBlock {
public:
    // prevent constructor by default
    GlowItemFrameBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::HashedString getSpawnedItemName() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GlowItemFrameBlock(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::HashedString $getSpawnedItemName() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
