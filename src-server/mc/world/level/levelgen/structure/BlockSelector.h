#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Block;
class Random;
// clang-format on

class BlockSelector {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockSelector();

    // vIndex: 1
    virtual ::Block const& next(::Random&, int, int, int, bool) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
