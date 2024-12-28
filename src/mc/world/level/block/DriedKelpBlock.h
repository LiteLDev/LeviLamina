#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Material;
// clang-format on

class DriedKelpBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    DriedKelpBlock& operator=(DriedKelpBlock const&);
    DriedKelpBlock(DriedKelpBlock const&);
    DriedKelpBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DriedKelpBlock() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DriedKelpBlock(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string const& nameId, int id, ::Material const& material);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
