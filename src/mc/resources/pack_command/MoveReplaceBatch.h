#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackCommand {

struct MoveReplaceBatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc06574;
    // NOLINTEND

public:
    // prevent constructor by default
    MoveReplaceBatch& operator=(MoveReplaceBatch const&);
    MoveReplaceBatch(MoveReplaceBatch const&);
    MoveReplaceBatch();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MoveReplaceBatch();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PackCommand
