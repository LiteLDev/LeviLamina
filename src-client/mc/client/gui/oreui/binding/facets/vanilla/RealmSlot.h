#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct RealmSlot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            id;
    ::ll::TypedStorage<8, 32, ::std::string> worldName;
    ::ll::TypedStorage<8, 32, ::std::string> slotImage;
    ::ll::TypedStorage<1, 1, bool>           empty;
    ::ll::TypedStorage<4, 4, int>            gameMode;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~RealmSlot();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace OreUI
