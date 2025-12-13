#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
#include "mc/world/level/block/BlockType.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockActor;
class ItemInstance;
// clang-format on

class StoneBricksBlock : public ::BlockType {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString const> mInfestedBlockId;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Block const* tryGetInfested(::Block const& block) const /*override*/;

    virtual ::ItemInstance asItemInstance(::Block const& block, ::BlockActor const*) const /*override*/;

    virtual ~StoneBricksBlock() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD ::Block const* $tryGetInfested(::Block const& block) const;

    MCFOLD ::ItemInstance $asItemInstance(::Block const& block, ::BlockActor const*) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
