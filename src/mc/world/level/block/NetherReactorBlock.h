#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/ActorBlockBase.h"

// auto generated forward declare list
// clang-format off
class BlockLegacy;
class Material;
// clang-format on

class NetherReactorBlock : public ::ActorBlock {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetherReactorBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI NetherReactorBlock(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
