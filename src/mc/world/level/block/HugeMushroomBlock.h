#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/BlockLegacy.h"

// auto generated forward declare list
// clang-format off
class Material;
// clang-format on

class HugeMushroomBlock : public ::BlockLegacy {
public:
    // prevent constructor by default
    HugeMushroomBlock& operator=(HugeMushroomBlock const&);
    HugeMushroomBlock(HugeMushroomBlock const&);
    HugeMushroomBlock();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 125
    virtual ::BlockLegacy& init() /*override*/;

    // vIndex: 0
    virtual ~HugeMushroomBlock() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI HugeMushroomBlock(::std::string const& nameId, int id, ::Material const& material);
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
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockLegacy& $init();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
