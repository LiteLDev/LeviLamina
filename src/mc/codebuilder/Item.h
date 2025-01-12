#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct Item {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk841754;
    ::ll::UntypedStorage<8, 8>  mUnk28281b;
    ::ll::UntypedStorage<8, 32> mUnk49d480;
    // NOLINTEND

public:
    // prevent constructor by default
    Item& operator=(Item const&);
    Item(Item const&);
    Item();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~Item();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace CodeBuilder
