#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackCommand {

struct PackCommandHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkf5d1b4;
    // NOLINTEND

public:
    // prevent constructor by default
    PackCommandHandle& operator=(PackCommandHandle const&);
    PackCommandHandle(PackCommandHandle const&);
    PackCommandHandle();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PackCommandHandle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace PackCommand
