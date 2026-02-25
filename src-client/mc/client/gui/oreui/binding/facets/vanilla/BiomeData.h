#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct BiomeData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> label;
    ::ll::TypedStorage<4, 4, int>            id;
    ::ll::TypedStorage<4, 4, int>            dimension;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~BiomeData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
