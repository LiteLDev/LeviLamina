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
    GlowItemFrameBlock& operator=(GlowItemFrameBlock const&);
    GlowItemFrameBlock(GlowItemFrameBlock const&);
    GlowItemFrameBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 151
    virtual ::HashedString getSpawnedItemName() const /*override*/;

    // vIndex: 0
    virtual ~GlowItemFrameBlock() /*override*/;
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
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
